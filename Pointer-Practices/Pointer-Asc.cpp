#include <stdio.h>

using namespace std;

void ArraybyArray(int ARR[]){
    printf("Size of ARR(int ARR[]) = %d\n", sizeof(ARR));
}

void ArraybyPointer(int *ARR){
    printf("Size of ARR(int *ARR) = %d\n", sizeof(ARR));
}

// int main(){
//     int ARR[10] = {1,2,3,4,5,6,7,8,9,10};
//     printf("Size of ARR = %d\n", sizeof(ARR)); // Size of ARR = 40
//     ArraybyArray(ARR);// Size of ARR(int ARR[]) = 8
//     ArraybyPointer(ARR);//  Size of ARR(int *ARR) = 8
//     return 0;
// }
    /*
        Explaination: ARR is an array of 10 intergers, each has the size of 4 bytes. So the size of ARR is 10 * 4 = 40 bytes.
        When we pass ARR to a function, it will be converted to a pointer to the first element of ARR.
    */