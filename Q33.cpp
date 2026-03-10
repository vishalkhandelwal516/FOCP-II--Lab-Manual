#include<iostream>
using namespace std;
int main(){
    int a[3][5];
    for(int i=0;i<3;i++){
        for(int j=0;j<5;j++)
            cin>>a[i][j];
    }
    cout<<a[0][1]<<endl;
    cout<<a[2][4];
    return 0;
}
