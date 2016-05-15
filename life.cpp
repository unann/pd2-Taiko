#include "life.h"
#include <QFont>
#include "score.h"

#include "togloom.h"

extern Togloom *togloom;
Life::Life(QGraphicsItem *parent): QGraphicsTextItem(parent){
	    //init life
		    life=3;
		
		        //delgetsen deer garch ireh
		            setPlainText(QString("Life: ")+QString::number(life)); //Life:3
		                setDefaultTextColor(Qt::red);
		                    setFont(QFont("times",18));
		
		                    }
		
		                    void Life::decrease()
		                    {
		                        getLife();
		                            togloom->score->getScore();
		                                if(life<0){
		                                        getLife();
		                                                togloom->score->getScore();
		                                                        togloom->gameOver();
		                                                            }else{
		                                                                    getLife();
		                                                                        life--;
		                                                                            }
		                                                                                setPlainText(QString("Life: ")+QString::number(life)); //Life:1
		                                                                                    getLife();
		                                                                                        togloom->score->getScore();
		
		
		                                                                                        }
		
		                                                                                        int Life::getLife()
		                                                                                        {
		                                                                                            int a=life;
		
		                                                                                                return a;
		                                                                                                }
		
		
