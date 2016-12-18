#ifndef VECTOR_H_
#define VECTOR_H_
#include<iostream>

namespace VECTOR
{
class Vector
{
public:
    enum Mode {RECT,POL};
    //RECT to wspó³rzêdne kartezianskie, POL to wspolrzedne biegunowe
private:
    double x; //wartosc skladowej poziomej
    double y; //wartosc skladowej pionowej
    double mag; //dlugosc wektora
    double ang; //kierunek wektora(w stopniach)
    Mode mode; //prywatne metody ustawiajace sk³adowe
    void set_mag();
    void set_ang();
    void set_x();
    void set_y();
public:
    Vector();
    Vector(double n1,double n2,Mode form=RECT);
    void reset(double n1,double n2,Mode form=RECT);
    ~Vector();
    double xval() const
    {
        return x;
    }
    double yval() const
    {
        return y;
    }
    double magval() const
    {
        return mag;
    }
    double angval() const
    {
        return ang;
    }
    void polar_mode(); //ustawia tryb na biegunowy (POL)
    void rect_mode(); //ustawia tryb na kartezianksi (RECT)
    //metody przeciazajace operatory
    Vector operator+(const Vector&b)const;
    Vector operator-(const Vector&b)const;
    Vector operator-()const;
    Vector operator*(double n)const;
    operator double();
    operator int();
    //funkcje zaprzyjaznione
    friend Vector operator*(double n, const Vector &a);
    friend std::ostream &
    operator<<(std::ostream&os,const Vector&v);
};
}
#endif // VECTOR_H
