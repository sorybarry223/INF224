#ifndef FILM_H
#define FILM_H

#include <iostream>
#include <stdlib.h>
#include <string.h>
#include "multimedia.h"
#include "video.h"
using namespace std;

class Film:public Video{
private:
    uint nbr_chap{};
    int *chapitre=nullptr;
public:
    Film(){}
    Film(string n, string p, unsigned int d,uint nb, int *chap):Video(n,p,d){
        nbr_chap=nb;
        chapitre=chap;
    }
    ~Film(){delete chapitre;}
    uint get_nbr() const{
        return nbr_chap;
    }
    int *get_chapitre() const{
        return chapitre;
    }
    void set_nbr(uint nb){
        nbr_chap=nb;
    }
    void set_chap(uint nb);
    void affiche_durees(int *chap, uint d);
    

};

#endif