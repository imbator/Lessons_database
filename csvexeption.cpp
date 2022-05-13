#include "csvexeption.h"

CSVExeption::CSVExeption(int str_err)
{
    this->str_number = str_err;
}

void CSVExeption::str_num_err()
{
    std::cout << "Error occured at line: " << this->str_number << std::endl;
}
