#include<iostream>
using namespace std;

int main()
{
      int n=10;
        // Write Your Code here
        int arr[32],newarr[32];
        int i=0;
        while ( n > 0){
            arr[i] = n % 2;
            n = n / 2;
            i++;
        }
        
}
    