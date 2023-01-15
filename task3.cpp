#include <iostream>
#include <windows.h>
using namespace std;

string checksign(string, int);


main()
{
    string month,output;
    int date;

    cout<<"Enter the date";
    cin>>date;
    cout<<"Enetr the month : ";
    cin>>month;

    output = checksign(month, date);
    cout<<output;
}

string checksign(string month, int date)
{
    string output;

    if(((date>=21 && date<=31) && month == "march") || ((date>=0 && date<=19) && month == "april"))
    {
        output = "Aries";
    }

    else if(((date>=20 && date<=30) && month == "april") || ((date>=0 && date<=20) && month == "may"))
    {
        output = "Taurus";
    }

    else if(((date>=21 && date<=31) && month == "may") || ((date>=0 && date<=20) && month == "june"))
    {
        output = "Gemini";
    }

    else if(((date>=21 && date<=30) && month == "june") || ((date>=0 && date<=22) && month == "july"))
    {
        output = "Cancer";
    }

    else if(((date>=23 && date<=31) && month == "july") || ((date>=0 && date<=22) && month == "august"))
    {
        output = "Leo";
    }

    else if(((date>=23 && date<=31) && month == "august") || ((date>=0 && date<=22) && month == "september"))
    {
        output = "Virgo";
    }

    else if(((date>=23 && date<=30) && month == "september") || ((date>=0 && date<=22) && month == "october"))
    {
        output = "Libra";
    }

    else if(((date>=23 && date<=31) && month == "october") || ((date>=0 && date<=21) && month == "november"))
    {
        output = "Scorpio";
    }

    else if(((date>=22 && date<=30) && month == "november") || ((date>=0 && date<=21) && month == "december"))
    {
        output = "Sagittarius";
    }

    else if(((date>=22 && date<=31) && month == "december") || ((date>=0 && date<=19) && month == "january"))
    {
        output = "Capricorn";
    }

    else if(((date>=20 && date<=31) && month == "january") || ((date>=0 && date<=18) && month == "february"))
    {
        output = "Aquarius";
    }

    else if(((date>=19 && date<=28) && month == "february") || ((date>=0 && date<=20) && month == "march"))
    {
        output = "Pisces";
    }
    return output;
}