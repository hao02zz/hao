#include <iostream>

using namespace std;
int main()
{
	int cookies, boxes, leftoverCookies, containers, leftoverBoxes;

	cout<< "Please enter the total number of cookies:";
	cin >> cookies;
	cout<< "\nThe total number of cookies is:"<< cookies<< endl;

	boxes = cookies / 24;
	leftoverCookies = cookies % 24;
	containers = boxes / 75;
	leftoverBoxes = boxes % 75;

{
	if (boxes > 0)
	cout << "Number of boxes needed = " << boxes << endl;
	if (containers > 0)
	cout << "Number of Container = " << containers << endl;
	if (leftoverBoxes > 0)
	cout << "Number of leftover boxes = " << leftoverBoxes << endl;
	if (leftoverCookies > 0)
	cout << "Number of leftover cookies = " << leftoverCookies << endl;

	return 0;
}













}
