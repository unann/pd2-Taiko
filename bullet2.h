#ifndef BULLET2_H
#define BULLET2_H


#include <QGraphicsRectItem>
#include <QGraphicsItem>
#include <QObject>

class bullet2: public QObject,public QGraphicsRectItem{
	    Q_OBJECT
	public:
			    bullet2(QGraphicsItem *parent=0);
				public slots:
					    void move();
};

#endif // BULLET2_H

