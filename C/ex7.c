#include<stdio.h>
#include <string.h>

int main(void)
{
    char buf[30],buf2[30],buf3[30];
    //memset(buf,'\0',30);
   //memset(buf2,0,30);
    int i=0;

    scanf("%s",buf);

    //for(i=0; i<=strlen(buf); i++)  //Should copy the null terminating charachter as well !!
   // {
   //     buf2[i]=buf[i];
    //}

    strcpy(buf2,buf);
    strncpy(buf3,buf,strlen(buf+1));



    /*for(i=0; i<30; i++)
    {
        printf("buf[%d] = %c , %d\n", i , buf[i], buf[i]);
    }*/


    printf("Strlen buf: %lld,\nstrelen buf2: %lld\n,strelen buf3: %lld\n",strlen(buf),strlen(buf2),strlen(buf3));

    for(i=0; i<30; i++)
    {
        printf("buf[%d] = %d , buf2[%d]= %d, buf3[%d]= %d\n", i , buf[i], i,buf2[i], i, buf3[i]);
    }




    return 0;
}






/* for(i=0; i<30; i++)
    {
        printf("buf[%d] = %c\n", i , buf[i]);
    }
    */