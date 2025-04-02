#include <iostream>
#include <vector>

using namespace std;

void findcpt(int *a, int n, int mu){
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i] * a[j] == mu){
                cout << a[i] << " " << a[j] << endl;
                return;
            }
        }
    }
}

int main(){
    int n;
    cin >> n;
    int *a = new int[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int mu;
    cin >> mu;
    findcpt(a, n, mu);
    delete[] a;
}