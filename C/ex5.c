#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int main(int argc, char *argv[])
{
   int equalP, i,position,j;
   

   for(i=1; i<=argc-1; i++)
   {
        equalP = strcmp("-p",argv[i]);
        if (equalP == 0)
        {
            position=i;
            printf("We found the character %s, in position %d \n",argv[i],i);
            
            for(j=position+1; j<=argc-1; j++){
                printf("%s\n",argv[j]); 
                
            }
            break;
        }
   }
  
    return 0;
}