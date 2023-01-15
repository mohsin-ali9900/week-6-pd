#include <iostream>
#include <windows.h>
using namespace std;

float checkprice(string, string, int);


main()
{
    string fruit,day;
    int quantity;
    float output;

    cout<<"Enter name of fruit : ";
    cin>>fruit;
    cout<<"Enter name of day : ";
    cin>>day;
    cout<<"Enetr quantity of fruit : ";
    cin>>quantity;

    output = checkprice(fruit, day, quantity);
    cout<<"Total bill is : "<<output<<"$";
}

float checkprice(string fruit, string day, int quantity)
{
    float output;
    if(day=="monday" || day=="tuesday" || day=="wednesday" || day=="thursday" || day=="friday")
    {
        if(fruit=="banana")
        {
            output = quantity*2.50;
        }
        else if(fruit=="apple")
        {
            output = quantity*1.20;
        }
        else if(fruit=="orange")
        {
            output = quantity*0.85;
        }
        else if(fruit=="grapefruit")
        {
            output = quantity*1.45;
        }
        else if(fruit=="kiwi")
        {
            output = quantity*2.70;
        }
        else if(fruit=="pineapple")
        {
            output = quantity*5.50;
        }
        else if(fruit=="grapes")
        {
            output = quantity*3.85;
        }

    }

    if(day=="saturday" || day=="sunday")
    {
        if(fruit=="banana")
        {
            output = quantity*2.70;
        }
        else if(fruit=="apple")
        {
            output = quantity*1.25;
        }
        else if(fruit=="orange")
        {
            output = quantity*0.90;
        }
        else if(fruit=="grapefruit")
        {
            output = quantity*1.60;
        }
        else if(fruit=="kiwi")
        {
            output = quantity*3.00;
        }
        else if(fruit=="pineapple")
        {
            output = quantity*5.60;
        }
        else if(fruit=="grapes")
        {
            output = quantity*4.20;
        }

    }
    return output;
}