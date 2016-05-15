#ifndef PLAYER_H
#define PLAYER_H
#include <QGraphicsPixmapItem>
#include <QObject>

class player: public QObject, public QGraphicsPixmapItem{
	    Q_OBJECT
	public:
			    void keyPressEvent(QKeyEvent *event);
				   // void keyPressEvent(QKeyEvent *event2);
					
					public slots:
					    void spawn();
					        void spawn2();
					
					        };
					
					        #endif // PLAYER_H
					        
