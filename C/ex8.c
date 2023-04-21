#include<stdio.h>
#include<stdlib.h>
#include <string.h>

int main(void)
{
    char *buf=NULL;
    //buf=((void*)0); //set NULL value to a pointer
    char temp[30];

    scanf("%s",temp);

    buf=malloc((strlen(temp)+1)*sizeof(char));
    if(buf==NULL) return -1;

    //strcpy(buf,temp);
    strncpy(buf,temp,strlen(temp)+1);
    printf("%s",buf);


    return 0;
}