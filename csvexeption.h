#ifndef CSVEXEPTION_H
#define CSVEXEPTION_H
#include <iostream>
#include <string>
#include "exception"

class CSVExeption: public std::exception
{
public:
    CSVExeption(int str_number);
    void str_num_err();
private:
    int str_number;
};
#endif // CSVEXEPTION_H
