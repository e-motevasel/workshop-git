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
int main()
{
    cout<<"Please select your function: "<<endl;
    cout<<"1.Simple Cal"<<endl<<"2.Solve quadratic EQ"<<endl<<"3.Advanced Cal"<<endl<<"4.Exit"<<endl;
    int n;
    do{
        int c;
        cin>>n;
        if(n==1)
        {double arr[10000];
         cout<<"1.SUM"<<endl<<"2.SUB"<<endl<<"3.MUL"<<endl;
            cin>>c;
            if(c==1)
            {cout<<"length of you array: ";int x;
             cin>>x;
             for(int i=0;i<x;i++)
             {cin>>arr[i];}
             cout<<Sum(arr,x)<<endl;
             break;
            }
            if(c==2)
            {int x;cout<<"length of you array: ";
             cin>>x;
             for(int i=0;i<x;i++)
             {cin>>arr[i];}
             cout<<Sub(arr,x)<<endl;
             break;
            }
            if(c==3)
            {int x;cout<<"length of you array: ";
             cin>>x;
             for(int i=0;i<x;i++)
             {cin>>arr[i];}
             cout<<Mul(arr,x)<<endl;
             break;
            }        
        }
        if(n==2)
        {double a,b,d;
	 cin>>c;
	 cout<<"1.Daraje 1"<<endl<<"2.Daraje 2"<<endl;
		if(c==1)
		{cin>>b>>d;Solver(0,b,d);break;}
		if(c==2)
		{cin>>a>>b>>d;Solver(a,b,d);break;}
     
        }
        if(n==3)
        {cout<<"1.GCD"<<endl<<"2.LCD"<<endl<<"3.C(n,k)"<<endl;
            cin>>c;
            if(c==1)
            {int a,b;cout<<"your numbers: ";
                cin>>a>>b;
                cout<<gcd(a,b)<<endl;
                break;
            }
            if(c==2)
            {
                int a,b;cout<<"your numbers: ";
                cin>>a>>b;
                cout<<lcm(a,b)<<endl;
                break;
            }
            if(c==3)
            {
                int a,b;cout<<"your numbers: ";
                cin>>a>>b;
                cout<<C(a,b)<<endl;
                break;
            }
        }
        if(n==4)
        {break;}
        else
        {cout<<"Invalid number please try again: "<<endl;
                cout<<"1.Simple Cal"<<endl<<"2.Solve quadratic EQ"<<endl<<"3.Advanced Cal"<<"4.Exit"<<endl;}


    }while(n!=4);
}