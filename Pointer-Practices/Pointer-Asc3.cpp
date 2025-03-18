#include <stdio.h>

using namespace std;

void BinarySrch(int *arr, int n, int x){
    if(x > (*arr + n/2)){
        BinarySrch(arr + n/2, n/2, x);
    }else if(x < (*arr + n/2)){
        BinarySrch(arr, n/2, x);
    }else{
        printf("Found");
    }
}

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr)/sizeof(arr[0]);
    BinarySrch(arr, n, 2);
    return 0;
}