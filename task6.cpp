#include <iostream>
#include <windows.h>
using namespace std;

float calculatepriceofstudio(string, int);
float calculatepriceofapartment(string, int);


main()
{
    string month;
    int stays;
    float outputstudio,outputapartment;

    cout<<"Enter name of month : ";
    cin>>month;
    cout<<"Enter no of stays (0 - 200): ";
    cin>>stays;
    
    outputstudio = calculatepriceofstudio(month, stays);
    outputapartment = calculatepriceofapartment(month, stays);
    cout<<"Studio : "<<outputstudio<<"$"<<endl;
    cout<<"Apartment : "<<outputapartment<<"$";
}

float calculatepriceofstudio(string month, int stays)
{
    float studiorate,output;

    if ( month == "may" || month == "october")
    {
        if(stays <= 7)
        {
            studiorate = stays*50;
            output = studiorate;
        }
        else if(stays > 7 && stays<=14 )
        {
            studiorate = stays*50;
            output = studiorate - (studiorate*0.05);
        }
        else if(stays > 14 )
        {
            studiorate = stays*50;
            output = studiorate - (studiorate*0.3);
        }
    }

    else if ( month == "june" || month == "september")
    {
        if(stays <= 14)
        {
            studiorate = stays*75.20;
            output = studiorate;
        }
        else if(stays > 14 )
        {
            studiorate = stays*75.20;
            output = studiorate - (studiorate*0.2);
        }
    }

    else if ( month == "july" || month == "august")
    {
        studiorate = stays*76;
        output = studiorate;
    }

    return output;
}


float calculatepriceofapartment(string month, int stays)
{
    float apartmentrate,output;

    if ( month == "may" || month == "october")
    {
        if(stays <= 14)
        {
            apartmentrate = stays*65.00;
            output = apartmentrate;
        }
        else if(stays > 14 )
        {
            apartmentrate = stays*65.00;
            output = apartmentrate - (apartmentrate*0.1);
        }
        
    }

    else if ( month == "june" || month == "september")
    {
        if(stays <= 14)
        {
            apartmentrate = stays*68.70;
            output = apartmentrate;
        }
        else if(stays > 14 )
        {
            apartmentrate = stays*68.70;
            output = apartmentrate - (apartmentrate*0.1);
        }
    }

    else if ( month == "july" || month == "august")
    {
        if(stays <= 14)
        {
            apartmentrate = stays*77.00;
            output = apartmentrate;
        }
        else if(stays > 14 )
        {
            apartmentrate = stays*77.00;
            output = apartmentrate - (apartmentrate*0.1);
        }
    }

    return output;
}