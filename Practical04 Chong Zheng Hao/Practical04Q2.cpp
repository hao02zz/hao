#include <iostream>
using namespace std;

int sum(int a, int b){
    return a + b;
}
int subtract(int a, int b){
    return a - b;
}
int multiply(int a, int b){
    return a * b;
}
float divide (int a, int b){
    return a / b ;
}


int main()
{
    cout << sum(3,4) <<endl; 

    cout << subtract(8,9) << endl; 

    cout << multiply(5,2) << endl; 

    cout << divide(9,3) << endl; 


    return 0;
}
