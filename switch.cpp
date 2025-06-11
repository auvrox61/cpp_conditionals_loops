#include<iostream>
using namespace std;

int main(){
    int day;
    while(1){
        cin>>day;
        if(day==0){
            break;
        }
        switch(day){
            case 1: cout<<"Monday"<<endl;break;
            case 2: cout<<"Tuesday"<<endl;break;
            case 3: cout<<"Wednesday"<<endl;break;
            case 4: cout<<"Thursday"<<endl;break;
            case 5: cout<<"Friday"<<endl;break;
            default: cout<<"Enter anything between 1-5,0 for termination"<<endl;break;
        }
    }
    return 0;
}