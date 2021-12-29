//---------------------------------------------------------------------------
//Title: Rockpaperscissor_CPP
//Language:CPP
//Coder: Sujal vishwakarma
//---------------------------------------------------------------------------

#include<iostream>
#include<cstdlib>  //to use the RAND Function
#include<ctime>   //To use the cureent time as a seed in SRAND Func

using namespace std;
 char ui; //user input
char aii;  //input of ai
int up=0,aip=0;  //user point and ai point


void list();  //list of choices
void ai();   //computer randomly choozing R, P, S
void user(); // user input for r p s
void wdl(int up,int aip);   //Win draw or 
void logic(char aii,char ui); //main logic of code for r p s
void scoreboard(int up,int aip); //scoreboard after match is completed



int main() //Main Start
{ 
    int choice;
    list();
    cout<<"\t\t\t\t\tEnter your choice\n";
    cin>>choice;

    switch (choice)
    {
    case 1:
        goto label;
        break;
    case 2:
     exit(0);
       break;
    default:
    cout<<"\t\t\t\t\tInvalid input\n";
    exit(0);
        break;
    }  
    label:
    for (int i = 0; i < 5; i++)
    {   
      ai();
      user();
      logic(aii,ui);
   
    }
   scoreboard(up,aip);
    wdl(up,aip);

    return 0;
}


void list(){
    cout<<"\t\t\t\t***************************\n";
    cout<<"\t\t\t\t**** ROCK PAPER SCISSOR ***\n";
    cout<<"\t\t\t\t***************************\n\n";

    cout<<"\t\t\t\t    1.Start game\n";
    cout<<"\t\t\t\t        2.Exit\n\n";
}

void ai(){
   srand(time(0));  //setting seed value of random to current time of divice
   int k=rand()%3+1;   //random between 0 1 2;    
 if (k==1)
 {
     aii='r';
 }
 else if (k==2)
 {
     aii='p';   
 }
 else if(k==3)
 {
    aii='s';   
 }
 else
 {
     cout<<"NOPE";
     exit(0);
 }
  
}

void user(){
cout<<"\t\t\t\t\tEnter Your Input\n";
cin>>ui;
     
}

void logic(char aii,char ui){
  if (aii == 'r' && ui == 'p') {
        cout << "\t\t\t\t\tComputer Wins! Paper wraps Rock."<< endl;
       aip=aip+1;   
    }
    else if (aii == 'p' && ui == 's') {
        cout << "\t\t\t\t\tComputer Wins! Scissors cut Paper."<< endl;
        aip=aip+1; 
    }
    else if (aii == 's' && ui == 'r') {
        cout << "\t\t\t\t\tComputer Wins! Rock smashes Scissors."<< endl;
        aip=aip+1; 
    }
    else if (aii == 'r' && ui == 's') {
        cout << "\t\t\t\t\tYou Win! Paper wraps Rock."<<endl;
        up=up+1; 
    }
    else if (aii == 'p' && ui == 'r') {
        cout << "\t\t\t\t\tYou Win! Paper wraps Rock."<< endl;
        up=up+1; 
    }
    else if (aii == 's' && ui == 'p') {
        cout << "\t\t\t\t\tYou Win! Scissors cut Paper."<< endl;
        up=up+1; 
    }
    else{
        cout << "\t\t\t\t\tTie. Play again win the Game." << endl;

    }
  
}

void wdl(int up,int aip){ 
    if (up>aip)
    {
        cout<<"\t\t\t\t\t***!!You are the winner of game!!***"<<endl;
    }
    else if (aip>up)
    {
        cout<<"\t\t\t\t\t***!!Computer is the winner of game!!****"<<endl;
           
    }
    else
    {
        cout<<"\t\t\t\t\t*****Its a Tie****"<<endl;
        
    }
    
}
void scoreboard(int up,int aip){

cout<<"\t\t\t\t\t----------------------\n";
cout<<"\t\t\t\t\t|Your score|"<<up<<"|\n";
cout<<"\t\t\t\t\t|AI score  |"<<aip<<"|\n";
cout<<"\t\t\t\t\t|TIE score |"<<5-(up+aip)<<"|\n";
cout<<"\t\t\t\t\t----------------------\n";


}
