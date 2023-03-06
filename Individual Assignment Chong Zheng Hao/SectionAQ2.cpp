#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int max = 5, votes[max], max_vote = 0, width = 20;
     float percentage , total=0;
    string names[max];
    for(int i = 0; i < max; i++){
        cout<<"Enter the Candidate name "<<i + 1<<endl;
        cin>>names[i];
        cout<<"Enter the number "<<names[i]<<" received.\n";
        cin>>votes[i];
        total += votes[i];
        if(votes[i] > votes[max_vote]){
            max_vote = i;
        }
    }
    
    cout<<setw(width)<<left<<"Candidate"<<setw(width)<<"Votes Received"<<setw(width)<<"%of Total Votes"<<endl;
    for(int i = 0; i < max; i++){
        percentage = (float)votes[i]/(float)total * 100;
        cout<<setw(width)<<left<<names[i]<<setw(width)<<votes[i]<<setw(width)<<fixed<<setprecision(2)<<percentage<<endl;
    }
    cout<<setw(width)<<"Total"<<setw(width)<<total<<endl;
    cout<<"\nThe winner of the election is "<<names[max_vote];
    return 0;
}
