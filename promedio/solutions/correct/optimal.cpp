#include <iostream>
#include <unordered_map>
#include <vector>

void solve() {
  int n;
  int t;
  std::cin >> n >> t;

  std::vector<int> a(n);
  for (auto &elem : a) {
    std::cin >> elem;
  }

  for (int i = 0; i < n; i++) {
    a[i] -= t;
  }

  std::vector<int> partialSum(n + 1, 0);
  for (int i = 0; i < n; i++) {
    partialSum[i + 1] = partialSum[i] + a[i];
  }

  std::unordered_map<int, int> inverse;
  for (int l = n; l >= 0; l--) {
    inverse[partialSum[l]] = l;
  }

  for (int len = n; len >= 1; len--) {
    auto it = inverse.find(partialSum[len]);
    if (it != inverse.end()) {
      int start = it->second;
      std::cout << start << ' ' << len << std::endl;
      return;
    }
  }
}

int main() { solve(); }
