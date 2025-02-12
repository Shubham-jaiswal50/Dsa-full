#include<iostream>
#include<stack>
using namespace std;
bool valid(string s)
{
    stack<char>st;
    bool r=true;
    for (int i=0;i<s.size();i++){
        if(s[i]='[' || s[i]=='{' || s[i]=='('){
        st.push(s[i]);
    }
    else{
        r=false;
        break;

    }

}
else if(s[i]=='}'){
    
}
}
