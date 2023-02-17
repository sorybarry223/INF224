#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <memory>
#include <vector>
#include <list>
#include <sstream>
#include <fstream>
#include "tcpserver.h"

#include "multimedia.h"
#include "video.h"
#include "photo.h"
#include "film.h"
#include "groupe.h"
#include "maker.h"
using namespace std;

const int PORT = 3331;

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
    /*
    int* chap=new int[5];
    for(int i=0;i<5;i++){
        chap[i]=i;
    }

    Film *f=new Film("my_film","~/Downloads/",10,5,chap);
    f->affiche_durees(chap,5);
    delete[]chap;
    f->affiche_durees(chap,5);*/

    /*
    GROUPE gp("gp1");
    gp.push_back(shared_ptr<Photo>(new Photo("logo-2.png", "~/Downloads/",0.5,0.5)));
    gp.push_back(shared_ptr<Video>(new Video("cvstandard", "~/Downloads/",10)));
    gp.push_back(shared_ptr<Photo>(new Photo("Photo_cv.JPG", "~/Downloads/",0.5,0.5)));
    gp.push_back(shared_ptr<Photo>(new Photo("logo-2.png", "~/Downloads/",0.5,0.5)));
    //gp.affiche_groupe(); 
    auto it=gp.begin();
    advance(it,3);
    gp.erase(gp.begin(), it);
    gp.affiche_groupe(); */



    using GPM = std::shared_ptr<Multimedia>;
    using GPP = std::shared_ptr<GROUPE>;

    using Dictm = std::map<string, GPM>;
    using Dictp = std::map<string, GPP>;
    Dictm dm;
    Dictp dp;
    MAKER *maker=new MAKER(dm,dp);
    /*
    shared_ptr<Photo> p0;
    p0=maker->create_photo("logo-2.png");
    p0->set_name("logo-2.png");
    p0->set_path("~/Downloads/");
    p0->set_lat(0.5);
    p0->set_long(0.5);
    maker->find_and_print_multimedia("logo-2.png");
    maker->display_maker_multimedia("logo-2.png");
*/
    /*shared_ptr<GROUPE> p00;
    p00 = maker->create_groupe("sory");
    p00->push_back(shared_ptr<Photo>(new Photo("logo-2.png", "~/Downloads/",0.5,0.5)));
    p00->push_back(shared_ptr<Video>(new Video("cvstandard", "~/Downloads/",10)));
    p00->push_back(shared_ptr<Photo>(new Photo("Photo_cv.JPG", "~/Downloads/",0.5,0.5)));
    p00->push_back(shared_ptr<Photo>(new Photo("logo-2.png", "~/Downloads/",0.5,0.5)));
    maker->find_and_print_groupe("sory");
    return 0; */





    //A group
    static shared_ptr<GROUPE> g1;

    // cree le TCPServer
  auto* server =
  new TCPServer( [&](std::string const& request, std::string& response) {

    // the request sent by the client to the server
    std::cout << "request: " << request << std::endl;

   // Split the request into different requests:
   // Request can be find and print a multimedia object
   // Or play a multimedia object
   // Or create a multimedia object
   // Or find and print a group
   // And create a group

    /*using GPM = std::shared_ptr<Multimedia>;
    using GPP = std::shared_ptr<GROUPE>;
    using Dictm = std::map<string, GPM>;
    using Dictp = std::map<string, GPP>;
    Dictm dm;
    Dictp dp;
    MAKER *maker=new MAKER(dm,dp);*/

    //1- Create a photo object
    string action{};
    string nom{};
    string substrTest{};
    size_t delimiter = request.find(" ");
    

    //Now I will compare my action to the action part of my request
    substrTest = request.substr(0,delimiter);
    nom = request.substr(delimiter +1);

    //If request is to create a photo
    const char * crt_p = "create_photo";
    std::string create_photo = crt_p;

    if(substrTest == create_photo ){
        shared_ptr<Photo> p1;
        p1=maker->create_photo(nom);
        p1->set_name(nom);
        p1->set_path("~/Downloads/");
        p1->set_lat(0.5);
        p1->set_long(0.5);
        //print info of the photo(optional)
        maker->find_and_print_multimedia(nom);
        //print the photo(optional)
        maker->display_maker_multimedia(nom);
    }

    //If request is to create a video
    const char * crt_v = "create_video";
    std::string create_video = crt_v;

    if(substrTest==create_video){
        shared_ptr<Video> v1;
        v1=maker->create_video(nom);
        v1->set_name(nom);
        v1->set_path("~/Downloads/");
        v1->set_duree(10);
    }

    //If request is to create a film
    const char * crt_f = "create_film";
    std::string create_film = crt_f;

    if(substrTest==create_film){
        shared_ptr<Film> f1;
        f1=maker->create_film(nom);
        f1->set_name(nom);
        f1->set_path("~/Downloads/");
        f1->set_duree(10);
        f1->set_nbr(10);
        f1->set_chap(10);
    }
    //If request is to find and print a multimedia
    const char * f_a_print = "find_and_print";
    std::string find_and_print = f_a_print;

    if(substrTest== find_and_print){
        maker->find_and_print_multimedia(nom);
    }

    //If request is to play a multimedia
    const char * pl = "play";
    std::string play = pl;

    if(substrTest==play){
        maker->display_maker_multimedia(nom);
    }
    // If request is to create a group
    const char * c_group = "create_group";
    std::string create_group = c_group;

    if(substrTest==create_group){
        
        g1=maker->create_groupe(nom);
    }
    //If request is to add a photo to group
    const char * add_p_group = "add_photo_to_group";
    std::string add_photo_to_group = add_p_group;
    
    if(substrTest==add_photo_to_group){
  
        g1->push_back(shared_ptr<Photo>(new Photo(nom, "~/Downloads/",0.5,0.5)));
    }
    //If request is to add a video to group
    const char * add_v_groupe = "add_video_to_group";
    std::string add_video_to_group = add_v_groupe;

    if(substrTest==add_video_to_group){
        shared_ptr<GROUPE> g1;
        g1->push_back(shared_ptr<Video>(new Video(nom, "~/Downloads/",10)));
    }
     //If request is to find and print a group
    const char * f_and_p_group = "find_and_print_group";
    std::string find_and_print_group = f_and_p_group;

    if(substrTest==find_and_print_group){
        maker->find_and_print_groupe(nom);
    }
    
    // the response that the server sends back to the client
    response = "RECEIVED: " + request;

    // return false would close the connecytion with the client
    return true;
  });


  // lance la boucle infinie du serveur
  std::cout << "Starting Server on port " << PORT << std::endl;

  int status = server->run(PORT);

/************************** Dans le serveur *********************************


************************************************************/
  // en cas d'erreur
  if (status < 0) {
    std::cerr << "Could not start Server on port " << PORT << std::endl;
    return 1;
  }


//Sérialisation
    Photo* p1(new Photo("logo-2.png", "~/Downloads/",0.5,0.5));
    Photo* p6(new Photo("logo-3.png", "~/Downloads/",0.6,0.6));
    Video* v1(new Video("cvstandard", "~/Downloads/",10));
    Photo* p2(new Photo("Photo_cv.JPG", "~/Downloads/",0.5,0.5));
    Photo* p3(new Photo("logo-2.png", "~/Downloads/",0.5,0.5));
    ofstream f;
    p1->write(f);
    p2->write(f);
    p3->write(f);
    p6->write(f);
    v1->write(f);
    ifstream f1;
    
    p1->read(f1);
    v1->read(f1);
  return 0;
}