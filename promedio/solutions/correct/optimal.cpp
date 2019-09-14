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
  int partialMax = -1;
  int partialStart = -1;
  for (int i = 0; i <= n; ++i) {
    auto it = inverse.find(partialSum[i]);
    if (it != inverse.end()) {
      if (i - it->second > partialMax ||
          (i - it->second == partialMax && it->second < partialStart)) {
        partialMax = i - it->second;
        partialStart = it->second;
      }
    } else {
      inverse[partialSum[i]] = i;
    }
  }

  if (partialMax == -1) {
    // didn't find anything
    std::cout << -1 << std::endl;
  } else {
    std::cout << partialStart << ' ' << partialMax << std::endl;
  }
}

int main() { solve(); }
