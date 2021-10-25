#include <iostream>
#include "class_prototype.h"
using namespace std;

void Safe::set_money(long double money)
{
    if(money >= 0)
    {
        this -> m_money += money;
    }else{
    cout << "Error" << endl;
    }
}

void Safe::sub_money(long double money)
{
    if(money <= m_money)
    {
        this -> m_money -= money;
    }else{
        cout << "There is nor enough money" << endl;
    }
}

long double Safe::get_money()
{   
    return m_money;
}