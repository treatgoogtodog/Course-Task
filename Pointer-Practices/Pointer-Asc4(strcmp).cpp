#include <stdio.h>
#include <string.h>
typedef long long int32_t;

void CountChar(char *str1, char *str2){
    int cts = 0;
    for(int32_t i = 0; i < strlen(str1)-strlen(str2)+1; i++){
        if(strcmp(str1+i, str2) == 0){
            cts++;
        }
    }
    printf("Number of occurences: %d\n", cts);
}
int main(){
    char str1[] = "I am very handsome";
    char str2[] = "handsome";
    CountChar(str1, str2);
    return 0;   
}