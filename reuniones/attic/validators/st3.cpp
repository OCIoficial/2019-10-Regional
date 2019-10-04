#include "testlib.h"
using namespace std;

int main() {
  registerValidation();
  int N = inf.readInt(1, 1000, "N");
  inf.readEoln();
  for (int i = 0; i < N; ++i) {
    int p = inf.readInt(0, 1000, "p");
    inf.readSpace();
    inf.readInt(p + 1, 1000, "q");
    inf.readEoln();
  }
  inf.readEof();
}
