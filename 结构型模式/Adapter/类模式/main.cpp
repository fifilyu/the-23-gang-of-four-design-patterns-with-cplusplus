#include "Adapter.h"
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
  Target* adt = new Adapter();
  adt->Request();
  return 0;
}
