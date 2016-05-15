#ifndef SOLVE_H
#define SOLVE_H
#include <iostream>

using namespace std;

class solve
{
	    public:
			        solve();
					        void setBoard(int row,int col,int num);
							        int getBoard(int row, int col);
									        bool tursh();
											    
											    private:
											        bool debug;
													        void printNum(int row,int col);
															        bool test(int row,int col);
																	        bool tstNum(int row, int col);/*setlesen hariugaa nohtsold n taarch bga esehiig shalgana*/
friend class Sudoku;
};


#endif
