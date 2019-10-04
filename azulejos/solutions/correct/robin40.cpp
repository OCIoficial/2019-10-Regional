#include <iostream>
#include <algorithm>
#include <vector>

int main() {
  int rows, cols, p, q;
  std::cin >> rows >> cols >> p >> q;

  std::vector<std::vector<int>> in(
      rows,
      std::vector<int>(cols));
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      std::cin >> in[i][j];
    }
  }

  int ans = 1e9;
  for (int s : {0, 1}) {
    int cost = 0;
    for (int i = 0; i < rows; i++) {
      for (int j = 0; j < cols; j++) {
        int target = (i + j + s) % 2;
        int source = in[i][j];
        if (source != target) {
          cost += target == 1 ? p : q;
        }
      }
    }
    ans = std::min(ans, cost);
  }

  std::cout << ans << std::endl;
  return 0;
}