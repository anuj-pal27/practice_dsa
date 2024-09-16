#include <iostream>
using namespace std;
int main()
{
    // NORMAL SORTING USING FOR LOOP O(N^2);
    // int i,j,arr[6]={1,2,-3,4,-5,6},temp;
    // for(i=0;i<6;i++){
    //     for(j=i+1;j<6;j++){
    //         if(arr[j]<0){
    //             temp=arr[i];
    //             arr[i]=arr[j];
    //             arr[j]=temp;
    //         }
    //     }
    // }
    // for(i=0;i<6;i++)
    //     cout<<arr[i];
    // return 0;

                            // DUTCH NATIONAL FLAG ALGORITHM
    int arr[6] = {1, 2, -3, 4, -5, 6}, l = 0, h = 5;
    while (l < h)
    {
        if (arr[l] < 0)
            l++;
        else if (arr[h] > 0)
            h--;
        else
            swap(arr[l],arr[h]);
    }
    for(int i=0;i<6;i++)
        cout<<arr[i]<<" ";
    return 0;
}

