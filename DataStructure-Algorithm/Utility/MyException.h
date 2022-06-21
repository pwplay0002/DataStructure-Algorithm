#pragma once
#include <iostream>  
#include <exception>
using namespace std;
class my_exception : public exception
{
public:
    my_exception(string _str) : str(_str) { this->what(); }
    virtual const char* what() throw() { return "message"; }
private:
    string str;
};

#ifndef MY_ERROR
#define MY_ERROR(str)               \
{                                   \
    string error_str = str;         \
    throw my_exception(error_str);  \
}                           
#endif