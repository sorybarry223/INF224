#include <iostream>
#include <stdlib.h>
#include <string.h>
#include "multimedia.h"
#include "video.h"
#include "film.h"

using namespace std;

void Film::set_chap(uint nb){
    if(nb!=nbr_chap || nb==0)
        //printf("Erreur taille tableau");
        //Error handeling
        exit(EXIT_FAILURE);
    else
        chapitre=new int[nb];
}

void Film::affiche_durees(int *chap, uint d){
    //Error handeling
    if(chap==nullptr)
        exit(EXIT_FAILURE);
        
    Film::set_chap(d);
    chapitre=chap;
    for(int i=0;i<d;i++){
        cout <<chapitre[i]<<endl;
    }
}

void Film::write(ofstream& file) const{
    file.open("multimedia.txt",ios::app);
    //Error handeling
    if(!file)
        exit(0);
        
    file.write((char*)this, sizeof(this));
}

void Film::read(ifstream& file) const{
    file.open("multimedia.txt", ios::in);
    //Error handeling
    if(!file)
        exit(0);
        
    file.read((char*)this, sizeof(this));
}