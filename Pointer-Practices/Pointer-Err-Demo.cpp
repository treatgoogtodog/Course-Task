#include <iostream>
using namespace std;
//NULL pointer access
void nullptrAccess(){
    int *p = NULL;
    cout << *p << endl;
}
//unallocated pointer-type access
void unallocatedAccess(){
    int *p;
    cout << *p << endl;
}

//danglings reference
int* danglingReference(){
    int x = 5;
    return &x;
}