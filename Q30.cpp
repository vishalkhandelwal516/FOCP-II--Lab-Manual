#include<iostream>
using namespace std;
int main(){
    float a[10],sum=0;
    for(int i=0;i<10;i++)
        cin>>a[i];
    for(int i=0;i<10;i++)
        sum+=a[i];
    cout<<sum<<" "<<sum/10;
    return 0;
}
