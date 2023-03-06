#include <iostream>

using namespace std;

double larger(double x, double y);
double compareThree(double x, double y, double z);

int main()
{
	double one, two;											//line 1

	cout << "Line 2: The larger of 5 and 10 is "
	     << larger(5, 10) << endl;								//line2

	cout << "Line 3: Enter two numbers: ";   						//line3
	cin  >> one >> two;												//line4
	cout << endl;													//line5

	cout << "Line 6: The larger of " << one
	 	 << " and " << two << is "<< compareThree(23,34,12)<<endl;
    
}
	double larger(double x, double y)
{
    double max;
    if(x >=y)
        max= x;
    else
        max = y;
    return max;
}
	double compareThree (double x, double y ,double z){
    return larger (x , larger(y,z));
}
