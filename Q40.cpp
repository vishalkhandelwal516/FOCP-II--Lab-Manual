#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main(){
    string s,t="";
    getline(cin,s);
    int words=0,digits=0,special=0;
    bool space=true;
    for(int i=0;i<s.length();i++){
        if(s[i]!=' '){
            t+=s[i];
            space=false;
        }
        else if(!space){
            t+=' ';
            space=true;
        }
    }
    if(t.length()>0 && t[t.length()-1]==' ')
        t.pop_back();
    if(t.length()>0){
        t[0]=toupper(t[0]);
        for(int i=1;i<t.length();i++)
            t[i]=tolower(t[i]);
    }
    for(int i=0;i<t.length();i++){
        if(isdigit(t[i]))
            digits++;
        else if(!(isalnum(t[i])||t[i]==' '))
            special++;
    }
    for(int i=0;i<t.length();i++){
        if((i==0 && t[i]!=' ')||(t[i]==' '&&i+1<t.length()&&t[i+1]!=' '))
            words++;
    }
    cout<<t<<endl;
    cout<<words<<endl;
    cout<<digits<<endl;
    cout<<special<<endl;
    if(special==0)
        cout<<"Valid";
    else
        cout<<"Invalid";
    return 0;
}
