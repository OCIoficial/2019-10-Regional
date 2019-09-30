#include "testlib.h"
using namespace std;

int main() {
  registerValidation();
  int N = inf.readInt(1, 250, "N");
  inf.readSpace();
  inf.readInt(0, 100, "T");
  inf.readEoln();
  for (int i = 0; i < N; ++i) {
    if (i > 0)
      inf.readSpace();
    inf.readInt(0, 100);
  }
  inf.readEoln();
  inf.readEof();
}
