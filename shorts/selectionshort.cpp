#include<iostream>
using namespace std ;
void selection(int arr[],int s){

    for(int i=0;i<s;i++){
        int chotu=i;
        for(int j=chotu +1;j<s;j++){
            if (arr[chotu]>arr[j]){
            chotu=j;
            }
              
              if(chotu !=i){
                int temp=arr[chotu];

                arr[chotu]=arr[i];
                arr[i]=temp;
            

              }
        }
    }
}


int main(){
int arr[]={4,7,3,5,9,13,15,2};
int s=sizeof(arr)/sizeof(arr[0]);
for(int i=0;i<s;i++){
    cout<<arr[i]<<"\t";
}
cout<<endl;
selection(arr,s);
for(int i=0;i<s;i++){
    cout<<arr[i]<<"\t";
}

}