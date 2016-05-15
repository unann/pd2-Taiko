#ifndef TOGLOOM_H
#define TOGLOOM_H

#include <QGraphicsScene>
#include "player.h"
#include <QGraphicsView>
#include <QWidget>
#include "score.h"
#include "life.h"
#include "ongor.h"




class Togloom: public QGraphicsView{
	    Q_OBJECT
	public:
			    Togloom(QWidget *parent=0);

				    //public methods
					
					
					    void displayMainMenu();
					        void gameOver();
					
					
					            QGraphicsScene *scene;
					                player *toglogch;
					                    Score *score;
					                        Life *life;
					
					                           // Ongor *this;
					
					
					
					                           public slots:
					                               void Shat();
					
					                                   void ehlii();
					                                       void dund();
					                                           void hvnd();
					                                               void harah();
					                                                   void rePlay();
					                                                       void pause();
					
					
					                                                           //void gameOver();
					                                                           private:
					                                                               bool isStarted;
					                                                                       bool isPaused;
					
					
					                                                                       };
					
					                                                                       #endif // TOGLOOM_H
		
