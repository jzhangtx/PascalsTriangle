#I cannot make the Makefile work sigh :(, I guess it's because of the space in the file name
# However, open this folder with VSCode, we can run or debug it in the VSCode
Pascal\'s\ Triangle: Pascal\'s\ Triangle.o
	g++ -g -o Pascal\'s\ Triangle.exe Pascal\'s\ Triangle.o -pthread    

Pascal\'s\ Triangle.o: Pascal\'s\ Triangle/Pascal\'s\ Triangle.cpp
	g++ -g  -c -pthread Pascal\'s\ Triangle/Pascal\'s\ Triangle.cpp
