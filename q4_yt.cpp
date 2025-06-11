//check if a number is prime or not

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    bool found=1;
    if(n==2){
        cout<<"Prime"<<endl;
    } else{
        for(int i=2;i<=n-1;i++){
            if(n%i==0){
                found=0;
                break;
            } else{
                found=1;
            }
        }
    }
    if(found){
            cout<<"Prime"<<endl;
        } else{
            cout<<"Not a Prime"<<endl;
        }
    return 0;
}