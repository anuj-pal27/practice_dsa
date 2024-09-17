#include <iostream>
using namespace std;

int main() {
  int res=0;
  int arr[]={4,3,4,4,5,5,4},n=7;
  for(int i=0;i<n;i++)
    res=res^arr[i]; 
  cout<<"res"<<res;
  return 0;
}