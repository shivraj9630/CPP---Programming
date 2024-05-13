#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;

int main()
{ 
        int Arr[5];

        int *p = NULL;
        p = (int *)malloc(5 * sizeof(int));

        int *q = NULL;
        q = (int *)calloc(5 , sizeof(int));

        int *X = NULL;
        X = new int[5];

        free(p);
        free(q);

        delete [] X;
        
       return 0;
}