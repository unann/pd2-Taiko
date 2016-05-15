#ifndef ONGOR_H
#define ONGOR_H


#include <QTimer>
#include <QTime>


class Ongor : public QTimer
{
	    Q_OBJECT

			    public:
			        Ongor(QObject* parent=0);

					        void start();


							        void start(int msec);


									        double proportionLeft();


											        int timeLeft();


													    private slots:

															        void resettime();


														    private:
														        QTime m_time;
};




#endif // ONGOR_H

