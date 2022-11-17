#include <iostream>
#include <stdlib.h>
#include <string.h>
#include "multimedia.h"
#include "video.h"
#include "film.h"

using namespace std;

void Film::set_chap(uint nb){
    if(nb!=nbr_chap)
        printf("Erreur taille tableau");
    else
        chapitre=new int[nb];
}

void Film::affiche_durees(int *chap, uint d){
    Film::set_chap(d);
    chapitre=chap;
    for(int i=0;i<d;i++){
        cout <<chapitre[i]<<endl;
    }
}