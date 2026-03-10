#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b && a>c)
        cout<<"Player1";
    else if(b>a && b>c)
        cout<<"Player2";
    else
        cout<<"Player3";
    return 0;
}
