import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.HashMap;
import java.util.Map;

class promedio {
  public static void main(String[] args) throws IOException {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    String[] line;

    line = br.readLine().split(" ");
    int n = Integer.parseInt(line[0]);
    int t = Integer.parseInt(line[1]);

    int[] a = new int[n];
    line = br.readLine().split(" ");
    for (int i = 0; i < n; i++) {
      a[i] = Integer.parseInt(line[i]);
    }

    for (int i = 0; i < n; i++) {
      a[i] -= t;
    }

    int[] partialSum = new int[n+1];
    for (int i = 0; i < n; i++) {
      partialSum[i + 1] = partialSum[i] + a[i];
    }

    Map<Integer, Integer> inverse = new HashMap<>();
    int partialMax = -1;
    int partialStart = -1;
    for (int i = 0; i <= n; i++) {
      Integer j = inverse.get(partialSum[i]);
      if (j != null) {
        if (i - j > partialMax ||
            (i - j == partialMax && j < partialStart)) {
          partialMax = i - j;
          partialStart = j;
        }
      } else {
        inverse.put(partialSum[i], i);
      }
    }

    if (partialMax == -1) {
      System.out.println(-1);
    } else {
      System.out.println(partialStart + " " + partialMax);
    }
  }
}
