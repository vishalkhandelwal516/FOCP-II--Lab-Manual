#include<iostream>
using namespace std;
int main(){
    int a[5],count=0;
    for(int i=0;i<5;i++)
        cin>>a[i];
    for(int i=0;i<5;i++){
        if(a[i]%3==0 && a[i]%5==0)
            count++;
    }
    cout<<count;
    return 0;
}
