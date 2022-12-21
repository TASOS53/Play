#include<stdio.h>
c

int main(int argc, char *argv[])
{  
    int MyArray[3];
    int i;
    printf("The arguments which are included in myArray are:\n");
    for(i=1; i<=argc-1; i++)
    {
        MyArray[i-1]=atoi(argv[i]);
        printf("%d\n",MyArray[i]);
    }

    return 0;
}