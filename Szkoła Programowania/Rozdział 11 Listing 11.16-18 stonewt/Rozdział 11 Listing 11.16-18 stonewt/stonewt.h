#ifndef STONEWT_H_
#define STONEWT_H_

class Stonewt
{
    enum {Lbs_per_stn=14}; //liczba funtow na kamien
    int stone; //masa w calych kamieniach
    double pds_left; //reszta w funtach
    double pounds; //masa w funtach
public:
    Stonewt(double lbs);
    Stonewt(int stn, double lbs);
    Stonewt();
    ~Stonewt();
    void show_lbs() const;
    void show_stn() const;
};
#endif // STONEWT_H_
