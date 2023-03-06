#include<iostream>
using namespace std;

int main()
{
    double num =0 ,sum =0 ,a ,i ,s;
    
	do{
		sum += num;
		cout<<"Please Enter Your Number:";
		cin>>num;
		i++;
	}while( num >= 0);
	s=i-1;
	a=sum/s;
    
    cout <<"Average of Numbers : "<<a;
    
    return 0;
}
