#ifndef STONEWT_H_
#define STONEWT_H_

class Stonewt
{
    enum Mode{LBS,STN};
    enum {Lbs_per_stn=14}; //liczba funtow na kamien
    int stone; //masa w calych kamieniach
    double pds_left; //reszta w funtach
    double pounds; //masa w funtach
    Mode tryb;
public:
    Stonewt(double lbs,Mode Tryb=LBS);
    Stonewt(int stn, double lbs,Mode Tryb=LBS);
    Stonewt();
    ~Stonewt();
    void Lbs();
    void Stn();
    Stonewt operator+(const Stonewt & ob);
    Stonewt operator-(const Stonewt & ob);
    Stonewt operator*(const Stonewt & ob);
    Stonewt operator*(int n)const;
    friend Stonewt operator*(int n,const Stonewt &a);
    friend std::ostream & operator<<(std::ostream & os, const Stonewt & ob);

};
#endif // STONEWT_H_
