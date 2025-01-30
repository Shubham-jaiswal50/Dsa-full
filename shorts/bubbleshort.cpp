#include<iostream>
using namespace std;

void buble(int arr[],int l){
    int count;
    
    for(int i=0;i<l;i++){
        bool a=true;

        for(int j=0;j<l-i-1;j++){
            count++;
    
            if(arr[j]>arr[j+1]){
                int temp;
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                a=false;
            }


        }

        if(a==true){
            break;

        }
    }
    cout<<"count ="<<count<<endl;

}
int main(){
    int arr[]={8,5,3,7,2};
    int s=0;
    s=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<s;i++){
        cout<<arr[i]<<"\t";
    }
    buble(arr,s);
   
    for(int z=0;z<s;z++){
        cout<<arr[z]<<"\t";
    }


}