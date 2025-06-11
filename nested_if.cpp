#include<iostream>
using namespace std;

int main(){
    int age;
    bool hasVoterID;
    cin>>age;
    cin>>hasVoterID;
    if(age>=18){
        if(hasVoterID){
            cout<<"You are eligible to vote"<<endl;
        } else{
            cout<<"Get your voter ID first"<<endl;
        }
    } else{
        cout<<"Get lost!"<<endl;
    }
    return 0;
}