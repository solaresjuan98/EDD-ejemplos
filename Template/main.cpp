#include <iostream>
#include <string.h>
using namespace std;
int suma(int a,int b);
float suma(float a,float b);
double suma(double a,double b);
string suma(string a,string b);
void agregarCoordenadas();
template<typename T >T sumaT(T a,T b){
    return a +b;
}

template<class T>
class Dupla{
private:
    T x;
    T y;
public:
     Dupla(T x=0,T y=0){
        this->x=x;
        this->y=y;
    }

    T getX(){return this->x;}
    T getY(){return this->y;}
};

int main()
{
    cout << suma(10,5)<<endl;
    cout << suma(10.5f,6.0f)<<endl;
    cout<< suma(10.55,6.5)<<endl;
    cout<<suma("hola"," como estas")<<endl;

    cout << sumaT(10,5)<<endl;
    cout << sumaT(10.5f,6.0f)<<endl;
    cout<< sumaT(10.55,6.5)<<endl;
    cout<<sumaT<string>("hola"," como estas")<<endl;
    agregarCoordenadas();
    return 0;
}

int suma(int a,int b){
    return a+b;
}

float suma(float a,float b){
    return a+b;
}
double suma(double a,double b){
    return a+b;
}
string suma(string a,string b){
    return a+b;
}


void agregarCoordenadas(){
    Dupla<int> a(10,20);
    Dupla<string>b("hola ","como estas");
    cout<<a.getX()<<","<<a.getY()<<endl;
    cout<<b.getX()<<","<<b.getY()<<endl;
}

