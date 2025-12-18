//please write your functions here
#include <iostream>
using namespace std;
int gcd(int a,int b){
    while(b!=0){
        int remain=a%b;
        a=b;
        b=remain;
    }
    return a;
}

int lcm(int a,int b){
    return ((a*b)/gcd(a,b));
}

int factorial(int n){
    if(n==0){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}

int C(int N,int K){
    return factorial(N)/(factorial(K)*factorial(N-K));
}



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
#include <iostream>
#include <cmath>
using namespace std;
void Solver(double a,double b,double c)
{ double x1;
    double x2;
    double delta;
    if(a==0)
    {x1=(-c)/b;cout<<x1<<endl;}
    else
    {
        delta = (b*b)-(4*a*c);
        if(delta < 0)
        cout<<"Impossible"<<endl;
        else
        {
            x1 = ((-b)+(sqrt(delta)))/(2*a);
            x2 = ((-b)-(sqrt(delta)))/(2*a);
             cout<<x1<<endl<<x2<<endl;

        }
     }
}