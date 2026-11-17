#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int total_sum=(n+1)*(n+2)/2;
    cout<<"Missing number is : "<<total_sum-sum;
}