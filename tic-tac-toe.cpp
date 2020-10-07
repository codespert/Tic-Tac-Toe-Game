//This is a simple tic-tac-toe game. Select the field (1,2,..9) where you would want to place x/o. 

#include<iostream>
using namespace std;

char choice;
char disp_field[3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};
char player_1;
char player_2;
string player_1_name;
string player_2_name;
char field_value;
int turn;
int terminate_loop;
int overwrite=0;

void display()
{
  system("cls"); 
  //system("color 0E");
  cout << endl<<endl;
  cout << "\t W e l c o m e  T o  T i k - T o k  G a m e" << endl << endl;
  cout << "\t\t\t      |       |" << endl;
  cout << "\t\t\t "<<disp_field[0][0]<<"    |  "<<disp_field[0][1]<<"    | "<<disp_field[0][2]<<" "<< endl;
  cout << "\t\t\t      |       |" << endl;
  cout << "\t\t\t----------------------"<< endl;
  cout << "\t\t\t      |       |          "<< endl;
  cout << "\t\t\t "<<disp_field[1][0]<<"    |  "<<disp_field[1][1]<<"    | "<<disp_field[1][2]<<"  "<< endl;
  cout << "\t\t\t----------------------"<< endl;
  cout << "\t\t\t      |       |          " << endl;
  cout << "\t\t\t "<<disp_field[2][0]<<"    |  "<<disp_field[2][1]<<"    | "<<disp_field[2][2]<<"  "<< endl;
  cout << "\t\t\t      |       |          " << endl<<endl;
}

void player_choice()
{
cout << "\tEnter Player 1 name ---> ";
cin >> player_1_name;
cout << endl<<endl;
cout << "\tenter Player 2 name ---> ";
cin >> player_2_name;
cout << endl<<endl; 
cout << "\tEnter Player 1 choice:- X/O ---> ";
cin >> choice;
cout << endl<<endl;
if((choice=='X')||(choice=='x'))
 player_1 = 'X';
else if((choice=='O')||(choice=='o'))
 player_1 = 'O';
if(player_1 == 'X')
 player_2 = 'O';
else if(player_1 == 'O')
 player_2 = 'X';

turn = 0;
cout << "\tPlayer 1 "<<player_1_name<<" is "<<player_1<<" and Player 2 "<<player_2_name<<" is "<<player_2<<endl<<endl;
}

void field_modifier(char player)
{
cout << "\tEnter field value ---> ";
cin >> field_value;
cout << endl;
switch(field_value)
  {
    case '1': if((disp_field[0][0]=='X')||(disp_field[0][0]=='O'))
              {
               cout << "\tField "<<field_value<<" is already written"<<endl<<endl;
               overwrite = 1;
              }
              else 
              {
               overwrite = 0;
               disp_field[0][0] = player; 
              }
               break;
    case '2': if((disp_field[0][1]=='X')||(disp_field[0][1]=='O'))
              {
               cout << "\tField "<<field_value<<" is already written"<<endl<<endl;
               overwrite = 1;
              }
              else 
              {
               overwrite = 0;
               disp_field[0][1] = player;
              } 
               break;
    case '3': if((disp_field[0][2]=='X')||(disp_field[0][2]=='O'))
              {
               cout << "\tField "<<field_value<<" is already written"<<endl<<endl;
               overwrite = 1;
              }
              else 
              {
               overwrite = 0;
               disp_field[0][2] = player;
              } 
               break;         
    case '4': if((disp_field[1][0]=='X')||(disp_field[1][0]=='O'))
              {
               cout << "\tField "<<field_value<<" is already written"<<endl<<endl;
               overwrite = 1;
              }
              else 
              {
               overwrite = 0;
               disp_field[1][0] = player; 
              }
               break;  
    case '5': if((disp_field[1][1]=='X')||(disp_field[1][1]=='O'))
              {
               cout << "\tField "<<field_value<<" is already written"<<endl<<endl;
               overwrite = 1;
              }
              else 
              {
               overwrite = 0;
               disp_field[1][1] = player;
              } 
               break;
    case '6': if((disp_field[1][2]=='X')||(disp_field[1][2]=='O'))
              {
               cout << "\tField "<<field_value<<" is already written"<<endl<<endl;
               overwrite = 1;
              }
              else 
              {
               overwrite = 0;
               disp_field[1][2] = player;
              } 
               break;
    case '7': if((disp_field[2][0]=='X')||(disp_field[2][0]=='O'))
              {
               cout << "\tField "<<field_value<<" is already written"<<endl<<endl;
               overwrite = 1;
              }
              else 
              {
               overwrite = 0;
               disp_field[2][0] = player;
              } 
               break;
    case '8': if((disp_field[2][1]=='X')||(disp_field[2][1]=='O'))
              {
               cout << "\tField "<<field_value<<" is already written"<<endl<<endl;
               overwrite = 1;
              }
              else 
              {
               overwrite = 0;
               disp_field[2][1] = player;
              } 
               break;
    case '9': if((disp_field[2][2]=='X')||(disp_field[2][2]=='O'))
              {
               cout << "\tField "<<field_value<<" is already written please select another field"<<endl<<endl;
               overwrite = 1;
              }
              else 
              {
               overwrite = 0;
               disp_field[2][2] = player;
              } 
               break;
    default : cout << "\tInvalid field value entered please select another field" << endl<<endl;
              overwrite = 1;
              break;
  }

}

bool game_draw()
{

  if(/*(!game_win()) && */
     (disp_field[0][0]!='1') &&
     (disp_field[0][1]!='2') &&
     (disp_field[0][2]!='3') &&
     (disp_field[1][0]!='4') &&
     (disp_field[1][1]!='5') &&
     (disp_field[1][2]!='6') &&
     (disp_field[2][0]!='7') &&
     (disp_field[2][1]!='8') &&
     (disp_field[2][2]!='9')  )
       return true;
     else 
       return false;
}

bool game_win()
{

  if((((disp_field[0][0]=='X') && (disp_field[0][1]=='X') && (disp_field[0][2]=='X'))) || ((disp_field[0][0]=='O') && (disp_field[0][1]=='O') && (disp_field[0][2]=='O')) ||
     ((disp_field[1][0]=='X') && (disp_field[1][1]=='X') && (disp_field[1][2]=='X')) || ((disp_field[1][0]=='O') && (disp_field[1][1]=='O') && (disp_field[1][2]=='O')) ||
     ((disp_field[2][0]=='X') && (disp_field[2][1]=='X') && (disp_field[2][2]=='X')) || ((disp_field[2][0]=='O') && (disp_field[2][1]=='O') && (disp_field[2][2]=='O')) ||
     ((disp_field[0][0]=='X') && (disp_field[1][1]=='X') && (disp_field[2][2]=='X')) || ((disp_field[0][0]=='O') && (disp_field[1][1]=='O') && (disp_field[2][2]=='O')) ||
     ((disp_field[0][2]=='X') && (disp_field[1][1]=='X') && (disp_field[2][0]=='X')) || ((disp_field[0][2]=='O') && (disp_field[1][1]=='O') && (disp_field[2][0]=='O')) ||
     ((disp_field[0][0]=='X') && (disp_field[1][0]=='X') && (disp_field[2][0]=='X')) || ((disp_field[0][0]=='O') && (disp_field[1][0]=='O') && (disp_field[2][0]=='O')) ||
     ((disp_field[0][1]=='X') && (disp_field[1][1]=='X') && (disp_field[2][1]=='X')) || ((disp_field[0][1]=='O') && (disp_field[1][1]=='O') && (disp_field[2][1]=='O')) ||
     ((disp_field[0][2]=='X') && (disp_field[1][2]=='X') && (disp_field[2][2]=='X')) || ((disp_field[0][2]=='O') && (disp_field[1][2]=='O') && (disp_field[2][2]=='O'))
      )
       return true;
      else 
       return false;
   
  }
  

void gameplay()
{
 if((turn == 0))
 {
     cout <<"\t"<< player_1_name<<"["<<player_1<<"] plays"<<endl<<endl; 
    field_modifier(player_1);
     if(overwrite==0)
     {  
      display();
      turn = 1;
     }
        
 
 }
 else if((turn == 1))
 {
     cout <<"\t"<<player_2_name<<"["<<player_2<<"] plays"<<endl<<endl;
      field_modifier(player_2);
      if(overwrite==0)
      {
      display();
      turn = 0;
      }
    
 }
  
}

int main()
{    

int restart_game=0;
int p1_win_cntr=0;
int p2_win_cntr=0;
int draw_cntr=0;
int total_game_cntr=0;
RESTART :
//bool terminate_loop= game_win() | game_draw();
display();
player_choice();
while(1)
{
   if(game_win() || game_draw())
    break;
   else
    gameplay();
}

if((turn==0) && !game_draw())
{
 cout << "\tCongrats "<<player_2_name<<" Wins"<< endl<<endl;
 p2_win_cntr = p2_win_cntr + 1;
}
else if((turn==1) && !game_draw())
{
 cout << "\tCongrats "<<player_1_name<<" Wins"<< endl<<endl;
 p1_win_cntr = p1_win_cntr + 1;
}
else if(game_draw())
{
 cout << "\tGame Draw" <<endl<<endl;
 draw_cntr = draw_cntr + 1;
}
total_game_cntr = p1_win_cntr + p2_win_cntr + draw_cntr;

cout << "\tG a m e  s t a t s  t i l l  n o w"<<endl<<endl;
cout <<"\t"<< player_1_name<<" won "<<p1_win_cntr<<" games out of "<<total_game_cntr<<endl<<endl;
cout <<"\t"<< player_2_name<<" won "<<p2_win_cntr<<" games out of "<<total_game_cntr<<endl<<endl;
cout << "\tNumber of games drawed were "<<draw_cntr<<endl<<endl<<endl;

cout << "\tDo you want to restart the Game? Yes=1 and No=0 ---> " ;
cin >> restart_game;
cout << endl;
if(restart_game)
{

disp_field[0][0] = '1';
disp_field[0][1] = '2';
disp_field[0][2] = '3';
disp_field[1][0] = '4';
disp_field[1][1] = '5';
disp_field[1][2] = '6';
disp_field[2][0] = '7';
disp_field[2][1] = '8';
disp_field[2][2] = '9';
//terminate_loop = 0;
restart_game = 0;
goto RESTART;
}
else
{
cout << "\tThank you for playing" <<endl<<endl;        
cout << "\tGame credits :- Prady"<<endl<<endl;    
}

/*
p1_win_cntr = 0;
p2_win_cntr = 0;
draw_cntr = 0;
total_game_cntr = 0;
*/
system("PAUSE");
return 0;
}
