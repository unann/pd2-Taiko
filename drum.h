#ifndef DRUM_H
#define DRUM_H

#include <QGraphicsPixmapItem>
#include <QObject>
#include <QGraphicsItem>

class Drum: public QObject, public QGraphicsPixmapItem{
	    Q_OBJECT
	public:
			    Drum(QGraphicsItem *parent=0);
				public slots:
					    void move();
};

#endif // DRUM_H

