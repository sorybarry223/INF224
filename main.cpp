//
// main.cpp
// Created on 21/10/2018
//

#include <iostream>
#include <stdlib.h>
#include <string.h>
#include "multimedia.h"
using namespace std;

int main(int argc, const char *argv[])
{
    Multimedia * m=new Multimedia("photo1","/usr/bin/local");
    m->affiche(std::cout);
    return 0; 
}