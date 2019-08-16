#include "Cadena.h"
#include <cstring>
using namespace std;

Cadena::Cadena(void){
    cadena=new char[1];
    strcpy(cadena,"");
}
void Cadena::copyFrom(const Cadena &other){
    longitud=other.longitud;
    cadena=new char[longitud];
    strcpy(cadena,other.cadena);

}
int Cadena::strCmp(const Cadena &other){
    for (int i = 0; i < longitud; i++)
    {
        if(cadena[i]!=other.cadena[i]){
            if(cadena[i]<other.cadena[i]){
                return -1;
            }
            else if(cadena[i]>other.cadena[i]){
                return 1;
            }
        }else if(cadena[i]==other.cadena[i && i==longitud-1]){
            return 0;
        }
    }
    
}
Cadena Cadena::substr(int pos, int length){
    Cadena c;
    int nuevo=0;
    c.longitud=length;
    for (int i = pos; i < (pos+length); i++)
    {
        c.cadena[nuevo]=cadena[i];
        if(nuevo<length){
            nuevo++;
        }
        
        
    }
    return c;
}

Cadena::Cadena(const char* cad){
    cadena=new char[strlen(cad)];
    strcpy(cadena,cad);
}

ostream& operator<<(ostream& out,const Cadena &other){
    out<< other.cadena;
    return out;
}

Cadena Cadena::operator+(const Cadena &other){
    Cadena c;
    c=strcat(cadena,other.cadena);
    return c;
}