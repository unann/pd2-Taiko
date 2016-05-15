#include <QApplication>
#include "togloom.h"

Togloom *togloom; // pointer to the scene and player (ene bol global object yagaad gevel busad objectuud bas ene objected nevtreh ystoi!!)

int main(int argc, char *argv[])
{
	    QApplication a(argc, argv);
		    togloom= new Togloom();
			    togloom->show();
				    //togloom->ehlii();
					    togloom->displayMainMenu();
					        //togloom->Shat();
					           // togloom->gameOver();
					
					
					
					               return a.exec();
					               }
					               
