#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
  int N;
  scanf("%d", &N);
  vector<pair<int,int>> events;
  for (int i = 0; i < N; ++i) {
    int p, q;
    scanf("%d%d", &p, &q);
    events.push_back({p, 1});
    events.push_back({q, 0});
  }

  sort(events.begin(), events.end());

  int c = 0;
  int maxx = 0;
  for (auto e : events) {
    if (e.second == 1) {
      c++;
    } else {
      c--;
    }
    maxx = max(maxx, c);
  }

  printf("%d\n", maxx);
}
