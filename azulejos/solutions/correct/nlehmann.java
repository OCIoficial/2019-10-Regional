
import java.io.*;
import java.util.*;

class azulejos {
    static public void main(String[] args) throws Exception {
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;

        st = new StringTokenizer(in.readLine());
        int M = Integer.parseInt(st.nextToken());
        int N = Integer.parseInt(st.nextToken());
        int P = Integer.parseInt(st.nextToken());
        int Q = Integer.parseInt(st.nextToken());

        int tiles[][] = new int[M][N];
        for (int i = 0; i < M; ++i) {
            st = new StringTokenizer(in.readLine());
            for (int j = 0; j < N; ++j) {
                tiles[i][j] = Integer.parseInt(st.nextToken());
            }
        }

        int min = Integer.MAX_VALUE;
        int types[] = {0, 1};
        for (int type : types) {
            int cost = 0;
            for (int i = 0; i < M; ++i) {
                int curr = type == 0 ? i % 2 : 1 - (i % 2);
                for (int j = 0; j < N; ++j) {
                    if (curr != tiles[i][j]) {
                        cost += tiles[i][j] == 0 ? P : Q;
                    }
                    curr = 1 - curr;
                }
            }
            min = Math.min(min, cost);
        }

        System.out.println(min);
    }
}
