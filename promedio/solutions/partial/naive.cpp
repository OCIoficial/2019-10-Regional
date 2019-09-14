#include <iostream>
#include <vector>

void solve() {
  int n;
  int t;
  std::cin >> n >> t;

  std::vector<int> a(n);
  for (auto &elem : a) {
    std::cin >> elem;
  }

  for (int len = n; len >= 1; len--) {
    for (int start = 0; start + len <= n; start++) {
      int sum = 0;
      for (int i = start; i < start + len; i++) {
        sum += a[i];
      }

      if (sum % len == 0) {
        int avg = sum / len;
        if (avg == t) {
          std::cout << start << ' ' << len << std::endl;
          return;
        }
      }
    }
  }
}

int main() { solve(); }
