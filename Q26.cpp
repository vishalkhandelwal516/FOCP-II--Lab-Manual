#include<iostream>
using namespace std;
int main(){
    int m[5],sum=0;
    for(int i=0;i<5;i++)
        cin>>m[i];
    for(int i=0;i<5;i++)
        sum+=m[i];
    float per=sum/5.0;
    cout<<sum<<" "<<per;
    return 0;
}
