#include <iostream>
#include "vector.h"

int main() {
    vector<int> v;
    v.PushBack(1);
    v.PushBack(4);
    v.PushBack(5);
    v.PushBack(3);
    for (int i = 0; i < v.GetSize(); i++) {
        std::cout << v[i] << std::endl;
    };
};