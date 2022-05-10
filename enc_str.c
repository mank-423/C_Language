#include<stdio.h>

void encrypt(char *c){
    char *ptr = c;
    while (*ptr != '\0'){
        *ptr = *ptr+1;
        ptr++;
    }
}

void decrypt(char *c){
    char *ptr = c;
    while(*ptr != '\0'){
        *ptr = *ptr - 1;
        ptr++;
    }
}

int main(){
    char c[] = "Mayank";
    encrypt(c);
    printf("Encrytped message is: %s \n",c);
    decrypt(c);
    printf("Decrypted message is: %s \n",c);
    return 0;
}