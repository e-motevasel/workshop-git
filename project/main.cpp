//please write your functions here
#include <iostream>
using namespace std;


double Sum(double arr[],int size)
{double SUMM=0;
    for(int i=0;i<size;i++)
    {SUMM+=arr[i];}

    return SUMM;
}
double Sub(double arr[],int size)
{double SUBB=arr[0];
    for(int i=1;i<size;i++)
    {SUBB-=arr[i];}

    return SUBB;
    
}
double Mul(double arr[],int size)
{double MULL=1;
    for(int i=0;i<size;i++)
    {MULL*=arr[i];}


    return MULL;
}
