#include<iostream>
using namespace std;
class collage{
    public:
    string name;
    int rank;
    char tier;
    public:
       string setcollage(string collage){
            this->name=collage;
            return collage;
        }
    void where(){
        cout<<"U r in collage";
    }
  
};
  class branch: public collage{
    public:
        string branch;
        int setbranch(string branch){
            this->branch=branch;
        }
        public:
        void Branch(){
            cout<<"U r in branch ";
        }
    };
    class year:public collage{
        public:
        int year;
        int setyear(int year){
            this->year=year;
            return year;
        }
    };
int main() {
    collage kota;
    kota.name="iiit";
    kota.setcollage('iit');
    return 0;
}