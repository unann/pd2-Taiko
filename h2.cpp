#include<iostream>
#include<string>
#include<fstream>
#include<cstdlib>
    using namespace std;
	     class BMI{
			         public:
						               BMI(){
										                       Newheight=0;
															                       Newweight=0;
																				                 }
									                  BMI(string name, int height, double weight){
														                      Newname=name;
																			                       Newheight=height;
																								                         Newweight=weight;
																														                     }
													                 ~BMI(){

																		                      }

																	               /*     void setName(string name){
																					*                            Newname=name;
																					*                                               }
																					*                                                                  void setHeight(int height){
																					*                                                                                         Newheight=height;
																					*                                                                                                            }
																					*                                                                                                                               void setWeight(double weight){
																					*                                                                                                                                                      Newweight=weight;
																					*                                                                                                                                                                         }
																					*                                                                                                                                                                                            double calBMI(){
																					*                                                                                                                                                                                                                   return (Newweight/(Newheight * Newheight));
																					*                                                                                                                                                                                                                                     }
																					*                                                                                                                                                                                                                                     */

																	                  string getName() const{
																						                        return Newname;
																												                       }

																					                    int getHeight() const{
																											                       return Newheight;
																																                           }
																										                   double getWeight(){
																															                           return Newweight;
																																					                            }



																														                    void setName(string name){
																																				                       Newname=name;
																																									                      }
																																			                   void setHeight(int height){
																																								                          Newheight=height;
																																														                     }
																																							                      void setWeight(double weight){
																																													                         Newweight=weight;
																																																			                    }
																																												                     double calBMI(){
																																																		                        return (Newweight/(Newheight * Newheight));
																																																								                  }



																																																	                     private:
																																																	                     string Newname;
																																																						                      int Newheight;
																																																											                        double Newweight;
																																																																	                       };
   int main(){
	           string name;
			            int height;
						          double weight;
								   ofstream outFile("outfile",ios::out);

								               if(!outFile){
												                    cerr<<"failed opening"<<endl;
																	                  exit(1);
																					                     }
											               cout<<"enter Name Height Weight each line.\n"

															                   <<"EOF to finish.\n"<<"?";
														                outFile<<"name\theight\tweight\tBMI\n";
																		               while(cin>>name>>height>>weight){
																						                      //MI outfile;
																											  //  //outfile.getName();
																											  //                      outFile<<name<<"t"<<height<<"t"<<weight<<"t"<<(weight/(height * height))<< endl;
																											  //                                      cout<<"?";
																											  //                                              }
																											  //                                                          cout<<endl;
																											  //                                                              return 0;
																											  //                                                                              }
																											  //
