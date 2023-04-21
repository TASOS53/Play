/*Create an array size five [5], which contains pointers to char*/
#include<stdio.h>
#include <string.h>
#include<stdlib.h>

int main(void)
{
    int i;
    char *buf[5];
    char Word[30];
    memset(buf,0,5*sizeof(char*));
    memset(Word,0,30*sizeof(char));
    
    //for(i=0; i<30; i++)temp[i]='\0';
    
    for(i=0; i<5; i++)
    {
        scanf("%s",Word);
        buf[i]= malloc((strlen(Word)+1)*sizeof(char));
        if(buf[i]==NULL)return -1;
        strncpy(buf[i],Word,(strlen(Word)+1));
    }
    for (i = 0; i < 5; i++)
    {
        printf("%s ",buf[i]);
        free(buf[i]);
    }
    
    putchar('\n');

    for (i = 0; i < 5; i++)
    {
        printf("%s ",buf[i]);
        
    }
    
   
   return 0; 

}








/*for (size_t i = 0; i < 5; i++)
    {
        printf("buf[%lld]= %p\n",i,buf[i]);
    }
*/


/* for (size_t i = 0; i < 5; i++)
    {
        
        printf("buf[%lld]= %p\n",i,buf[i]);
    }
*/