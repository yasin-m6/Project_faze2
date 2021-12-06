#include<iostream>
#include<iomanip>
#include<new>
#include<stdexcept>
#include"farm.hpp"
#include"tools.hpp"
#include"vegtebale.hpp"

using namespace std;



int main()
{
    farm f;
    vegtebale v;
    int vegtebale_type;
    int len;
    int wid;
    int num = 0;


    while (num <= 0)
    {
        num = f.get_length();

        try
        {
            len = f.set_length(num);
        }
        catch(invalid_argument & l)
        {
            cout << "Error : " << l.what() << endl;
        }

    }
    
    num = 0;
    

    while (num <= 0)
    {
        num = f.get_width();

        try
        {
            wid = f.set_width(num);
        }
        catch(invalid_argument & w)
        {
            cout << "Error : " << w.what() << endl;
        }

    }
    

    f.print();



    num = -1;
    

    while (num < 0)
    {
        vegtebale_type = v.get_type();

        try
        {
            v.set_type(vegtebale_type);
            num = 0;
        }
        catch(invalid_argument & s)
        {
            cerr << "Error : " << s.what() << endl;
        }
        
    }

    v.print();

    

}