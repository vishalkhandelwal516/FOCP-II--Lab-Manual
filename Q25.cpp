#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cin>>s;
    int u=0,l=0,d=0,sp=0;
    for(int i=0;i<s.length();i++){
        if(s[i]>='A'&&s[i]<='Z')
            u=1;
        else if(s[i]>='a'&&s[i]<='z')
            l=1;
        else if(s[i]>='0'&&s[i]<='9')
            d=1;
        else if(s[i]=='@'||s[i]=='#'||s[i]=='$'||s[i]=='%'||s[i]=='!'||s[i]=='&'||s[i]=='*')
            sp=1;
    }
    if(u&&l&&d&&sp)
        cout<<"Valid";
    else
        cout<<"Invalid";
    return 0;
}
