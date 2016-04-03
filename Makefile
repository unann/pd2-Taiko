all: Sudoku.o giveQuestion.cpp solve.coo
	g++ -o giveQuestion giveQuestion.cpp Sudoku.o
	g++ -o solve solve.cpp Sudoku.o

Sudoku.o: Sudoku.cpp Sudoku.h
	g++ -c Sudoku.cpp -o Sudoku.o
