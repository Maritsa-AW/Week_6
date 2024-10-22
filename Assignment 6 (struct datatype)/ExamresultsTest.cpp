#include <iostream>

// Define structure for student data
struct Student{
	std::string Nim;
	float Uts;
	float Uas;
	float avg;
};

// Initialize student data with scores and calculate average
Student myStudent[5] = {
    {"24/PA/2235", 90, 70}, // Data for Student 1
    {"24/PA/2236", 80, 65}, // Data for Student 2
    {"24/PA/2237", 70, 60}, // Data for Student 3
    {"24/PA/2238", 80, 95}, // Data for Student 4
	{"24/PA/2239", 65, 75}, // Data for Student 5
};

// Expected student data for comparison with actual results
Student expectedStudents[5] = {
    {"24/PA/2235", 90, 70, 80.0},    // Expected data for Student 1
    {"24/PA/2236", 80, 65, 72.5},    // Expected data for Student 2
    {"24/PA/2237", 70, 60, 65.0},    // Expected data for Student 1
    {"24/PA/2238", 80, 95, 87.5},    // Expected data for Student 2
	{"24/PA/2239", 65, 75, 70.0},    // Expected data for Student 2
};

int main() {
    std::cout << "\nStudent:\n";
    for (int i = 0; i < 5; i++) {
    	myStudent[i].avg=(myStudent[i].Uts+myStudent[i].Uas)/2.0;
        std::cout << "\nStudent " << i + 1 << ":\n"; // Output student number

        bool isPassed = false; // Default: test is failed
// Validate if actual data matches expected NIM and average score
        if (myStudent[i].Nim == expectedStudents[i].Nim &&
            myStudent[i].avg == expectedStudents[i].avg) {
            isPassed = true; // Mark test as passed if data matches
        }

// Output test result based on the validation
        std::cout << "Test Result: ";
        if (isPassed) {
            std::cout << "Passed" << std::endl; // Output if test is passed
        } else {
            std::cout << "Failed" << std::endl; // Output if test is failed
        }
    }

    return 0; // End of the program
}