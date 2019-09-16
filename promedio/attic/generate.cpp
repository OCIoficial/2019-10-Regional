#include <algorithm>
#include <cassert>
#include <iostream>
#include <random>

void printOutput(int size, int target, const std::vector<int> &output) {
  std::cout << size << ' ' << target << std::endl;
  for (size_t i = 0; i < size; ++i) {
    std::cout << output[i];
    if (i != size - 1) {
      std::cout << ' ';
    }
  }
  std::cout << std::endl;
}

int main(int argc, char const *argv[]) {
  assert(argc == 4); // isSorted & n
  int seed = std::stoi(argv[1]);
  bool shouldBeSorted = std::stoi(argv[2]);
  int n = std::stoi(argv[3]);

  // rng
  std::mt19937 rng(seed);
  std::uniform_int_distribution<int> sizeDist(1, n);
  std::uniform_int_distribution<int> elemDist(0, 100);
  std::uniform_int_distribution<int> targetDist(0, 100);

  int target = targetDist(rng);
  int size = sizeDist(rng);

  std::vector<int> output(size);
  for (auto &elem : output) {
    elem = elemDist(rng);
  }

  if (shouldBeSorted) {
    std::sort(output.begin(), output.end());
  }

  printOutput(size, target, output);

  return 0;
}
