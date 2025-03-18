#include <stdio.h>

using namespace std;

int count_even(int *arr, int n){
    int cts = 0;
    for (int i = 0; i < n; i++)
    {
        if (*(arr + i)%2 == 0)
        {
            cts++;
        }
    }
    return cts;
}

int main(){
    int arr[] = {3, 7, 4, 8, 5, 7, 0, 2, 1, 9};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Numbers of even?:%d\n", count_even(arr, n));
    return 0;
}