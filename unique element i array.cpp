#include<iostream>
#include<vector>
using namespace std;

int findUnique(vector<int>arr){
    int ans=0;
    for(int i=0;i<arr.size();i++)
        ans=ans^arr[i];                     //bitwise operator XOR
    return ans;
    
}

int main(){
    int n;
    
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the elements of array"<<endl;
    for(int i=0;i<arr.size();i++){
        cin>>arr[i];
    }
    int element=findUnique(arr);
    cout<<"unique elemnt is "<<element<<endl;
    return 0;
}