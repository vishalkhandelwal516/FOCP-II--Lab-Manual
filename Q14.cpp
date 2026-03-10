#include<iostream>
using namespace std;
int main(){
    int choice;
    float a,b;
    do{
        cin>>choice;
        if(choice==1){
            cin>>a>>b;
            cout<<a+b<<endl;
        }
        else if(choice==2){
            cin>>a>>b;
            cout<<a-b<<endl;
        }
        else if(choice==3){
            cin>>a>>b;
            cout<<a*b<<endl;
        }
        else if(choice==4){
            cin>>a>>b;
            cout<<a/b<<endl;
        }
    }while(choice!=5);
    return 0;
}
