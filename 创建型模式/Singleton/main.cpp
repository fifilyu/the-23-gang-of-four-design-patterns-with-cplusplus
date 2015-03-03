#include "Singleton.h"
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
  Singleton* sgn = Singleton::Instance();
  return 0;
}
