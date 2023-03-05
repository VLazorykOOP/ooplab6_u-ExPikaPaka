#pragma once

class Figure {
protected:
	float psquare;
public:
	virtual float square() {
		return psquare;
	}
	
	virtual void setSquare(float x) {
		psquare = x;
	}
	
};



class StraightTriangle : public Figure {
public:
	virtual float square() {
		return psquare;
	}

	virtual void setSquare(float x) {
		psquare = x;
	}
};




class Circle : public Figure {
public:
	virtual float square() {
		return psquare;
	}

	virtual void setSquare(float x) {
		psquare = x;
	}
};


class Rectangle : public Figure {
public:
	virtual float square() {
		return psquare;
	}

	virtual void setSquare(float x) {
		psquare = x;
	}
};




class Trapezoid : public Figure {
public:
	virtual float square() {
		return psquare;
	}

	virtual void setSquare(float x) {
		psquare = x;
	}
};

