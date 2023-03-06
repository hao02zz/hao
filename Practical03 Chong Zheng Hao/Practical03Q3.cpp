#include <iostream>
using namespace std;

int main() 
{
        int n, x, oddSum = 0, evenSum = 0;
        cout << "Enter the number of integers: ";
        cin >> n;
        cout << "Enter your values:" << endl;
        for (int i = 0; i < n; i++) 
		{
            cin >> x;
            if (x % 2 == 0)
                evenSum += x;
            else
                oddSum += x;
        }
        cout << "Odd Numbers: " << oddSum << endl;
        cout << "Even Numbers: " << evenSum << endl;
        return 0;
}
