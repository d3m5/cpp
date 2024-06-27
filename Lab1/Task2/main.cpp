#include <iostream> 
#define PR(x)  printf("x=%u, *x=%f, &x=%u \n",x,*x, &x) 
#include <stdio.h> 

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru"); 
    float mas[] = { 1.2, 2.5, 5.4 };
    float* ptrl, * ptr2; 
    ptrl = mas; 
    ptr2 = &mas[2]; 
    PR(ptrl); 
    ptrl++; 
    PR(ptrl);
    PR(ptr2);
    ++ptr2;
    PR(ptr2);
    printf("ptr2-ptrl=%d\n", ptr2 - ptrl);

}