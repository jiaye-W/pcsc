#include <iostream>
#include "DoubleVector.hpp"

int main(int argc, char* argv[])
{
    DoubleVector<5> v;
    v[0] = 1.0; // This is OK
    v[7] = 5.0; // Will trip assertion
}