#include "button.h"
#include <QGraphicsTextItem>
#include <QBrush>


Button::Button(QString name, QGraphicsItem *parent): QGraphicsRectItem(parent){
//	    text bish vndsen darah hvsnegtee hiij bna
			    setRect(0,0,100,50);
		    QBrush brush;
			    brush.setStyle(Qt::SolidPattern);
				    brush.setColor(Qt::darkCyan);
					    setBrush(brush);


//						    dotor n bichih textee neriig n ogohguigeer bii bolgood bas rec-iin dotorh positioniig n ogch bna
								    text= new QGraphicsTextItem(name,this);
							    int xPos=rect().width()/2-text->boundingRect().width()/2;
								    int yPos=rect().height()/2-text->boundingRect().height()/2;
									    text->setPos(xPos,yPos);

//										    odoo hoverluu respond hiideg bolgii
												    setAcceptHoverEvents(true);

}

void Button::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
	    emit clicked();
}

void Button::hoverEnterEvent(QGraphicsSceneHoverEvent *event)
{
//	    mouse oirtoj ochinguut hvsnegtiin ongiig n oorchlono
			    QBrush brush; //cyan ongorw yagaad gevel deer bvteehdee ongiig n ogtson
		    brush.setStyle(Qt::SolidPattern);
			    brush.setColor(Qt::cyan);
				    setBrush(brush);
}

void Button::hoverLeaveEvent(QGraphicsSceneHoverEvent *event)
{
//	    mouse holdonguut ergeed darkcyantruu shiljine
			    QBrush brush; //cyan ongorw yagaad gevel deer bvteehdee ongiig n ogtson
		    brush.setStyle(Qt::SolidPattern);
			    brush.setColor(Qt::darkCyan);
				    setBrush(brush);
}

