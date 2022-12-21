#include <stdio.h>

int main (int argc , char *argv[]) {
   FILE *fp;
   char c;
   
  
   fp = fopen(argv[1],"r");
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