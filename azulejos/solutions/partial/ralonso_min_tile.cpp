#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char *argv[]) {
  int m, n, p, q;

  int tile;

  int even = 0, odd = 0;

  cin >> m >> n >> p >> q;

  int cost = min(p, q);

  for (int r = 0; r < m; r++) {
    for (int c = 0; c < n; c++) {
      cin >> tile;
      if (tile ^ (r&1) ^ (c&1)) {
        even += cost;
      } else {
        odd += cost;
      }
    }
  }

  cout << min(even, odd) << endl;

  return 0;
}
