#include <iostream>

using namespace std;
int main()
{
	int num1,num2,num3;
	cout << "Enter the lengths of three sides of a triangle: ";
	cin >> num1;
	cin >> num2;
	cin >> num3;
	
	if ((num1*num1 + num2*num2 == num3*num3) || (num1*num1 + num3*num3 == num2*num2) || (num2*num2 + num3*num3 == num1*num1))
	{
		cout << "This is a right triangle.";
	}
	else
	{
		cout << "This is not a right triangle.";
	}
    return 0;










}
