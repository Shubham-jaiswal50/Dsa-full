#include <iostream>
#include <map>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<int,string>up;
    up.insert({109,"anup"});
    up.insert({32,"rupesh"});
    up.insert({10,"ravi"});
    for(auto p:up){
        cout<<p.first<<","<<p.second<<"\n";
    }
}
//did not allow duplicacy and not sorte