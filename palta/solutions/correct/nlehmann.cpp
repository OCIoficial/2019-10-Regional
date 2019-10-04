#include <algorithm>
#include <cstdio>
#include <map>
#include <vector>
using namespace std;

int main() {
  int N, T;
  scanf("%d%d", &N, &T);

  vector<int> arr(N+1);
  for (int i = 1; i <= N; ++i) {
    scanf("%d", &arr[i]);
    arr[i] -= T;
    arr[i] += arr[i-1];
  }

  map<int, int> m;
  for (int i = 1; i <= N; ++i) {
    m[arr[i]] = i;
  }

  int maxi = 0;
  int maxl = 0;
  for (int i = 0; i <= N; ++i) {
    int len = m[arr[i]] - i;
    if (m[arr[i]] >= i && len > maxl) {
      maxi = i;
      maxl = len;
    }
  }

  if (maxl > 0 ) {
    printf("%d %d\n", maxi, maxl);
  } else {
    printf("-1\n");
  }

  return 0;
}
