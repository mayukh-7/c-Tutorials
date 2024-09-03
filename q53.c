#include<stdio.h>
int  length(char *dest){
 int len = 0 ;
 while (*dest)
 {
    dest ++;
    len ++;
 }
 
    return len;
    
}
int main()
{
    char str1 []= "Hello ";
    char str2[]= "world !";
   int d =  length(str1);
    printf("the length of the  string is  %d", d);
    return 0;

}