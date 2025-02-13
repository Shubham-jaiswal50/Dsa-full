// MAP:
// 1. it is associative container()
// 2. it uses pair value i.e key,value
// 3. it display the data in sorted order
// 4. it used self balanced binary serch tree concept
// 5. key is always unique but value may be duplicates
// there are three type of map
//  A.order Map
//  B.unordered map 
//  C.multimap
#include<iostream>
using namespace std;
#include<map>
int main(){
    //syntax map<key,value>name{value1,value2}
    //it ignore the duplicate value and does not show error
    map<int,string>mp;
    mp.insert({101,"amit"});
    mp.insert({10,"rahul"});
    mp.insert({18,"neha"});
    mp.insert({6,"sumit"});
    for(auto p:mp){
    cout<<p.first<<","<<p.second<<"\n";
   
}
}
