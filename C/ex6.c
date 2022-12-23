#include<stdio.h>

#include<string.h>
#include<stdlib.h>


int main(int argc, char *argv[])
{
   int equalP,equalF,i,position_p,position_f,j,k;
   int foundP=-1;
   int foundF=-1;
   

   for (i=1; i<=argc-1; i++)
   {
        equalP = strcmp("-p",argv[i]);
        equalF = strcmp("-f",argv[i]);
        if (equalF == 0)
        {
            foundF=0;
            position_f=i;
            printf("We found the character %s, in position %d \n",argv[i],i);
            
            
        }

        if (equalP == 0)
        {
            foundP=0;
            position_p=i;
            printf("We found the character %s, in position %d \n",argv[i],i);
            
        }
   }

    if(foundF==0 && foundP==0)
    {
        printf("We found them both\n");

        for(j=position_f+1; j<=argc-1; j++)
        {
            printf("%s\n",argv[j]); 
                
        }
           
         printf("That was the filename!\n");
        
        for(k=position_p+1; k<=argc-1; j++)
        {
            printf("%s\n",argv[j]); 
                
        }
           
         printf("That was the pathname!\n");
    }
    else if (foundF==0 && foundP!=0)
    {
        printf("This is the filename!\n");

        for(j=position_f+1; j<=argc-1; j++)
        {
            printf("%s\n",argv[j]); 
                
        }
           
    }
    else if (foundP==0 && foundF!=0)
    {
        printf("This is the Pathname!\n");

        for(k=position_p+1; k<=argc-1; j++)
        {
            printf("%s\n",argv[j]); 
                
        }
        
        
    }
    else
    {
        printf("Found nothing\n");
    }
    
  
    return 0;
}