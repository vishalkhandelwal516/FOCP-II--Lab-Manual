#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(!(isalnum(s[i]))){
            cout<<"Invalid";
            return 0;
        }
    }
    cout<<"Valid";
    return 0;
}
