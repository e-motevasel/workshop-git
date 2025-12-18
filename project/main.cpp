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
    if(n==1){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}

int C(int N,int K){
    return factorial(N)/(factorial(K)*factorial(N-K));
}

