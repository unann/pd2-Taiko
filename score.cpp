nclude "score.h"
#include <QFont>
#include "life.h"
#include "togloom.h"

extern Togloom *togloom;

Score::Score(QGraphicsItem *parent):QGraphicsTextItem(parent){
	    //init the score
		    score=0;
		        //draw the text
		            setPlainText(QString("Score: ") + QString::number(score)); // Score:0
		                setDefaultTextColor(Qt::blue);
		                    setFont(QFont("times",18));
		                    }
		
		                    void Score::increase(){
		                        getScore();
		                            togloom->life->getLife();
		                                score++;
		                                    //odoo onoogoo nemegdwlsenee delgetsend update hiij haruulah heregtei
		                                        setPlainText(QString("Score: ") + QString::number(score)); // Score:shine onoo
		                                            getScore();
		                                                togloom->life->getLife();
		                                                }
		
		                                                int Score::getScore(){
		                                                    return score;
		                                                    }
		
