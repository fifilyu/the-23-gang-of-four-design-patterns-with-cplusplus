#include "AbstractFactory.h"
#include "Product.h"
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
  AbstractFactory* cf1 = new ConcreteFactory1();
  AbstractProductA *a1 = cf1->CreateProductA();
  a1->show();
  AbstractProductB *b1 = cf1->CreateProductB();
  b1->show();

  AbstractFactory* cf2 = new ConcreteFactory2();
  AbstractProductA *a2 = cf2->CreateProductA();
  a2->show();
  AbstractProductB *b2 = cf2->CreateProductB();
  b2->show();
  return 0;
}
