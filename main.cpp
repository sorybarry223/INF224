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
#include "film.h"
using namespace std;

int main(int argc, const char *argv[])
{
    
    /*Multimedia **multi=new Multimedia *[5];//Tableau de pointeurs sur Multimedia
    int count=0;
    multi[count++]=new Photo("logo-2.png", "~/Downloads/",0.5,0.5);
    multi[count++]=new Video("cvstandard", "~/Downloads/",10);
    multi[count++]=new Photo("Photo_cv.JPG", "~/Downloads/",0.5,0.5);
    multi[count++]=new Video("picture_1.png", "~/Downloads/",10);
    multi[count++]=new Photo("logo-2.png", "~/Downloads/",0.5,0.5);
    for(int i=0;i<count;++i){
        multi[i]->display(); 
    }*/
    int* chap=new int[5];
    for(int i=0;i<5;i++){
        chap[i]=i;
    }

    Film *f=new Film("my_film","~/Downloads/",10,5,chap);
    f->affiche_durees(chap,5);
    return 0; 
}