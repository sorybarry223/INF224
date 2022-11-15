//
// main.cpp
// Created on 21/10/2018
//

#include <iostream>
#include <stdlib.h>
#include <string.h>
#include "multimedia.h"
#include "video.h"
#include "photo.h"
using namespace std;

int main(int argc, const char *argv[])
{
    Photo *p=new Photo("logo.png","~/Downloads/",0.5,0.5);
    Video *v=new Video("vid.mp4", "~/Downloads/",10);
    p->affiche(std::cout);
    v->affiche(std::cout);
    return 0; 
}