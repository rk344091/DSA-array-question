#include<iostream>
using namespace std;
int main(){
    int n;        // n is size of array.
    cin>>n;
    int arr[100];
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum=sum+arr[i];
    }
    cout<<"sum is"<<" "<<sum<<endl;
}