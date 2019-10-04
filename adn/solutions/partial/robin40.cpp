#include <iostream>
#include <vector>

int main() {
  int n;
  std::cin >> n;

  std::vector<int> dna(n);
  for (int& x : dna) {
    std::cin >> x;
  }

  std::vector<int> pattern(3);
  for (int& x : pattern) {
    std::cin >> x;
  }

  int ans = 0;
  int j = 0;
  for (int i = 0; i < n; i++) {
    if (dna[i] == pattern[j]) {
      j++;
      if (j == 3) {
        ans++;
        j = 0;
      }
    }
    else {
      j = 0;
    }
  }

  std::cout << ans << std::endl;
  return 0;
}