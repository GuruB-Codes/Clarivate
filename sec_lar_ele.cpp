#include<bits/stdc++.h>
using namespace std;
int brute (int arr[],int n){
    sort(arr,arr+n);
    int largest =arr[n-1];
    for(int i=n-2;i>=0;i--){
        if(arr[i]!=largest){
            return arr[i];
        }
    }
}
int better(int arr[],int n){
    int largest =arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    int slargest=-1;
    for(int i=0;i<n;i++){
        if(arr[i]<largest && arr[i]>slargest){
            slargest=arr[i];
        }
    }return slargest;
}
int optimal(int arr[],int n){
    int largest=arr[0];
    int slargest=INT_MIN;// when we have -ve elements in array
    for(int i=1;i<n;i++){
        if(arr[i]>largest){
            slargest=largest;
            largest=arr[i];
        }else if(arr[i]<largest && arr[i]>slargest){
            slargest=arr[i];
        }
    }return slargest;

}

int main(){
    int n; cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
     cout<<"second largest element by using brute force approach : "<<brute(arr,n)<<endl;
     cout<<"second largest element by using better approach : "<<better(arr,n)<<endl;
    cout<<"second largest element by using optimal approach : "<<optimal(arr,n);
    return 0;
}