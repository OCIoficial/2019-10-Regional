import java.io.*;
import java.util.*;

class palta {
    static public void main(String[] args) throws Exception {
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;
        st = new StringTokenizer(in.readLine());
        int n = Integer.parseInt(st.nextToken());
        int t = Integer.parseInt(st.nextToken());

        int arr[] = new int[n];
        st = new StringTokenizer(in.readLine());
        for (int i=0; i < n; i++) {
            arr[i] = Integer.parseInt(st.nextToken()) - t;
        }

        for (int i=1;i<n;i++){
            arr[i] += arr[i-1];
        }

        for (int largo = n; largo > 0; largo--){
            for (int i=0; i < n + 1 - largo; i++){
                int suma = arr[i + largo - 1];
                if (i > 0)
                    suma -= arr[i - 1];
                if (suma == 0){
                    System.out.println(i + " " + largo);
                    return;
                }
            }
        }
        System.out.println(-1);
    }
}
