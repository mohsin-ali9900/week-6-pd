#include <iostream>
#include <windows.h>
using namespace std;

void checkposition(int, int, int);

main()
{
int x, y, h;
string output;

cout<<"Enetr value of 'h' : ";
cin>>h;
cout<<"Enter value of 'x' : ";
cin>>x;
cout<<"Enetr value of 'y' : ";
cin>>y;

checkposition(h, x, y);


}

void checkposition(int h, int x, int y)
{
    string output; 

    if ((( x>0 && x<3*h) && ( y>0 && y<h)) || (( x>h && x<2*h) && ( y<4*h && y>0 )))
    {
        cout<<"INSIDE";
    }

    else if(((x==0 || x==h || x==2*h || x==3*h) && (y==0 || y==h)) || ((x==2*h || x==h) && (y==0 || y==h || y==2*h || y==3*h || y==4*h)) || (y==0 && (x==0 || x==h || x==2*h || x==3*h))) 
    {
        cout<<"BORDER";
    }
    else
    {
        cout<<"OUTSIDE";
    }
}