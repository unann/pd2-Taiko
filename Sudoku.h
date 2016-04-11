#ifndef SUDOKU_H
#define SUDOKU_H
#include <iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

class Sudoku
{
	    public:
			        Sudoku();
							void giveQuestion();
									void readIn();
									        void readIn(int row,int col,int num);
											        int getBoard(int row, int col);
													        bool solve();
																	/*bool solve(int row, int col);*/
																	/*bool tstNum(int row, int col);*/
																	/*void printNum(int row, int col);*/
																	void changeNum(int a, int b);
																			void changeRow(int a, int b);
																					void changeCol(int a, int b);
																							void rotate(int n);
																									void flip(int n);
																											void transform();

																																	
																															    private:
																																	 int board[9][9];
																																	 		bool debug;
																																			void print();
																																					void printNum(int row,int col);
																																					        bool solve(int row,int col);
																																							        bool tstNum(int row, int col);
																																									void change();
																																											void printOut(bool isAns);
};
#endif
