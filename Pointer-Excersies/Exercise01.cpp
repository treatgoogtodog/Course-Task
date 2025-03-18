#include "tamper.h"

void reverse(char a[]){
    int len = strlen(a);
    for(int i = 0; i < len/2; i++){
        char tmp = *(a+i);
        *(a+i) = *(a+len-i-1);
        *(a+len-i-1) = tmp;
    }
}//Đảo xâu

void delete_char(char a[], char c){
    int len = strlen(a);
    for(int i = 0; i < len; i++){
        if(*(a+i)==c){
            deletechr(a, i);
            len--;i--;
        }
    }
}//Xoá kí tự

void pad_left(char a[], int n){
    int len = strlen(a);
    for(int i = len; i >= 0; i--){
        *(a+i+n) = *(a+i);
    }
    for(int i = 0; i < n; i++){
        *(a+i) = ' ';
    }
    *(a+len+n) = '\0';
}//Độn trái

void pad_right(char a[], int n){
    int len = strlen(a);
    for(int i = 0; i < n; i++){
        *(a+len+i) = ' ';
    }
    *(a+len+n) = '\0';  
}//Độn phải

int truncate(char a[], int n){
    int len = strlen(a);
    if(len > n){
        *(a+n) = '\0';
    }else{
        return -1;
    }
    return 0;
}//Cắt xâu

bool is_palindrome(char a[]){
    char* b = a;
    reverse(b);
    return strcmp(a, b) == 0;
}//Kiểm tra xâu đối xứng

void trim_left(char a[]){
    int len = strlen(a);
    while (*(a)==' ')
    {
        deletechr(a,0);
        len--;
    }
}//Cắt trái

void trim_right(char a[]){
    int len = strlen(a);
    while (*(a+len-1)==' ')
    {
        deletechr(a,len-1);
        len--;
    }
}//Cắt phải