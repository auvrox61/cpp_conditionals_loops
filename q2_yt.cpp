//sum of numbers from 1 to n

#include<iostream>
using namespace std;

int sumN(int n){
    int sum=0;
    for(int i=0;i<n+1;i++){
        sum+=i;
    }
    return sum;
}

int main(){
    int n;
    cin>>n;
    int result=sumN(n);
    cout<<result<<endl;
    return 0;
}