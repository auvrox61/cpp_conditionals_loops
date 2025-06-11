#include<iostream>
using namespace std;

int main(){
    int age;
    bool hasLicense;
    cin>>age;
    cin>>hasLicense;
    if(age>=18||hasLicense){
        cout<<"Go,drive"<<endl;
    } else{
        cout<<"Get lost"<<endl;
    }
    return 0;
}