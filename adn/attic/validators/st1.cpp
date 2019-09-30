#include "testlib.h"
using namespace std;

int main() {
  registerValidation();
  int N = inf.readInt(1, 1000000);
  inf.readEoln();

  // Sequence
  for (int i = 0; i < N; ++i) {
    if (i > 0)
      inf.readSpace();
    inf.readInt(0, 3);
  }
  inf.readEoln();

  // Pattern
  for (int i = 0; i < 3; ++i) {
    if (i > 0)
      inf.readSpace();
    inf.readInt(0, 3);
  }
  inf.readEoln();

  inf.readEof();
}
