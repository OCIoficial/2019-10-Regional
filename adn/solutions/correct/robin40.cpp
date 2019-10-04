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
  for (int& x: pattern) {
    std::cin >> x;
  }

  int ans = 0;
  for (int s = 0; s + 3 <= n; s++) {
    bool match = true;
    for (int i = 0; i < 3; i++) {
      if (dna[s + i] != pattern[i]) {
        match = false;
        break;
      }
    }
    if (match) {
      ans++;
    }
  }

  std::cout << ans << std::endl;
  return 0;
}