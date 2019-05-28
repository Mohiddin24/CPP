#include "func2.h"
#include<stdio.h>
#include<iostream>

void implement(int a,int b)
{
    printf("Hello\n");
}

int main()
{
int a;
int b;

 func1 = implement;

void implement(int,int);

func1(a,b);
printf("The address of func1 is %u\n",func1);
printf("The address of implement is %u\n",implement);

}