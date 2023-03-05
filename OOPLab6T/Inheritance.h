#pragma once
#include <iostream>

class base {
protected:
	float x;
public:

	base() {
		std::cout << "base constructor called\n";
	}
	~base() {
		std::cout << "base destructor called\n";
	}

	virtual void printVirtual() {
		std::cout << "Base x : " << x << '\n';
	}
	virtual void setVirtual(float val) {
		x = val;
	}
};







class leftFirstVirutal : virtual public base{
protected:
	float lfVx;
public:
	leftFirstVirutal() {
		std::cout << "leftFirstVirutal constructor called\n";
	}
	~leftFirstVirutal() {
		std::cout << "leftFirstVirutal destructor called\n";
	}

	virtual void printVirtual() {
		std::cout << "leftFirstVirutal x : " << x << '\n';
		std::cout << "leftFirstVirutal lfVx : " << lfVx << '\n';
	}
	virtual void setVirtual(float val) {
		x = val;
		lfVx = val;
	}
};


class leftSecondVirtual : virtual public leftFirstVirutal {
protected:
	float lsVx;
public:
	leftSecondVirtual() {
		std::cout << "leftSecondVirtual constructor called\n";
	}
	~leftSecondVirtual() {
		std::cout << "leftSecondVirtual destructor called\n";
	}

	virtual void printVirtual() {
		std::cout << "leftFirstVirutal x : " << x << '\n';
		std::cout << "leftFirstVirutal lfVx : " << lfVx << '\n';
		std::cout << "leftSecondVirtual lsVx : " << lsVx << '\n';
	}
	virtual void setVirtual(float val) {
		x = val;
		lfVx = val;
		lsVx = val;
	}
};










class rightFirst : virtual public base {
protected:
	float rFx;
public:
	rightFirst() {
		std::cout << "rightFirst constructor called\n";
	}
	~rightFirst() {
		std::cout << "rightFirst destructor called\n";
	}


	void print() {
		std::cout << "rightFirst x : " << x << '\n';
		std::cout << "rightFirst rFx : " << rFx << '\n';
	}
	void set(float val) {
		x = val;
		rFx = val;
	}
};


class rightSecond : virtual public rightFirst {
protected:
	float rsX;
public:
	rightSecond() {
		std::cout << "rightSecond constructor called\n";
	}
	~rightSecond() {
		std::cout << "rightSecond destructor called\n";
	}


	void print() {
		std::cout << "rightFirst x : " << x << '\n';
		std::cout << "rightFirst rFx : " << rFx << '\n';
		std::cout << "rightSecond rsX : " << rsX << '\n';
	}
	void set(float val) {
		x = val;
		rsX = val;
		rFx = val;
	}
};




class allInOne : public leftSecondVirtual, rightSecond {
	float aX;
public:
	allInOne() {
		std::cout << "allInOne constructor called\n";
	}
	~allInOne() {
		std::cout << "allInOne destructor called\n";
	}


	virtual void print() {
		std::cout << "allInOne x : " << x << '\n';
	}
	void set(float val) {;
		x = val;
		rFx = val;
		rsX = val;
		aX = val;
	}
};