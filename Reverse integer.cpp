#include <iostream>
using namespace std;

class reverseInt
{
public:
int ans = 0, rem = 0;
    int reverse(int x)
    {
        
        if (x <= INT_MIN)
        {
            return 0;
        }
        if (x < 0)
        {
            x = -x;
        }
        while (x > 0)
        {
            if (x > INT_MAX)
            {
                return 0;
            }
            int digit = x % 10;
            ans = ans * 10 + digit;
            x = x / 10;
            
        }
        return ans;
    }
};

int main()
{
    reverseInt obj1,obj2;
    int x,y;
    cout<<"Enter the digit to reverse"<<endl;
    cin>>x;
    obj2.ans=obj1.reverse(x);
    cout<<obj2.ans;
}