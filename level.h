#ifndef LEVEL_H
#define LEVEL_H


#include <QGraphicsRectItem>
#include <QGraphicsSceneMouseEvent>

class Level: public QObject,public QGraphicsRectItem{
	    Q_OBJECT
	public:
			    Level(QString name, QGraphicsItem *parent=NULL);
				    //events
				    void mousePressEvent(QGraphicsSceneMouseEvent *event);
					        void hoverEnterEvent(QGraphicsSceneHoverEvent *event);
					            void hoverLeaveEvent(QGraphicsSceneHoverEvent *event);
					
					            signals:
					                void clicked();
					
					                private:
					                    QGraphicsTextItem *ugs;
					
					                    };
					
					
					                    #endif // LEVEL_H
					                    
