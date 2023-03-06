#include <iostream>
using namespace std;

int main() 
{
    int sum = 0;
    int input = 0;
    
    do {
        cout << "Enter the value of resistors or 0: ";
        cin >> input;
        sum += input;
       }
       
    while(input != 0);
    cout << "Sum of resistor value are: " << sum << '\n';
    return 0;
    
}
