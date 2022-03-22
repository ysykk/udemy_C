#include <iostream>
#include "test.h"
using namespace std;

int main(){
    int a = 0;
    int* p = &a;

    cout << a << endl;
    test(p);
    cout << a << endl;
}