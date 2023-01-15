#include <iostream>
#include <windows.h>
using namespace std;

string checkweather(string, string);


main()
{
    string temprature,humidity,output;

    cout<<"Enetr temprature (warm or cold)";
    cin>>temprature;
    cout<<"Enter humidity (dry or humid)";
    cin>>humidity;

    output=checkweather(temprature,humidity);
    cout<<output;
}

string checkweather(string temprature, string humidity)
{
    string play;
    if(temprature=="warm" && humidity=="dry")
    {
        play= " Play Tennis";
    }
    else if(temprature=="warm" && humidity=="humid")
    {
        play= "Swim";
    }
    else if(temprature=="cold" && humidity=="dry")
    {
        play= "Play Basketball";
    }
    else if(temprature=="cold" && humidity=="humid")
    {
        play= "Watch TV";
    }
    return play;
}