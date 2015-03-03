#include "Composite.h"
#include "Component.h"
#include <algorithm>

Composite::Composite() {

}

Composite::~Composite() {
}

void Composite::Operation() {
  vector<Component*>::iterator comIter = comVec.begin();

  for (; comIter != comVec.end(); comIter++) {
    (*comIter)->Operation();
  }
}

void Composite::Add(Component* com) {
  comVec.push_back(com);
}

void Composite::Remove(Component* com) {
  vector<Component*>::iterator comIter = find(comVec.begin(), comVec.end(), com);
  if ( comIter != comVec.end()) comVec.erase(comIter);
}

Component* Composite::GetChild(int index) {
  return comVec[index];
}
