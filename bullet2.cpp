#include "bullet2.h"
#include <QTimer>

#include<QGraphicsScene>
#include <QList> // nogoo morgolddog funkts

#include <typeinfo>
#include "togloom.h"
#include "drum2.h"


//end togloom gesen maindeh global objectiig hereglej bna
extern Togloom *togloom;

bullet2::bullet2(QGraphicsItem *parent): QObject(), QGraphicsRectItem(parent){

	    setRect(0,0,10,5);

		    //connect a timer to move()
			    QTimer * timer = new QTimer();
			        connect(timer,SIGNAL(timeout()),this,SLOT(move()));
			
			            timer->start(50);
			
			            }
			
			            void bullet2::move(){
//			                kill (Qclassiin item bolgon ooriin gesen collide gesen member functiontai baidag
			                    QList<QGraphicsItem *>colliding_items=collidingItems();
			                        for(int i=0, n=colliding_items.size(); i<n; ++i){
			                                 if(typeid(Drum2) == typeid(*(colliding_items[i])))
			                                         {
			                                                     //increase the score (game-iin objectruu nevtreh heregtei yagaad gevel game objected bidnii increase hiih geed bgaa score maan bgaa bolhoor)
			                                                                 togloom->score->increase();
			
			                                                                             //sum bolon drum hoyriig ustgana
			                                                                                         scene()->removeItem(colliding_items[i]);
			                                                                                                     scene()->removeItem(this);
			                                                                                                                 delete colliding_items[i];
			                                                                                                                             delete this;
			                                                                                                                                         return;//end yaagaad return bga ve gevel ende sum ed naraa ustgachaad yaj dahiad sumaa gargahiin tiimees return hiij dooshoogooh functionluu ochij chadaj bnaa gesen vg!
			                                                                                                                                                 }
			                                                                                                                                                 }
			
			
			                                                                                                                                                     move bullet to ???
			                                                                                                                                                         setPos(x()+5,y());
			                                                                                                                                                             //sum n waste memory hiigeed bga bolhoor  sumiig delgetsees garanguut n ustgadag baiy
			                                                                                                                                                                 if(pos().x()-10>180){
			                                                                                                                                                                         scene()->removeItem(this);
			                                                                                                                                                                                 delete this;
			                                                                                                                                                                                     }
			
			                                                                                                                                                                                     }
			                                                                                                                                                                                     
