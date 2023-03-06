#include <iostream>

using namespace std;
int main()
{
	int num,temp;
	int sum = 0;
		
	cout << "Enter the number:";
	cin >> num;
	temp = num;
	
	do
	{
		sum = sum + num % 10;
		
		num = num / 10;
	}
	while (num> 0);
	
	cout << "The sum of the digits =" << sum << endl;
	
	if (sum % 3 == 0)
		cout << temp << " is divisible by 3" << endl;
	else
		cout << temp << " is not divisible by 3" << endl;
	
	if (sum % 9 == 0)
		cout << temp << " is divisible by 9" << endl;
	else
		cout << temp << " is not divisible by 9" << endl;
}	


