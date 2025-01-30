#include<iostream>
using namespace std;
void insertion(int arr[],int l){
    for(int i=1;i<l;i++){
        int chotu=i;

        while(chotu>0&&arr[chotu]<arr[chotu-1]){
            int temp=arr[chotu-1];
            arr[chotu-1]=arr[chotu];

            arr [chotu]=temp;
            chotu--;
        }
    }

}


int main(){
    int arr[]={2,4,5,7,8,9};
    int l=sizeof(arr)/sizeof(arr[0]);
    insertion(arr,l);
    for(int i=0;i<l;i++){
        cout<<arr[i]<<"\t";
    }
    
}