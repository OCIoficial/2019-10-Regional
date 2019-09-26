#include <algorithm>
#include <climits>
#include <cstdio>

int main() {
  int M, N, P, Q;
  scanf("%d%d%d%d", &M, &N, &P, &Q);
  int azulejos[M][N];

  for (int i = 0; i < M; ++i) {
    for (int j = 0; j < N; ++j) {
      scanf("%d", &azulejos[i][j]);
    }
  }

  int minn = INT_MAX;
  for (auto type : {0, 1}) {
    int cost = 0;
    for (int i = 0; i < M; ++i) {
      for (int j = 0; j < N; ++j) {
        if (azulejos[i][j] != type) {
          cost += azulejos[i][j] == 0 ? P : Q;
        }
        type = 1 - type;
      }
    }
    minn = std::min(minn, cost);
  }
  printf("%d\n", minn);

  return 0;
}
