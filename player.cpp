#include "player.h"
#include <QGraphicsScene>
#include <QKeyEvent>
#include "bullet.h"
#include "drum.h"
#include "drum2.h"
#include "bullet2.h"
#include "ongor.h"
//#include "togloom.h"

//extern Togloom *togloom;


void player::keyPressEvent(QKeyEvent *event)
{
    if(event->key() == Qt::Key_Left){
            //create bullet
                    bullet * sum = new bullet();
                            sum->setPos(x(),y());
                                    scene()->addItem(sum);
                                        }else  if(event->key() == Qt::Key_Right){
                                                //create bullet
                                                        bullet2 * sum = new bullet2();
                                                                sum->setPos(x(),y());
                                                                        scene()->addItem(sum);
                                                                            }
                                                                            }


                                                                            void player::spawn()
                                                                            {
                                                                                // create a drum
                                                                                    Drum *drum = new Drum();
                                                                                        //QTimer *timer1;
                                                                                            //connect(timer1, SIGNAL(timeout()), this, SLOT(Ongor::start()));
                                                                                                //timer1->start(1000000);
                                                                                                    scene()->addItem(drum);


                                                                                                    }
                                                                                                    void player::spawn2(){
                                                                                                        //craete a drum2
                                                                                                            Drum2 *drum2 = new Drum2();
                                                                                                                scene()->addItem(drum2);
                                                                                                                }
                                                                                                                
