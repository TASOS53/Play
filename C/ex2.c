#include <stdio.h>

int main () {
   FILE *fp;
   char c;
   
  
   fp = fopen("C:\\Users\\tasoulis\\Projects\\Play\\C\\SortText.txt","r");
   if(fp == NULL) 
   {
      perror("Error in opening file");
      return(-1);
   } 
   do 
   {
      c = fgetc(fp);
      if( feof(fp) ) 
      {
         break ;
      }
      printf("%c", c);
   } while(1);

   fclose(fp);

   
   return(0);
}