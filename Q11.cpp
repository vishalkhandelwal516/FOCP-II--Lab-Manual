#include<iostream>
using namespace std;
int main(){
    int qty;
    float price,total;
    cin>>qty>>price;
    total=qty*price;
    if(qty>1000)
        total=total-total*0.10;
    cout<<total;
    return 0;
}
