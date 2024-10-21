# Target to compile the object file
fileName: fileName.o
	g++ fileName.o -o fileName.exe

# Target to compile the C++ program
fileName.o: fileName.cpp
	g++ -c fileName.cpp -o fileName.o

# Target to run the program (interactively)
run: fileName
	./fileName.exe

# Target to compile the object Test file
fileNameTest: fileNameTest.o
	g++ fileNameTest.o -o fileNameTest.exe

# Target to compile the C++ Test program
fileNameTest.o: fileNameTest.cpp
	g++ -c fileNameTest.cpp -o fileNameTest.o

# Target to run the Test program
test: fileNameTest
	./fileNameTest.exe

# Target to clean up compiled files
clean:
	rm -f fileName.o fileNameTest.o fileName.exe fileNameTest.exe
