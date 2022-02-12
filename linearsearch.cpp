#include<iostream>
using namespace std;
bool search(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int size=10;
    int key;
    cout<<"enter the element to search"<<endl;
    cin>>key;
    bool found=search(arr,size,key);
    if(found){
        cout<<"key is present"<<endl;
    }
    else{
        cout<<"key is not present"<<endl;
    }

}