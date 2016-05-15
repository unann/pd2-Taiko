#include "drum.h"
#include <QGraphicsScene>
#include <QTimer>
#include <QList>
#include <stdlib.h> //rand()
#include "togloom.h"



extern Togloom *togloom;

Drum::Drum(QGraphicsItem *parent): QObject(), QGraphicsPixmapItem(parent){
	    //set random y position
		    //int random_number=rand()%100;
		        setPos(800,150);
		
		            //drew the rect
		                setPixmap(QPixmap(":/images/red.png"));
		                    //connect a timer to move()
		                        QTimer *timer= new QTimer(this);
		                            connect(timer,SIGNAL(timeout()),this,SLOT(move()));
		                                timer->start(rand()%20+10);
		
		                                }
		
		                                void Drum::move()
		                                {
		                                    //move drum from right to the left
		                                        setPos(x()-rand()%5+1,y());
		
		
		                                            if (pos().x()<0){
		                                                    //decreasing life
		                                                            togloom->life->decrease();
		                                                                    scene()->removeItem(this);
		                                                                            delete this;
		                                                                                }
		
		                                                                                }
		
		
