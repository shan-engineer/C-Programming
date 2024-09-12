#include<stdio.h>

int main () {
    char ch;
    FILE *ptr;
    FILE *ptr1;
    ptr = fopen("c:\\Users\\Abc\\OneDrive\\Desktop\\C programming\\copy.txt","r");
    ptr1 = fopen("c:\\Users\\Abc\\OneDrive\\Desktop\\C programming\\copy_2.txt","a");
    
     while(1) {
         ch = fgetc(ptr); 
           if (ch == EOF){
             break;
           } 
        else{
            fprintf(ptr1,"%c",ch);
            printf("%c",ch);
        }

     }
    return 0;
}