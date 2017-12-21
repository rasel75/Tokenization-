#include <stdio.h>
#include <string.h>

int main()
{
   char input [100];
   char * p;
   printf("Enter your string : ");
   gets(input);
   p=strtok(input , " ");
   while(p != NULL){
    printf("\n %s",p);
   p=strtok(NULL, " ");
}

   return 0;
}
