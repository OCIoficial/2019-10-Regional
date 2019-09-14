#include <iostream>
#include <vector>

// [a, b)
int sumArray(const std::vector<int> &partialSum, int a, int b) {
  return partialSum[b] - partialSum[a];
}

void solve() {
  int n;
  int t;
  std::cin >> n >> t;

  std::vector<int> a(n);
  for (auto &elem : a) {
    std::cin >> elem;
  }

  std::vector<int> partialSum(n + 1, 0);
  for (int i = 0; i < n; i++) {
    partialSum[i + 1] = partialSum[i] + a[i];
  }

  for (int len = n; len >= 1; len--) {
    int minStart = 0;
    int maxStart = n - len;
    while (minStart != maxStart) {
      int start = (minStart + maxStart) / 2;
      if (sumArray(partialSum, start, start + len) >= t * len) {
        maxStart = start;
      } else {
        minStart = start + 1;
      }
    }
    if (sumArray(partialSum, minStart, minStart + len) == t * len) {
      std::cout << minStart << ' ' << len << std::endl;
      return;
    }
  }
}

int main() { solve(); }
