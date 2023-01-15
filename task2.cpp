#include <iostream>
#include <windows.h>
using namespace std;

string checkweather(string, int, int, int, int, int);


main()
{
    int english,math,chemistry,socialscience,biology;
    string name,output;

    cout<<"Enter your Name";
    cin>>name;
    cout<<"Enetr English Marks : ";
    cin>>english;
    cout<<"Enetr Math Marks : ";
    cin>>math;
    cout<<"Enetr  Chemistry Marks : ";
    cin>>chemistry;
    cout<<"Enetr Social Science Marks : ";
    cin>>socialscience;
    cout<<"Enetr Biology Marks : ";
    cin>>biology;

    output = checkweather(name, english, math, chemistry, socialscience, biology);

    cout<<name<<" grade is : "<<output;
}

string checkweather(string name, int english, int math, int chemistry, int socialscience, int biology)
{
    int totalmarks,percentage;
    string output;

    totalmarks = english+math+chemistry+socialscience+biology;
    percentage = (totalmarks*100)/500;

    if(percentage>=90 && percentage<=100)
    {
        output = "A+";
    }
    if(percentage>=80 && percentage<90)
    {
        output = "A";
    }
    if(percentage>=70 && percentage<80)
    {
        output = "B+";
    }
    if(percentage>=60 && percentage<70)
    {
        output = "B";
    }
    if(percentage>=50 && percentage<60)
    {
        output = "C";
    }
    if(percentage>=40 && percentage<50)
    {
        output = "D";
    }
    if(percentage<40)
    {
        output = "F";
    }

    return output;
}
