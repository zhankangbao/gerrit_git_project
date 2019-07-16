#include<stdio.h>
 
int main(void)
{
    int i,total;
    total=0;
    printf("hello world");
    printf("hello world");
    printf("hello world");
    printf("hello world");
    printf("hello world");
    printf("hello world");
    printf("hello world");
    printf("hello world!!!!!!");
 
    for(i=0;i<10;i++)
        total+=i;
 
    if (total!=45)
        printf("failure\n");
    else
        printf("success\n");

    total=0;

    for(i=0;i<10;i++)
        total+=i;

    if (total!=45)
        printf("failure\n");
    else
        printf("success\n");


    total=0;

    for(i=0;i<10;i++)
        total+=i;

    if (total!=45)
        printf("failure\n");
    else
        printf("success\n");


    total=0;

    for(i=0;i<10;i++)
        total+=i;

    if (total!=45)
        printf("failure\n");
    else
        printf("success\n");


    return 0;
}
