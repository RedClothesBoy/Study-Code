#include <iostream>
#include <string>
#include <cstring>
#include "10_1.h"

using namespace std;

void Bank::input (float mon)
{
    money += mon;
} 

bool Bank::output(float mon)
{
    if (mon > money)
        return false;
    else
    {
        money -= mon;
        return true;
    }
}

void Bank::show() const
{
    cout << name << endl;
    cout << account << endl;
    cout << money << endl;
}

Bank::Bank(string nm, string acc, float mon)
{
    name = nm;
    account = acc;
    money = mon;
}

Person::Person(const string &ln, const char *fn)
{

    lname = ln;
    strncpy(fname, fn, LIMIT);
    
}

void Person::Show () const
{
    cout << fname <<" " << lname << endl;
}

void Person::FormalShow() const
{

    cout << lname << ',' << fname << endl;
}