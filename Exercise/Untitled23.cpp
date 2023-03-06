#include <iostream>
using namespace std;
void prime(int n);
int main(){
    int num;
    printf("Enter a positive integer to check: ");
    cin>>num;

    prime(num);
    return 0;
}

void prime(int n){
    int num,i,flag =0;
    for(i = 2;i <= n/2; ++i){
        if(n % i == 0){
            flag =1;
            break;
        }
    }
        if (flag == 1){
            cout << n <<" is not a prime number.";
        }
        else{
            cout<< n<<" is a prime number";
        }
}
