#include<iostream>
#include<stdexcept>
#include"vegtebale.hpp"

int vegtebale::get_type()
{
    int type;
    cout << "vegtebale you can plant is :\ntomato | cabbage = 1 | tcarrot = 2 | lettuce = 4" << endl;
    cout << "what vegtebale you wanna plant ? " ;
    cin >> type;

    return type;
}

void vegtebale::set_type(int type)
{
    if (type == 0 || type == 1 || type == 2 || type == 3)
    {
        this->type = static_cast<VEG>(type);
    }
    else
    {
        throw invalid_argument("please choose a vegtebale you can plant!!!");
    }
    
    
    
}


void vegtebale::print()
{
    cout << "vegtebale i want to plant is : " ;

    if(type == TOMATO)
    {
        cout << "tomato" << endl;
    }
    if(type == CARROT)
    {
        cout << "carrot" << endl;
    }
    if(type == CABBAGE)
    {
        cout << "cabbage" << endl;
    }
    if(type == LETTUCE)
    {
        cout << "lettuce" << endl;
    }
    
    
}