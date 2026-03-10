#include<iostream>
using namespace std;
int main(){
    int item,qty;
    float price,amount,discount,total;
    cin>>item>>qty>>price;
    amount=qty*price;
    discount=amount*0.20;
    total=amount-discount;
    cout<<total;
    return 0;
}
