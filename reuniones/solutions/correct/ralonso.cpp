#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>

using namespace std;

int main(int argc, char *argv[]) {
  int n, p, q;
  vector <pair <int,int> > events;

  int max_meetings = 0, current_meetings = 0;

  cin >> n;

  events.reserve(2 * n);

  for (int r = 0; r < n; r++) {
    cin >> p >> q;
    events.push_back(make_pair(p, 1));
    events.push_back(make_pair(q, -1));
  }

  sort(events.begin(), events.end());

  for (auto event: events) {
    current_meetings += event.second;
    if (current_meetings > max_meetings)
      max_meetings = current_meetings;
  }

  cout << max_meetings << endl;

  return 0;
}
