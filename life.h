#ifndef LIFE_H
#define LIFE_H

#include <QGraphicsTextItem>

class Life: public QGraphicsTextItem{
	public:
		    Life(QGraphicsItem *parent=0);
			    void decrease();
				    int getLife();
	private:
					    int life;
};

#endif // LIFE_H

