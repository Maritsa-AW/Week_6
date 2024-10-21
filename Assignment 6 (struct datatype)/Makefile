# Target to compile the object file
Examresults: Examresults.o
	g++ Examresults.o -o Examresults.exe

# Target to compile the C++ program
Examresults.o: Examresults.cpp
	g++ -c Examresults.cpp -o Examresults.o

# Target to run the program (interactively)
run: Examresults
	./Examresults.exe

# Target to compile the object Test file
ExamresultsTest: ExamresultsTest.o
	g++ ExamresultsTest.o -o ExamresultsTest.exe

# Target to compile the C++ Test program
ExamresultsTest.o: ExamresultsTest.cpp
	g++ -c ExamresultsTest.cpp -o ExamresultsTest.o

# Target to run the Test program
test: ExamresultsTest
	./ExamresultsTest.exe

# Target to clean up compiled files
clean:
	rm -f Examresults.o ExamresultsTest.o Examresults.exe ExamresultsTest.exe
