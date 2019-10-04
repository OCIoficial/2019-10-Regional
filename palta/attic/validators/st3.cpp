#include "testlib.h"
using namespace std;

int main() {
  registerValidation();
  int N = inf.readInt(1, 1000000, "N");
  inf.readSpace();
  inf.readInt(0, 100, "T");
  inf.readEoln();
  int prev = 0;
  for (int i = 0; i < N; ++i) {
    if (i > 0)
      inf.readSpace();
    int curr = inf.readInt(0, 100);
    if (i > 0)
      ensuref(curr >= prev, "El arreglo debe ser no decreciente");
    prev = curr;
  }
  inf.readEoln();
  inf.readEof();
}
