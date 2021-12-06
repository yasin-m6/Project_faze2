#include<iostream>
#include<new>
#include"farm.hpp"


int farm::get_length()
{
    int num;
    cout << "please Enter length of your farm -> ";
    cin >> num;

    return num;
}

int farm::set_length(int num)
{
    if(num > 0)
    {
        length = num;
    }
    else
    {
        throw invalid_argument("legnth of your farm has to be a positive number :(");
    }

    return length;
}

int farm::get_width()
{
    int num;
    cout << "please Enter width of your farm -> ";
    cin >> num;

    return num;
}

int farm::set_width(int num)
{
    if(num > 0)
    {
        width = num;
    }
    else
    {
        throw invalid_argument("width of your farm has to be a positive number :(");
    }
    return width;
}

void farm::print() const
{
    cout << "lenth of your farm is : " << length << endl;
    cout << "width of your fatm is : " << width << endl;
}

void farm::get_farm()
{
    yourfarm = new(nothrow) string*[length];
    if(!yourfarm)
    {
        cerr << "Error in memmory allocation!!!" << endl;
    }
    for (size_t i = 0; i < length; i++)
    {
        yourfarm[i] = new(nothrow) string[width];
        if (!yourfarm[i])
        {
            cerr << "Error in memmory allocation!!!" << endl;
        }   
    }
}


