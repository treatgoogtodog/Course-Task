#include "Exercise01.cpp"
#include <iostream>
using namespace std;

int main(){
    char a[] = "Take the l buds";
    reverse(a);
    cout << a << endl;
    delete_char(a, 'l');
    cout << a << endl;
    pad_left(a, 5);
    cout << a << endl;
    pad_right(a, 5);
    cout << a << endl;
    truncate(a, 5);
    cout << a << endl;
    cout << is_palindrome(a) << endl;
    trim_left(a);
    cout << a << endl;
    return 0;
}