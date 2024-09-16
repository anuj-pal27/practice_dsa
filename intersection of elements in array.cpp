#include<iostream>
#include<vector>
using namespace std;

int main(){
    // int arr1[5]={1,2,3,4,5},arr2[4]={6,2,3,9};
    // vector<int>arr;
    // for(int i=0;i<5;i++){
    //     for (int j = 0; j < 4; j++)
    //     {
    //         /* code */
    //         if(arr1[i]==arr2[j]){
    //             arr.push_back(arr1[i]);
    //             break;
    //         }
    //     }
        
    // }
    // for(int i=0;i<arr.size();i++){
    //     cout<<arr[i]<<endl;
    // }
    // return 0;
    int i=0,j=0;
    int arr1[5]={1,2,3,4,5},arr2[4]={6,2,3,9};
    vector<int>arr;
    while(i<=4){
        if(arr1[i]!=arr2[j]){
            j++;
        }
        else if( arr1[i]==arr2[j]){
            arr.push_back(arr1[i]);
            
            cout<<arr1[i];
            i++;
        }
    }
}

//Time Complexcity = O(n^2);