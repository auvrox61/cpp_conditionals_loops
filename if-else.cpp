#include<iostream>
using namespace std;

int main(){
    int age;
    cin>>age;
    if(age<18){
        cout<<"You are not eligible to vote"<<endl;
    } else{
        cout<<"Please vote!"<<endl;
    }
    return 0;
}