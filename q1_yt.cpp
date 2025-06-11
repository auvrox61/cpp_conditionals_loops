#include<iostream>
using namespace std;

int main(){
    char ch;
    cin>>ch;
    if(ch>='A'&&ch<='Z'){
        cout<<"Uppercase"<<endl;
    } else{
        cout<<"Lowercase"<<endl;
    }
    return 0;
}