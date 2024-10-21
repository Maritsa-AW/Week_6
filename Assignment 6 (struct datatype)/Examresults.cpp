#include <iostream>

// Declare student data
struct Student{
	std::string Nim;
	int Uts;
	int Uas;
	int avg;
};

int main () {
	// Array declaration to store data for up to 50 students
	Student myStudent[50];
	
	// Input the number of students
	int n;
	std::cout << "Enter the number of students: ";
    std::cin >> n;
	std::cout << "========================" << std::endl;
	
	// Input the student data; student number, UTS result and UAS result
	for (int i=0; i<n; i++){
		std::cout << "Student " << i+1 << std::endl;
		std::cout << "Enter student number:";
		std::cin >> myStudent[i].Nim;
		std::cout << "Enter UTS:";
		std::cin >> myStudent[i].Uts;
		std::cout << "Enter UAS:";
		std::cin >> myStudent[i].Uas;
		myStudent[i].avg=(myStudent[i].Uts+myStudent[i].Uas)/2;
	}
	std::cout << "========================" << std::endl;
	// Showing the result of the student data input
	for (int i=0; i<n; i++){
		std::cout << "Student " << i+1 << std::endl;
		std::cout << "Student number: " << myStudent[i].Nim << std::endl;
		std::cout << "UTS: " << myStudent[i].Uts << std::endl;
		std::cout << "UAS: " << myStudent[i].Uas << std::endl;
		std::cout << "Average: " << myStudent[i].avg << std::endl;
	}
	return 0; //end of program
}
