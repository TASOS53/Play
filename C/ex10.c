#include<stdio.h>
#include <string.h>
#include<stdlib.h>


void f1(char *  ,char *  );
void f2(char *);
void f3(char *  ,char *  );

int main(void)
{
    int i;
    char temp[5];
    char prime[100];
    for(i=0; i<5; i++)
    {
        temp[i]='\0';
        
        //printf("temp[%d] = %c , %d \n",i,temp[i], temp[i]);
    }
    memset(prime,0,100*sizeof(char));
    /*ALTERNATIVELY
    memset(temp,0,5*sizeof(char));
    */ 
   //f1(prime,temp);
   //f2(prime);
   f3(prime,temp);


    for(i=0; i<=100; i++)
    {
        printf("prime[%d] = %c\n",i,prime[i]);

    }
    printf("%s",prime);
    //printf("%lld",strlen(temp));//it returns the length of the string WITHOUT calculating the \0






    return 0;
}




void f1(char * prime,char * temp)
{
    int i,y=0;
     for(i=0; i<=4; i++)
    {
        scanf("%s",temp);
        strncpy((prime+y),temp,strlen(temp));
        y=y+strlen(temp)+1;
        if(i<4) prime[y-1]='_';
        
        //printf("%lld",strlen(temp));//it returns the length of the string WITHOUT calculating the \0
    }

}



void f2(char *prime)
{
    int y=0,i;
    for(i=0; i<5; i++)
    {
        if(i>0)
        {
            scanf("%s",(prime+y+1));
        }
        else
        {
            scanf("%s",(prime+y));
        }
        y=strlen(prime);
        if(i<4) prime[y]='_';

    }
    

}

void f3(char * prime,char * temp)
{
    int i,j,y=0;
    for(i=0; i<=4; i++)
    {
        scanf("%s",temp);
        
        for(j=0; j<=(strlen(temp)-1); j++)
        {
            prime[y+j]=temp[j];
        
        }
        y=strlen(prime);
        if(i<4) prime[y]='_';
        y++;
       
        
    }
    
    
}