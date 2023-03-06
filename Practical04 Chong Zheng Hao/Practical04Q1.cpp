#include<iostream>
using namespace std;
void largerNumber(int a, int b)
{
	
if(a>b){
    cout<<a<<" is larger than "<<b<<endl;
}else{
cout<<b<<" is larger than "<<a<<endl;
}
}

int main(){
int x,y;
cout<<"Enter first number"<<endl;
cin>>x;
cout<<"Enter second number"<<endl;
cin>>y;

largerNumber(x,y);

return 0;
}
