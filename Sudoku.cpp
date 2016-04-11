#include "Sudoku.h"
#include<cstdlib>
#include<ctime>
#include<iostream>
using namespace std;
Sudoku::Sudoku()
{
		debug=false;/*ene bol debug-g true bolgoj setlej bga heseg*/
		    /*odoo boarden deerhee initialize hiij ogno*/
		    for(int c=0;c<9;c++){
				        for(int r=0;r<9;r++){
							            board[r][c]=0;
										        }
						    }
			    for(int c=0;c<9;c++){
					        for(int r=0;r<9;r++){
								            if (board[r][c]==0){
												                cout<<"0";
																            }else{
																				                cout<<"\t"<<board[r][c]<<"\t";//eniigee constructor deeree hiij bno
																								            }
											        }
							    }

}
void Sudoku::giveQuestion()/*give func-aa printlehiin tuld*/
{
	    debug=false;/*ene bol debug-g true bolgoj setlej bga heseg*/
		    /*odoo boarden deerhee initialize hiij ogno*/
		    for(int c=0;c<9;c++){
				        for(int r=0;r<9;r++){
							            board[r][c]=0;
										        }
						    }
			    for(int c=0;c<9;c++){
					        for(int r=0;r<9;r++){
								            if (board[r][c]==0){
												                cout<<"0";
																            }else{
																				                cout<<"\t"<<board[r][c]<<"\t";//eniigee constructor deeree hiij bno
																								            }
											        }
							    }
					
}
void Sudoku::print(){
		for(int row=0;row<9;row++){
					for(int col=0;col<9;col++){
									if(board[row][col]!=0){
														cout<<"1"<<"\n"<<board[row][col]<<endl;
																	}else{
																						cout<<"0"<<endl;
																									}
											}
						}
}
/*void giveQuestion(){
 * 	for(int row=0;row<9;row++){
 * 			if(row%3==0){
 * 						cout<<""
 * 								}
 * 									}
 * 									}*/
void Sudoku::readIn(){
		for(int i=0; i<9; ++i)
					for(int j=0; j<9; ++j){
									int tmp; cin >> tmp;
												readIn(i,j,tmp);
														}
}

/*za odoo taah utgaa setletsgeey*/
void Sudoku::readIn(int row,int col,int num){
		for(row=0;row<9;row++){
					for(col=0;col<9;col++){
									cout<<"toogoo oruul"<<endl;
												cin>>board[row][col];
															num=board[row][col];
																	}
						}
		    
			
}
/*ene hesegtee bi chen ttasan hariugaa solvelj bgaad solvelsen bol retrun true gene*/
bool Sudoku::solve(){
	    return solve(0,0);
}
/*turshij bga hariugaa boardendeeree oruulnaa*/
int Sudoku::getBoard(int row, int col){
	    return board[row][col];
}

/*odoo end ogson zuiliigee bvh utguudiig n neg negeer n shalgaj avna*/
bool Sudoku::solve(int row, int col){
	    if (board[row][col]!=0){
			            /*odoo end deerh utga maan negent l 0-tei tentsehgv bgam chen ene too shaardlagad niitsej bga esehiig n shalgii*/
			        if (tstNum(row, col)){
						            if(row==8&&col==8){
										                return true;/*hamgiin etssiinh n bsan uchir solve-legdsen gej vzeed true-g butsaaj bna*/
														            }
									int u=row+1;
									            if(u>=9){
													                u=0;
																	                col++;
																					            }
												            return solve(u,col);
															        }
					        else{
								            return false;
											        }
							    }
		    /*za odoo utga turshij bga bol odoo end utga bhgvm chen taarah hvrtel n hiigeel bna*/
		    for(int num=1;num<11;num++){
				        readIn(row,col,num);
						        if(tstNum(row,col)){
									            if(row==8&&col==8){
													                return true;
																	            }
												int u=row+1;
												            if(u>=9){
																                u=0;
																				                col++;
																								            }
															            /*odoo eniigee dahin solvelegdsen eseiig shalgaad solvesen bval return true gey*/
															            if(solve(u,col)){
																			                return true;
																							            }
																		        }
								    }
			    board[row][col]=0;/*ogson utga chen 0 uchir return false bno*/
				    return false;
						

}

/*toogoo turshii end bid davhtsaj bga too bga esehiig shalgan*/
bool Sudoku::tstNum(int row, int col){
	    int num=board[row][col];
		    printNum(row,col);
			    for(int testx=0;testx<=8;testx++){
					        if((board[testx][col])==row){/*herev deeshee tiisheegeedeh tootoi zorchildoj bnu*/
								            return false;
											            break;
														        }
							        if(testx==row){
										            continue;
													        }

									    }
				    for(int testy;testy<=8;testy++){
						        if((board[row][testy])==col){/*ene n hajuu tiisheegee*/
									            return false;
												            break;
															        }
								        if(testy==col){
											            continue;
														        }
										    }
					    /*za odoo moroo shalgatsan odoo haren neg 3x3 nvdendee davhtssan too bga esehiig shalgii*/
					        for(int testy=(col/3)*3;testy<((col/3)*3)+3;testy++){
								            for(int testx=(row/3)*3;testx<((row/3)*3)+3;testx++){
												                if(testy==col&&testx==row){
																	                    continue;
																						                }
																                if(board[testx][testy]==num){
																					                    return false;
																										                }
																				            }
											        }
							        return true;
}
/*odoo turshij bga toogoo(Num)haruulii*/
void Sudoku::printNum(int row, int col){
	    if(debug){
			        for (int i=0;i<81;i++){
						            cout<<"\t"<<endl;
									        }
					        cout<<"tst hiij bga too:"<<board[row][col]<<"nvdnii too"<<row<<col<<endl;

							    }
}
void Sudoku::changeNum(int a, int b){
	cout<<"Number to swap: "<<endl;
	cin>>a;
		cout<<"Number to swap with: "<<endl;
	cin>>b;
	int board[9][9];
		for(int row=0;row<9;row++){
					for(int col=0;col<9;col++){
									if(board[row][col]==a){
														if(board[row][col]==b){
																				int temp;
																									a=temp;
																														a=b;
																																			b=temp;
																																							}
																	}else{
																					break;
																								}
											}
						}
}
void Sudoku::changeRow(int a, int b){
		cout<<"rows to be changed(0~2):  "<<endl;
			cin>>a;
				cout<<"rows to be changed with(0~2):  "<<endl;
					cin>>b;
						int board[9][9];
							for(int row=0;row<9;row++){
										for(int col=0;col<9;col++){
														for(int i=0;i<3;i++){
																			if(a==i&&b==i){
																									break;
																													}else{
																																			for(int n=a*3;n<a*3;n++){
																																										for(int m=b*3;m<b*3;m++){
																																																		swap(board[n][col],board[m][col]);
																																																								}
																																															}
																																							}
																						}
																}
											}
}
	
void Sudoku::changeCol(int a, int b){
	cout<<"col to be changed(0~2):  "<<endl;
	cin>>a;
	cout<<"col to be changed with(0~2):  "<<endl;
	cin>>b;
	int board[9][9];
	for(int row=0;row<9;row++){
			for(int col=0;col<9;col++){
						for(int i=0;i<3;i++){
										if(a==i&&b==i){
															break;
																		}else{
																							for(int n=a*3;n<a*3;n++){
																													for(int m=b*3;m<b*3;m++){
																																				swap(board[row][n],board[row][m]);
																																									}
																																	}
																										}
												}
							}
			}
}	
void Sudoku::rotate(int n){
		int board[9][9];
			cout<<"enter n: "<<endl;
				for(n=0;n<=100;n++){
							for(int k=0;k<9;k++){
											for(int m=0;m<9;m++){
																int temp;
																				board[k][m]=temp;
																								board[k][m]=board[m][n-k-1];/*0,0 => 0,8*/ 
																												board[m][n-k-1]=temp;
																															}
													}
								}

}
void Sudoku::flip(int n){
		int board[9][9];
			cin>>n;
				for(int i=0;i<9;i++){
							for(int m=0;m<9;m++){
											if(n==0){
																int temp;
																				board[i][m]=temp;
																								board[i][m]=board[n-i-1][m];/*0,0 => 8,0; 1,0 =>7,0 */
																												board[n-i-1][m]=temp;
																															}
														if(n==1){
																			int temp;
																							board[i][m]=temp;
																											board[i][m]=board[i][n-m-1]; /*0,0 => 0,8; 1,0 =>1,7 */
																															board[i][n-m-1]=temp;
																																		}
																}
								}
					
}
void Sudoku::transform()
{
	    readIn();
		    change();
			    printOut(false);

}
void Sudoku::change(){
		srand(time(NULL));
			changeNum(rand()%9+1,rand()%9+1);
				changeRow(rand()%3, rand()%3);
					changeCol(rand()%3, rand()%3);
						rotate(rand()%101);
							flip(rand()%2);
}
void Sudoku::printOut(bool isAns){
	
		if(!isAns)
					for(int n=0;n<9; ++n){
						for(int m=0;m<9;++m){
									cout<<((board[n][m]+1)%9==0? board[n][m]:' ');
						}
					}else{
						for(int n=0;n<9; ++n){
											for(int m=0;m<9;++m){
																cout<<((board[n][m]+1)%9==0? board[n][m]:' ');
																			}
						}
					}
			    
}
