#include "ongor.h"
#include <QTimer>
#include <QTime>

Ongor::Ongor(QObject* parent) : QTimer(parent)
{

	    connect(this, SIGNAL(timeout()), this, SLOT(resettime()));
}
void Ongor::start()
{
	    m_time.start();
		    QTimer::start();
}

void Ongor::start(int msec)
{
	    m_time.start();
		    QTimer::start(msec);
}

double Ongor:: proportionLeft()
{
	    return (interval()-m_time.elapsed())/interval();
}

int Ongor::timeLeft()
{
	    return interval()-m_time.elapsed();
}


void Ongor::resettime()
{
	    m_time.restart();
}

