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
									        bool solve();
											    
											    private:
											        bool debug;
													        void printNum(innt row,int col);
															        bool solve(int row,int col);
																	        bool tstNum(int row, int col);//setlesen hariugaa nohtsold n taarch bga esehiig shalgana
};


