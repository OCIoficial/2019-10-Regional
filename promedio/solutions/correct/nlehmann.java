import java.io.*;
import java.util.*;

class promedio {
    static public void main(String[] args) throws Exception {
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;

        st = new StringTokenizer(in.readLine());
        int N = Integer.parseInt(st.nextToken());
        int T = Integer.parseInt(st.nextToken());

        int arr[] = new int[N+1];
        st = new StringTokenizer(in.readLine());
        for (int i = 1; i <= N; i++) {
            arr[i] = Integer.parseInt(st.nextToken()) - T;
            arr[i] += arr[i-1];
        }

        Map<Integer, Integer> m = new TreeMap<Integer, Integer>();
        for (int i = 1; i <=N; ++i) {
            m.put(arr[i], i);
        }

        int maxi = 0;
        int maxl = 0;
        for (int i = 0; i <=N; ++i) {
            int v = arr[i];
            if (m.containsKey(v) && m.get(v) != i && m.get(v) - i > maxl) {
                maxi = i;
                maxl = m.get(v) - i;
            }
        }

        if (maxl > 0) {
            System.out.println(maxi + " " + maxl);
        } else {
            System.out.println("-1");
        }
    }
}
