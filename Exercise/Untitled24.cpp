#include <iostream>
using namespace std;
int prime(int n);
int main(){
    int num,i,flag = 0;
    printf("Enter a positive integer to check: ");
    cin>>num;
     flag=prime(num);

    if (flag == 1){
            cout << num <<" is not a prime number.";
        }
        else{
            cout<< num <<" is a prime number";
        }
    return 0;
}
int prime(int n){
    int i;
    for(i = 2;i <= n/2; ++i){
        if(n % i == 0){
            return 1;
        }
    } 
    return 0;
}
