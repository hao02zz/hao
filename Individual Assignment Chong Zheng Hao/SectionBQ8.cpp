#include <iostream>
#include <cstring>
using namespace std;

char num [9] = {'1','2','3','4','5','6','7','8','9'};
void top();
void board(char num[9]);
void winner(string p1n,string p2n,char num [9]);
void print_winner(string p1n,string p2n,int w);

int main(){
    top();
    string p1n,p2n;
    char ngchar[2]={'Y','y'};
    char ng;
    cout<<"Enter Player 1 Name: ";
    cin>>p1n;
    cout<<"Enter Player 2 Name: ";
    cin>>p2n;
    winner(p1n,p2n,num);
    cout<<"\nPress Y to restart a new game and N to exit: ";
    cin>>ng;
    while(ng){
        if(ng==ngchar[0]||ng==ngchar[1]){
        char num [9] = {'1','2','3','4','5','6','7','8','9'};    
        winner(p1n,p2n,num);
        cout<<"\nPress Y to restart a new game and N to exit: ";
        cin>>ng;                
        }
        else{
            return 0;
        }
    }    
}
void top(){
    cout<<" ***************************\n";
    cout<<" WELCOME TO _Chong Zheng Hao_ TIC TAC TOE GAME\n";
    cout<<" ***************************\n";
}    
void board(char num[9]){
    cout<<" +++++++++++++\n";
    cout<<" + "<<num[0]<<" | "<<num[1]<<" | "<<num[2]<<" +"<<endl;
    cout<<" ++++|+++|++++\n";
    cout<<" + "<<num[3]<<" | "<<num[4]<<" | "<<num[5]<<" +\n";
    cout<<" ++++|+++|++++\n";
    cout<<" + "<<num[6]<<" | "<<num[7]<<" | "<<num[8]<<" +\n";
    cout<<" +++++++++++++\n";
}
void winner(string p1n,string p2n,char num[9]){
    int w=0,choose;        
    for(int i=1;i<=9;i++){
        cout<<"\n";
        board(num);        
        if(i % 2 == 1){
            cout<<"Player 1 choose a number :";
            cin>>choose;
            if(choose<0 || choose>9){
                cout<<"Wrong input,Please choose integer between 1 to 9:";
                cin>>choose;
            }
            choose[num-1]='O'; 
        }
        else{
            cout<<"Player 2 choose a number :";
            cin>>choose;
            while(choose<0 || choose>9){
                cout<<"Wrong input,Please choose integer between 1 to 9:";
                cin>>choose;
            }
            choose[num-1]='X';  
        }
        
        
        if  (num[0] == num[1] && num[1] == num[2] && num[2] == num[0]){    
            if(num[0] == 'O' ){        
            w= 1;            
        }
            else{
            w= 2;
        }                            
        break;
        }        
        if (num[3] == num[4] && num[4] == num[5] && num[5] == num[3]){    
            if(num[3] == 'O' ){
            w= 1;            
        }
            else{
            w=2;
        }                    
        break;    
        }
        
        
        if (num[6] == num[7] && num[7] == num[8] && num[8] == num[6]){                
            if(num[6] == 'O' ){
            w= 1;            
        }
            else{
            w=2;
        }
        break;
        }
        
        
        if (num[0] == num[3] && num[3] == num[6] && num[6] == num[0]){        
        if(num[0] == 'O' ){
            w = 1;            
        }
            else{
            w = 2;
        }
        break;    
        }
        if (num[1] == num[4] && num[4] == num[7] && num[7] == num[1]){    
            if(num[1] == 'O' ){
            w = 1;            
        }
            else{
            w = 2;
        }                    
        break;    
        }
        if (num[2] == num[5] && num[5] == num[8] && num[8] == num[2]){            
            if(num[2] == 'O' ){
            w = 1;            
        }
            else{
            w = 2;
        }                    
        break;    
        }        
        
        if (num[0] == num[4] && num[4] == num[8] && num[8] == num[0]){                            
            if(num[0] == 'O' ){
            w = 1;            
        }
            else{
            w = 2;
        }                    
        break;    
        }
        if (num[2] == num[4] && num[4] == num[6] && num[6] == num[2]){            
            if(num[2] == 'O' ){
            w = 1;            
        }
            else{
            w = 2;
        }                    
        break;    
        }        
    }
    board(num);    
    print_winner(p1n,p2n,w);
        
}
void print_winner(string p1n,string p2n,int w){
    if (w == 0 ){
    cout<<"No player win !!!";    
    }
    else if (w == 1){
    cout<<"Congratulation!!!"<<p1n<<" won the game";
    }         
    else if(w == 2) {
    cout<<"Congratulation!!!"<<p2n<<" won the game";
    }    
}
