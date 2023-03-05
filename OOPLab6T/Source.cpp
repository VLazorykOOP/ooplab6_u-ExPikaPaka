#include <iostream>
#include "Geometry.h"
#include "Inheritance.h"
#include "StudentFather.h"


void task1() {
	base obase;

	leftFirstVirutal olfv;
	leftSecondVirtual olsv;

	rightFirst orf;
	rightSecond ors;

	allInOne oa;



	obase.setVirtual(0);

	olfv.setVirtual(1);
	olsv.setVirtual(2);

	orf.set(3);
	ors.set(4);

	oa.setVirtual(5);


	std::cout << "\n============== Output ==============\n";
	obase.printVirtual();

	olfv.printVirtual();
	olsv.printVirtual();

	orf.print();
	ors.print();

	oa.printVirtual();
		
	std::cout << "\n============== ====== ==============\n";



	std::cout << "\n============== Object sizes ==============\n";
	std::cout << "Base size : " << sizeof(obase) << '\n';
	std::cout << "leftFirstVirutal size : " << sizeof(olfv) << '\n';
	std::cout << "leftSecondVirtual size : " << sizeof(olsv) << '\n';
	std::cout << "rightFirst size : " << sizeof(orf) << '\n';
	std::cout << "rightSecond size : " << sizeof(ors) << '\n';
	std::cout << "allInOne size : " << sizeof(oa) << '\n';
	std::cout << "\n============== ============ ==============\n\n";
}


void task2() {
	Figure* figPtr[5];

	Figure fig;
	Rectangle rect;
	Circle circ;
	StraightTriangle strian;
	Trapezoid trap;

	fig.setSquare(0);
	rect.setSquare(1);
	circ.setSquare(2);
	strian.setSquare(3);
	trap.setSquare(4);

	figPtr[0] = &fig;
	figPtr[1] = &rect;
	figPtr[2] = &circ;
	figPtr[3] = &strian;
	figPtr[4] = &trap;


	std::cout << "Figure: " << figPtr[0]->square() << "\n" <<
		"Rectangle: " << figPtr[1]->square() << "\n" <<
		"Circle: " << figPtr[2]->square() << "\n" <<
		"StraightTriangle: " << figPtr[3]->square() << "\n" <<
		"Trapezoid: " << figPtr[4]->square() << "\n";
}


void task3() {
	Student student("John", 20, "Computer Science");
	FamilyHead familyHead("Mary", 40, 2);
	StudentFamilyHead studentFamilyHead("Tom", 25, "Mathematics", 1);

	std::cout << student << "\n";
	std::cout << familyHead << "\n";
	std::cout << studentFamilyHead << "\n";

	std::cout << "=====================\n";
	familyHead.PrintInfo();
	std::cout << "\n";
	studentFamilyHead.PrintInfo();
	std::cout << "=====================\n";

	std::cin >> student;
	std::cout << student << "\n";
}



int main() {
	std::string text;
	int choice = 0;
	
	while (1) {
		std::cout << "Enter task num (1-3). 4 to exit:\n";
		std::cin >> text;

		try {
			choice = std::stoi(text);
		}
		catch (std::invalid_argument& e) {
			std::cout << "Wrong input! Try again!\n";
			choice = 0;
		}

		if (choice == 1) {
			task1();
		}
		if (choice == 2) {
			task2();
		}
		if (choice == 3) {
			task3();
		}
		if (choice == 4) {
			exit(0);
		}
	}
	
	return 0;
}