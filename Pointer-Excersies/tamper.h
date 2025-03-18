int strlen(char a[]){
    int i = 0;
    while(a[i] != '\0'){
        i++;
    }
    return i;
}

void deletechr(char a[], int index){
    int len = strlen(a);
    for(int i = index; i < len; i++){
        a[i] = a[i+1];
    }
    a[len-1] = '\0';
}

int strcmp(char a[], char b[]){
    int lena = strlen(a);
    int lenb = strlen(b);
    if(lena != lenb){
        return lena - lenb;
    }
    for(int i = 0; i < lena; i++){
        if(a[i] != b[i]){
            return a[i] - b[i];
        }
    }
    return 0;
}