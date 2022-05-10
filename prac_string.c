#include<stdio.h>

//#include<string.h>
/*
int strlen(char *st){
    char *ptr = st;
    int count;
    int i=0;
    while (ptr[i]!='\0'){
        count++;
        i++;
    }

    return count;
}
*/



int slice( char *st, int m, int n){
    int i = 0;
    while ((m+i) <= n){
        st[i] = st[i+m];
        i++;
    }
    st[i] = '\0';
}


int strcopy(char *dest, char *src){
    int i=0;

    while (src[i]!='\0'){
        dest[i] = src[i];
        i++;
    }

    dest[i]='\0';
    printf("%s",dest);
   
   return 0;


}

int check(char *str, char val){
    int i = 0, n = 0;
    char *ptr = str;

    while (*ptr != '\0'){
        if (ptr[i] == val){
            n=1;
            break;
        }

        else{
            n = 0;
            i++;
        }
    }
    return n;
}


int main(){
    char st[] = "Mayank";
    char x = 'a';

    int n = check(st,x);
    if (n==1){
        printf("Yes found!");
    }
    else{
        printf("Not found!");
    }
    
    
    
     /*
    //Fifth question
   char c[10] = "Mayank";
   char x = 'a';
   int i = 0;
   int count = 0;

   while (c[i]!='\0')
   {
       if (c[i]==x){
           count++;
            i++;
       }
       else{
            i++;
           continue;
       }
      
   } 
   printf("No of occurence of %c is %d",x,count);
    */
    /*
    //Fourth question
    char st1[]="Mayank";
    char st2[]="Mank";
    strcopy(st1,st2);
    */


    /*
    //Third question
    char s[] = "Mayank";
    slice(s,1,4);
    printf("%s",s);

    */

     /*
    //Second question
    char st[] = "Mayank";
    int len = strlen(st);
    printf("The length of the string is: %d",len);
    */ 
     
     /*
     //First problem
     char st1[34];
     char st2[34];
     int i=0;
     char c; 

     printf("Enter the value of st:");
     scanf("%s",st1);
     printf("Enter value of next string character wise: \n");
     
     while (c!='\n'){
         fflush(stdin);
        scanf("%c",&c);
         st2[i] = c;
         i++;
     }
     st2[i-1]='\0';//it will make the null character at i-1th or last element


     printf("\nThe value of st1 is: %s",st1);
     printf("\nThe value of st2 is: %s",st2);
    printf("\nThe value with strcmp is: %d",strcmp(st1,st2));
    */
    return 0;
 }