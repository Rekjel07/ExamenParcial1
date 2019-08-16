#include <iostream>
using namespace std;

class Cadena{
    

    public:
        Cadena(const char*);
        Cadena(void);
        
        Cadena(const Cadena &other){
            copyFrom(other);
        };

        friend ostream& operator<<(ostream &out,const Cadena &other);

        Cadena operator+(const Cadena &other);
        int strCmp(const Cadena &other);

        Cadena substr(int pos, int length);


    private:
        char *cadena;
        int longitud;

        void copyFrom(const Cadena &other);
};
