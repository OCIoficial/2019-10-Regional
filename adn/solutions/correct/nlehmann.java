import java.io.*;
import java.util.*;

class adn {
    static public void main(String[] args) throws Exception {
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;

        int N = Integer.parseInt(in.readLine());

        int arr[] = new int[N];
        st = new StringTokenizer(in.readLine());
        for (int i = 0; i < N; ++i) {
            arr[i] = Integer.parseInt(st.nextToken());
        }

        int pattern[] = new int[3];
        st = new StringTokenizer(in.readLine());
        for (int i = 0; i < 3; ++i) {
            pattern[i] = Integer.parseInt(st.nextToken());
        }

        int count = 0;
        for (int i = 0; i < N - 2; ++i) {
            if (pattern[0] == arr[i] && pattern[1] == arr[i+1] && pattern[2] == arr[i+2]) {
                count += 1;
            }
        }
        System.out.println(count);
    }
}
