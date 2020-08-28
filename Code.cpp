// NAPSTER-404, Puneet Jangid
#include<bits/stdc++.h>
using namespace std;
 
class player
{
	string name;
	int choice;

	public:

	player()
	{
		cout<<"Enter your Name\n";
		getline(cin, name);
		choice = -1;
	}

	bool Enter_choice()
	{
		int k;
		cin>>k;
		if(k != 1 && k !=2 && k !=3)
		{
			cout<<"Invalid Choice Enter your choice again \n";
			return false;
		}
		choice = k;
		return true;
	}

	int get_choice() 
	{
		return choice;
	}

	string get_name()
	{
		return name;
	}
};
string choose(int k)
{
	if(k == 1) return "ROCK";
	if(k == 2) return "PAPER";
	if(k == 3) return "Scissor";
}
int main()
{
	player p1;

	char ch;
	int tie = 0, win = 0, lose = 0;
	do{
    
    
    cout << "--------------------------------------" << '\n';
    cout << "-- Lets play Rock, Paper, Scissors! --" << '\n';
    cout << "--------------------------------------" << '\n';
    
	cout<<" Enter '1' for ROCK : \n";
	cout<<" Enter '2' for PAPER : \n";
	cout<<" Enter '3' for SCISSOR : \n";
	bool check = false;
	while(!check)
	{
	 check = p1.Enter_choice();
	}
	int choice = p1.get_choice();
    int computer_choice = rand() % 3 + 1;
    cout <<  "The computer chose: " << choose(computer_choice) << '\n';
	cout <<  p1.get_name()<< " chose " << choose(choice)<< '\n';

    // starts possible outcome sequence in rock paper scissors there are 9 possible out comes 3 wins 3 ties and 3 losses.
    if(choice == 1 && computer_choice == 1){
         cout << "Rock meets Rock its a tie!" << '\n';
         tie++;
         }
    else if(choice ==1 && computer_choice== 2){
         cout << "Rock is covered by Paper the computer wins!." << '\n';
         lose++;
         }
    else if(choice == 1 && computer_choice == 3){
         cout << "Rock crushes Scissors "<< p1.get_name() <<" win!" << '\n';
         win++;
         }
    else if(choice == 2 && computer_choice == 1){
         cout << "Paper covers Rock "<<p1.get_name()<<" win!" << '\n';
         win++;
         }
    else if(choice == 2 && computer_choice == 2){
         cout << "Paper meets Paper its a tie!" << '\n';
         tie++;
         }
    else if(choice == 2 && computer_choice == 3){
         cout << "Paper is cut by Scissors the computer wins!" << '\n';
         lose++;
         }
    else if( choice == 3 && computer_choice == 1){
         cout << "Scissors are crushed by Rock computer wins!" << '\n';
         lose++;
         }
    else if( choice == 3 && computer_choice == 2){
         cout << "Scissors cuts Paper "<<p1.get_name()<<" win!" << '\n';
         win++;
         }
    else if(choice == 3 && computer_choice == 3){
         cout << "Scissors meet Scissors its a tie!" << '\n';
         tie++;
         }
		 
    	cout << "Would you like to play again? Y/N" << '\n';
         cin >> ch;
         system("clear");
         }while(ch == 'Y' || ch == 'y');

	cout<<"Total WINS :"<<win<<'\n';
	cout<<"Total LOSE :"<<lose<<'\n';
	cout<<"Total TIE :"<<tie<<'\n';
}
