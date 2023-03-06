#include <iostream>

using namespace std;
int main()
{

 int a,b,c;
 
 cout<<"Enter First number:"<<endl;
 cin>>a;
 
 cout<<"Enter Second number:"<<endl;
 cin>>b;
 
 cout<<"Enter Third number:"<<endl;
 cin>>c;
 
 if( a<b && a<c && b>c ){
 	cout<< "Smallest:" <<a<<endl;
 	cout<< "Middle:" <<c<<endl;
 	cout<< "Biggest:" <<b<<endl;
 }
 
 else if( a<b && a<c && b<c ) {
 	cout<< "Smallest:" <<a<<endl;
 	cout<< "Middle:" <<b<<endl;
 	cout<< "Biggest:" <<c<<endl;
 }
 
 else if ( b<a && b<c && c>a ){
 	cout<< "Smallest:" <<b<<endl;
 	cout<< "Middle:" <<a<<endl;
 	cout<< "Biggest:" <<c<<endl;
 }
 
 else if ( b<a && b<c && c<a ){
 	cout<< "Smallest:" <<b<<endl;
 	cout<< "Middle:" <<c<<endl;
 	cout<< "Biggest:" <<a<<endl;
 }
 
 else if ( c<a && c<b && a>b){
 	cout<< "Smallest:" <<c<<endl;
 	cout<< "Middle:" <<b<<endl;
 	cout<< "Biggest:" <<a<<endl;
 }
 
 else if ( c<a && c<b && a<b){
 	cout<< "Smallest:" <<c<<endl;
 	cout<< "Middle:" <<a<<endl;
 	cout<< "Biggest:" <<b<<endl;
  }
}
