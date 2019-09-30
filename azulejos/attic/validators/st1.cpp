#include "testlib.h"
using namespace std;

int main() {
  registerValidation();
  int M = inf.readInt(1, 1000, "M");
  inf.readSpace();
  int N = inf.readInt(1, 1000, "N");
  inf.readSpace();
  inf.readInt(1, 100, "P");
  inf.readSpace();
  inf.readInt(1, 100, "Q");
  inf.readEoln();

  // Sequence
  for (int i = 0; i < M; ++i) {
    for (int j = 0; j < N; ++j) {
      if (j > 0)
        inf.readSpace();
      inf.readInt(0, 1);
    }
    inf.readEoln();
  }
  inf.readEof();
}
