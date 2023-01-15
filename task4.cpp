#include <iostream>
#include <windows.h>
using namespace std;

float checkbill(char, char, int);


main()
{
    char type, time;
    int minutes,output;

    cout<<"Enter type of call ( 'R' for regular or 'P' forpremium) : ";
    cin>>type;
    cout<<"Enetr time of call ('D' for day or 'N' for night) : ";
    cin>>time;
    cout<<"Enter no of minutes : ";
    cin>>minutes;

    if (type == 'R' || type == 'P')
    {
        output = checkbill(type, time, minutes);
        cout<<output<<"$";
    }
    else
    {
        cout<<"Error";
    }

}

float checkbill(char type, char time, int minutes)
{
    float output;
    if(type == 'R')
    {
        if(minutes <=50)
        {
            output = 10.00;
        }
        else if(minutes >50)
        {
            output = 10.00 + minutes*0.20;
        }
    }

    else if(type == 'P' && time == 'D')
    {
        if(minutes <=75)
        {
            output = 25.00;
        }
        else if(minutes >75)
        {
            output = 10.00 + minutes*0.10;
        }
    }

    else if(type == 'P' && time == 'N')
    {
        if(minutes <=100)
        {
            output = 25.00;
        }
        else if(minutes >100)
        {
            output = 10.00 + minutes*0.05;
        }
    }

    return output;
}