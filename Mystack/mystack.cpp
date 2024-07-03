#include "mystack.h"


void MyStack::popFirst() {
    adapter_objekt->deleteEl();
}

void MyStack::pushFistt(int data) {
    adapter_objekt->insertNode(data);
}

bool MyStack::isEmpty() {
    return adapter_objekt->isEmpty();
}

std::vector<int> MyStack::stackToVec() {
    return adapter_objekt->listToVec();
}
