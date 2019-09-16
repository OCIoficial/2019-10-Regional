#include <cstdio>

int main() {
  int N;
  scanf("%d", &N);

  int arr[N];
  for (int i = 0; i < N; ++i) {
    scanf("%d", &arr[i]);
  }

  int pattern[3];
  for (int i = 0; i < 3; ++i) {
    scanf("%d", &pattern[i]);
  }

  int count = 0;
  for (int i = 0; i < N - 2; ++i) {
    if (pattern[0] == arr[i] && pattern[1] == arr[i+1] && pattern[2] == arr[i+2]) {
      count++;
    }
  }

  printf("%d\n", count);
  return 0;
}
