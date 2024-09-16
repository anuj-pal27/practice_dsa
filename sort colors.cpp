#include<iostream>
using namespace std;
#include<vector>
#include<limits>

int main(){
    int arr[100];
    arr[4]=4;
    arr[3]=2;
    arr[9]=4;
    int value=sizeof(arr)/sizeof(arr[2]);
    cout<<value;
}