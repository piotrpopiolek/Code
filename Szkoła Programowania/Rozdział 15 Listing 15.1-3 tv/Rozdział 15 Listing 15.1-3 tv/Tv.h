#pragma once
#ifndef TV_H_
#define TV_H_
class Tv
{
public:
	friend class Remote;
	enum { Off, On };
	enum { MinVal, MaxVal = 20 };
	enum { Antenna, Cable };
	enum { TV, DVD };
	Tv(int s = Off, int mc = 125) :state(s), volume(5), maxchannel(mc), channel(2), mode(Cable), input(TV)
	{

	}
	void onoff()
	{
		state = (state == On) ? Off : On;
	}
	bool ison() const
	{
		return state == On;
	}
	bool volup();
	bool voldown();
	void chanup();
	void chandown();
	void set_mode()
	{
		mode = (mode == Antenna) ? Cable : Antenna;
	}
	void set_input()
	{
		input = (input == TV) ? DVD : TV;
	}
	void settings() const;
private:
	int state; //wlaczony lub wylaczony
	int volume; //zakladamy ze mozna glosnosc wyrazic liczba
	int maxchannel; //maksymalna liczba kanalow
	int channel; //aktualnie wlaczony program
	int mode; //antena lub telewizja kablowa
	int input; //telewizja  lub DVD
};
class Remote
{
	int mode; //kontroluje TV lub DVD
public:
	Remote(int m = Tv::TV) :mode(m)
	{

	}
	bool volup(Tv & t)
	{
		return t.volup();
	}
	bool voldown(Tv & t)
	{
		return t.voldown();
	}
	void onoff(Tv & t)
	{
		return t.onoff();
	}
	void chanup(Tv & t)
	{
		return t.chanup();
	}
	void chandown(Tv & t)
	{
		return t.chandown();
	}
	void set_chan(Tv & t,int c)
	{
		t.channel = c;
	}
	void set_mode(Tv & t)
	{
		t.set_mode();
	}
	void set_input(Tv & t)
	{
		t.set_input();
	}
};
#endif // !TV_H_