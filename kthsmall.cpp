#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,temp;
    cout<<"enter the size of array";
    cin>>n;
    int arr[n];
    //to enter the aray
    cout<<"enter the element"<<endl;
    for (int i = 0 ; i < n ; i++){
        cin>>arr[i];
        }
    //to sort array
    for (int i = 0 ; i < n ; i++)
    {
        for(int j =0 ; j<n;j++){
        if(arr[j]>arr[j+1]){
            temp = arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
        }

    }
    //print sorted array
    cout<<"sorted array"<<endl;
    for (int i = 0 ; i < n ; i++){
        cout<<arr[i];
        cout<<" ";
        }
    //to find kth smallest elemnt
    int k,p;
    cout<<"enter the number yu want samllest element"<<endl;
    cin>>k;
    p=arr[k-1];
    cout<<"smallest element is "<<p;
    return 0;
}