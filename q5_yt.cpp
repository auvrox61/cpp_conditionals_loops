//factorial of n

#include<iostream>
using namespace std;

int factorial(int n){
    int fact=1;
    if(n==1){
        return 1;
    }
    for(int i=n;i>=1;i--){
        fact*=i;
    }
    return fact;
}

int main(){
    int n;
    cin>>n;
    cout<<n<<"!"<<" "<<"="<<" "<<factorial(n)<<endl;
    return 0;
}