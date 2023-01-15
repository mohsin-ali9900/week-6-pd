#include<iostream>
#include<conio.h>
#include<cmath>
#include<windows.h>
using namespace std;
void movePacman(int x,int y);
void erase(int x,int y);
void printMaze(int score);
void ghostMoveH(int x,int y);
void eraseGhostH(int x,int y);
void ghostMoveY(int x1,int y1);
void gotoxy(int x,int y);
char getCharAtxy(short int x,short int y);
main()
{
  int x=8;
  int y=12;
  int x1=95;
  int y1=8;
  int pacmanx=4;
  int pacmany=4;
   int score=0;
  bool gamerunning=true;
  system("cls");
  printMaze(score);
  movePacman(pacmanx,pacmany);
  while(gamerunning)
  {
         char nextlocation=getCharAtxy(pacmanx-1,pacmany);
            if(nextlocation!='.')
          {
           score++;
          }
        
        ghostMoveH(x,y);
        {
             if(x<18)
            {
                x=x+1;
            }
            if(x==18)
            {
                gotoxy(x-1,y);
                cout<<" ";
                x=8;
            }
        }
        ghostMoveY(x1,y1);
        {
            if(y1<15)
            {
                y1=y1+1;
            }
            if(y1==15)
            {
               gotoxy(x1,y1-1);
                cout<<" ";
                y1=8; 
            }
        }
      if(GetAsyncKeyState(VK_LEFT))
         {
          char nextlocation=getCharAtxy(pacmanx-1,pacmany);
            if(nextlocation!='#' && nextlocation!='|' &&nextlocation!='%')
          {
           erase(pacmanx,pacmany);
           pacmanx=pacmanx-1;
           movePacman(pacmanx,pacmany);
          }
         }
      if(GetAsyncKeyState(VK_RIGHT))
          {
          char nextlocation=getCharAtxy(pacmanx+1,pacmany);
            if(nextlocation!='#' && nextlocation!='|' &&nextlocation!='%') 
          {
          erase(pacmanx,pacmany);
          pacmanx=pacmanx+1;
          movePacman(pacmanx,pacmany);
          }
          }
      if(GetAsyncKeyState(VK_UP))
           {
          char nextlocation=getCharAtxy(pacmanx,pacmany-1);
            if(nextlocation!='#' && nextlocation!='|' &&nextlocation!='%')
          {
          erase(pacmanx,pacmany);
          pacmany=pacmany-1;
          movePacman(pacmanx,pacmany);
          }
           }
      if(GetAsyncKeyState(VK_DOWN))
           {
          char nextlocation=getCharAtxy(pacmanx,pacmany+1);
            if(nextlocation!='#' && nextlocation!='|' &&nextlocation!='%')
          {
          erase(pacmanx,pacmany);
          pacmany=pacmany+1;
          movePacman(pacmanx,pacmany);
          }
           }
     if(GetAsyncKeyState(VK_ESCAPE))
          {
            gamerunning=false;
          }
    Sleep(200);
  }
}
void gotoxy(int x,int y)
{
  COORD coordinates;
  coordinates.X=x;
  coordinates.Y=y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}
  char getCharAtxy(short int x, short int y)
  {
  CHAR_INFO ci;
  COORD xy= {0,0};
  SMALL_RECT rect={x,y,x,y};
  COORD coordBufSize;
  coordBufSize.X=1;
  coordBufSize.Y=1;
  return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE),&ci,coordBufSize,xy, &rect) ? ci.Char.AsciiChar :  'B';
  }
void printMaze(int score)
{
cout<<"Score:"<<score<<endl;
cout<<" ####################################################################################################################"<<endl;
cout<<"||..   .....................................................................................................        ||"<<endl;
cout<<"||..   %%%%%%%%%%%%%%%%%%%%%%%%%%%%                 ....             %%%%%%%%%%%%%%%%%%%%     |%|..     %%%%        ||"<<endl;
cout<<"||..                   |%|      |%|              |%|....             |%|              |%|     |%|..      |%|        ||"<<endl;
cout<<"||..                   |%|      |%|              |%|....             |%|              |%|     |%|..      |%|        ||"<<endl;
cout<<"||..                   %%%%%%%%%%         .   .  |%|....             %%%%%%%%%%%%%%%%%%%%        ..     %%%%.       ||"<<endl;
cout<<"||..                   |%|                .   .  |%|....             ......................|%|   ..         .       ||"<<endl;
cout<<"||..                   %%%%%%%%%%%%%%%%%%%.   .  |%|....             %%%%%%%%%%%%%%%%      |%|   ..     %%%%.       ||"<<endl;
cout<<"||..                                   |%|.                          |%|                   |%|   ..      |%|.       ||"<<endl;
cout<<"||..                 ................. |%|.                          |%|............             ..      |%|.       ||"<<endl;
cout<<"||..|%|             |%|%|%%%%%%%|%|%|. |%|.                             ............|%|          ...|%|  |%|.       ||"<<endl;
cout<<"||..|%|             |%|%|       |%|%|..       |%|                       ............|%|           ..|%|.            ||"<<endl;
cout<<"||..|%|             |%|%|       |%|%|..       %%%%%%%%%%%%%%%%%%%%%%    ............|%|          .  |%|.            ||"<<endl;
cout<<"||..|%|                                                        ...|%|          %%%%%%%%          ...|%|.            ||"<<endl;
cout<<"||..|%|             %%%%%%%%%%%%%%%%%%%%%%%%%                  ...|%|                      |%|   ...|%|%%%%%%       ||"<<endl;
cout<<"||..                                                           ...|%|%%%%%%%%%%%%%%%%%%    |%|   ............       ||"<<endl;
cout<<"||......................................................................................   |%|   ............       ||"<<endl;
cout<<"||..                                                                                                 ........       ||"<<endl;
cout<<"||.. ...................................................................................   |%|     ..|%|.           ||"<<endl;
cout<<"||..|%|             |%||%|       |%||%|..             %%%%%%%%%%%%%%%%%%   .........|%|    |%|     ..|%|.           ||"<<endl;
cout<<"||..|%|             |%||%|       |%||%|..                          ...|%|      %%%%%%%%    |%|     ..|%|.           ||"<<endl;
cout<<"||..|%|                                 .                          ...|%|                  |%|     ..|%|%%%%%       ||"<<endl;
cout<<"||..|%|             %%%%%%%%%%%%%%%%%%%%%%%%%%%%                   ...|%|%%%%%%%%%%%       |%|     ..........       ||"<<endl;
cout<<"||......................................................................................   |%|     ..........       ||"<<endl;
cout<<"||       ...............................................................................           ..........       ||"<<endl;
cout<<" ####################################################################################################################"<<endl;
}
void movePacman(int x,int y)
{
   gotoxy(x,y);
   cout<<"P";
}
void erase(int x,int y)
{
    gotoxy(x,y);
   cout<<" ";
}
void ghostMoveH(int x,int y)
{
    gotoxy(x-1,y);	
    cout<<" ";
    gotoxy(x,y);	
    cout<<"G";
    Sleep(200);
}
void ghostMoveY(int x1,int y1)
{
    gotoxy(x1,y1-1);	
    cout<<" ";
    gotoxy(x1,y1);	
    cout<<"G";
    Sleep(200);
}




