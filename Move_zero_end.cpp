#include<bits/stdc++.h>
using namespace std;
//brute force approach to move all zeros to the end of the array in space complexity O(n) and time complexity O(2n)
void brute(int arr[],int n){
    vector<int>vec;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            vec.push_back(arr[i]);
        }
    }
    int m=vec.size();
    for(int i=0;i<m;i++){
        arr[i]=vec[i];
    }
    
    for(int i=m;i<n;i++){
        arr[i]=0;
    }
}
// optimal approach to move all zeros to the end of the array in space complexity O(1) and time complexity O(n)
 void optimal(int arr[],int n){
    int j=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            j=i;
            break;
        }
    }
     if(j==-1) return ; // to handle non zero array
    for(int i=j+1;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
 }
int main(){
    int n; cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
     //brute(arr,n);
     optimal(arr,n);
     cout<<"Zeros to end : ";
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
     }
    return 0;
}