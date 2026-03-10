#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n,sum=0,temp,r;
    cin>>n;
    temp=n;
    while(n>0){
        r=n%10;
        sum=sum+r*r*r;
        n=n/10;
    }
    if(sum==temp)
        cout<<"Armstrong";
    else{
        int s=0;
        for(int i=1;i<temp;i++){
            if(temp%i==0)
                s+=i;
        }
        if(s==temp)
            cout<<"Perfect";
        else
            cout<<"Neither";
    }
    return 0;
}
