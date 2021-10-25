#include <iostream>
#include "class_prototype.h"
using namespace std;

int main()
{
    cout << endl << endl;
    cout << "\t" << "\t" << "\t" << "Menu" << "\t"<< "\t"<< "\t" << endl;
    cout << endl << endl << endl;
    cout << "Press 1: for add money" << endl;
    cout << endl;
    cout << "Press 2: for subtraction money" << endl;
    cout << endl;
    cout << "Press 3: for information" << endl;
    cout << endl;
    cout << "Press 4: for exit" << endl;
    cout << endl;

    Safe object;
    int num;
    
    bool ex_it = true;

    while(ex_it && num!= 4){
    
    cout << "Please enter the command: " ;
    cin >> num;

    switch(num)
    {
        case 1:
            int add_money;
            cout << "Please enter the add money: ";
            cin >> add_money;
            object.set_money(add_money);
        break;

        case 2:
            int sub__money;
            cout << "Please enter the subtraction money: ";
            cin >> sub__money;
            object.sub_money(sub__money);
        break;

        case 3:
           cout << "money: " <<  object.get_money() << endl;
        break;

        case 4:
            cout << "Good buy" << endl;
            break;

        default:
        
        return  0;
            break;


    }

    }




    
}