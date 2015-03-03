#include "Product.h"
#include <iostream>
using namespace std;

AbstractProductA::AbstractProductA() {
}

AbstractProductA::~AbstractProductA() {
}

AbstractProductB::AbstractProductB() {
}

AbstractProductB::~AbstractProductB() {
}

void ProductA1::show() {
  cout << "ProductA1...show" << endl;
}

ProductA1::ProductA1() {
  cout << "ProductA1..." << endl;
}

ProductA1::~ProductA1() {
}

void ProductA2::show() {
  cout << "ProductA2...show" << endl;
}


ProductA2::ProductA2() {
  cout << "ProductA2..." << endl;
}

ProductA2::~ProductA2() {
}

void ProductB1::show() {
  cout << "ProductB1...show" << endl;
}

ProductB1::ProductB1() {
  cout << "ProductB1..." << endl;
}

ProductB1::~ProductB1() {
}

void ProductB2::show() {
  cout << "ProductB2...show" << endl;
}

ProductB2::ProductB2() {
  cout << "ProductB2..." << endl;
}

ProductB2::~ProductB2() {
}

