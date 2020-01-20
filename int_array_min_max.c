/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

void displayArray(int n[], int length){
    int i;
    printf("Array: ");
    for(i=0;i<length;i++){
        printf("%d ",n[i]);
    }
}

void displayAddress(int *ptr, int length){
    int j=0;
    printf("\n");
    for(j=0;j<length;j++){
        printf("\n%u %d",ptr+j,*(ptr+j));
    }
    
}


int main()
{
    srand(time(0));
    int i;
    int min,max;
    int a[10];
    for(i=0;i<10;++i){
        a[i]=rand()%100 + 1;
    }
    
    displayArray(a,10);
    displayAddress(&a,10);
    printf("\n");
    
    min=a[0];
    max=a[0];
    
    for(i=0;i<10;++i){
        if(a[i]<min){
            min=a[i];
            }
        if(a[i]>max){
            max=a[i];
            }
        }
    
    printf("\nMax = %d\nMin = %d",max,min);
    return 0;
}

