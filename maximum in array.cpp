#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
    int arr[] = {2, 3, 4, 1, 5, 2, 23, 5, 2};
    int size = sizeof(arr) / sizeof(int);
    int maxi;
    maxi = INT_MIN;

    for (int i = 0; i < size; i++)
        if (arr[i] > maxi)
            maxi = arr[i];
    cout << "maximum value is" << maxi;
    return 0;
}