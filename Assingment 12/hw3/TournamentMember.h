#ifndef TOURNAMENTMEMBER_H
#define TOURNAMENTMEMBER_H
#include <iostream>

using namespace std;

class TournamentMember{
    //protected and public data
    protected:
        char name[36];
        char lastname[36];
        char date[11];
        double height;
        int age;
        static char location[15];

    public:
        TournamentMember();
        //used with pointer since it's an array with elements
        TournamentMember(const char*,const char*,const char*,double,int);
        TournamentMember(const TournamentMember&);
        ~TournamentMember();
        //setters
        void setName(const char* newName);
        void setLastname(const char* newLastname);
        void setDate(const char* newDate);
        void setHeight(double newHeight);
        void setAge(int newAge);

        //getters
        //since when we return them,they represent like string
        //we use string as a parameter for getters
        string getName();
        string getLastname();
        string getDate();
        double getheight();
        int getAge();

        //The print func and func for the location
        void print();
        static void LocationChange(const char*);
};
//inheritance class
class Player:public TournamentMember{
    protected:
        int number;
        string pos;
        int goal;
        string LOR;
    public:
        Player(const char*,const char*,const char*,double,int,int,string,int,string);
        Player(const Player&);
        ~Player();
        void setNumber(int newNumber);
        void setPos(string newPos);
        void setLOR(string newLOR);
        void printp();
        int getNumber();
        void GI();
        string getPos();
        string getLOR();
};

        //inline setter and getter methods
        inline void TournamentMember::setName(const char* newName){
            int i;
            for(i=0; i<36; i++){
                name[i]=newName[i];
            }
        }

        inline void TournamentMember::setLastname(const char* newLastname){
            int i;
            for(i=0; i<36; i++){
                lastname[i]=newLastname[i];
            }
        }

        inline void TournamentMember::setDate(const char* newDate){
            int i;
            for(i=0; i<11; i++){
                date[i]=newDate[i];
            }
        }

        inline void TournamentMember::setHeight(double newHeight){
            height=newHeight;
        }

        inline void TournamentMember::setAge(int newAge){
            age=newAge;
        }

        //inline getters
        inline string TournamentMember::getName(){
            return name;
        }

        inline string TournamentMember::getLastname(){
            return lastname;
        }

        inline string TournamentMember::getDate(){
            return date;
        }

        inline double TournamentMember::getheight(){
            return height;
        }

        inline int TournamentMember::getAge(){
            return age;
        }

        //inline setter and getter methods for inheritance class
         inline void Player::setNumber(int newNumber){
            number=newNumber;
        }

         inline void Player::setPos(string newPos){
            pos=newPos;
        }

         inline void Player::setLOR(string newLOR){
            LOR=newLOR;
        }

        inline int Player::getNumber(){
            return number;
        }

         inline string Player::getPos(){
            return pos;
        }

        inline string Player::getLOR(){
            return LOR;
        }

#endif // TOURNAMENTMEMBER_H
