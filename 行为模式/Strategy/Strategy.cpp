#include "Strategy.h"
#include <iostream>

using namespace std;

Strategy::Strategy() {
}

Strategy::~Strategy() {

}

void Strategy::AlgrithmInterface() {
}

ConcreteStrategyA::ConcreteStrategyA() {
}

ConcreteStrategyA::~ConcreteStrategyA() {
  cout << "~ConcreteStrategyA....." << endl;
}

void ConcreteStrategyA::AlgrithmInterface() {
  cout << "test ConcreteStrategyA....." << endl;
}

ConcreteStrategyB::ConcreteStrategyB() {
}

ConcreteStrategyB::~ConcreteStrategyB() {
  cout << "~ConcreteStrategyB....." << endl;
}

void ConcreteStrategyB::AlgrithmInterface() {
  cout << "test ConcreteStrategyB....." << endl;
}
