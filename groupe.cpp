#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <memory>
#include <vector>
#include <list>

#include "multimedia.h"
#include "video.h"
#include "photo.h"
#include "film.h"
#include "groupe.h"
using namespace std;

void GROUPE::affiche_groupe() const{
    for(auto& it:groupe) it->affiche(std::ostream cout);
}