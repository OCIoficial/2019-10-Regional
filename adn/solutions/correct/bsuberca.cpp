#include <iostream>
#include <vector>

bool match(const std::vector<int>& adn, int idx, const std::vector<int>& pattern) {
    return adn[idx] == pattern[0] && adn[idx+1] == pattern[1] && adn[idx+2] == pattern[2];
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> adn(n);
    std::vector<int> pattern(3);

    for(auto& protein : adn) {
        std::cin >> protein;
    }

    for(auto& protein : pattern) {
        std::cin >> protein;
    }

    int occ = 0;
    for(int i = 0; i < n-2; ++i) {
        occ += match(adn, i, pattern);
    }

    std::cout << occ << std::endl;
    return 0;
}
