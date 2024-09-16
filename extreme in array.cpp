#include <iostream>

using namespace std;
int main()
{
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8}, size = 8;
    int start = 0, end = size - 1;
    while (true)
    {
        if (start > end)
        {
            break;
        }
        cout << arr[start] << " ";
        cout << arr[end] << " ";
        start++;
        end--;
    }
    return 0;
}