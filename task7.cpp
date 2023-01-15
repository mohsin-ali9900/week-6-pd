#include <iostream>
#include <windows.h>

using namespace std;

void time(int, int, int, int);


main()
{
    int examhour, exammin, arrivehour, arrivemin;

    cout<<"Enter starting time of exam in hours : ";
    cin>>examhour;
    cout<<"Enter starting time of exam in minutes: ";
    cin>>exammin;
    cout<<"Enter arrival time of student in hours : ";
    cin>>arrivehour;
    cout<<"Enter arrival time of student in minutes: ";
    cin>>arrivemin;

    time(examhour, exammin, arrivehour, arrivemin);

}

void time(int examhour, int exammin, int arrivehour, int arrivemin)
{
    int hours,minutes;
    hours = examhour - arrivehour;
    minutes = exammin - arrivemin;

    if(hours>0)
    {
        if(minutes<0)
        {
            minutes = hours*60+minutes;
            hours = minutes/60;
            minutes = minutes%60;
            cout<<hours<<":"<<minutes<<"  earlier";
        }
        else
        {
            cout<<hours<<":"<<minutes<<" earlier";
        }
    }

    else if(hours == 0)
    {
        if(minutes>0)
        {
            cout<<minutes<<" minutes earlier";
        }
        else if(minutes == 0)
        {
            cout<<"On time";
        }
        else
        {
            minutes = abs(minutes);
            cout<<minutes<<" minutes late";
        }
    }
    else if(hours<0)
    {
        if(minutes>0)
        {
            minutes = hours*60+minutes;
            hours = minutes/60;
            minutes = minutes%60;
            hours = abs(hours);
            minutes=abs(minutes);
            cout<<hours<<":"<<minutes<<" late";
        }
        else
        {
            hours = abs(hours);
            minutes = abs(minutes);
            cout<<hours<<":"<<minutes<<" late";
        }
    }
}