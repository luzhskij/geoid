//
// C++ Implementation: mprogressbartracker
//
// Description: 
//
//
// Author: Eldar <eldarik@eldarik-desktop>, (C) 2008
//
// Copyright: See COPYING file that comes with this distribution
//
//

#include "mprogressbartracker.h"

MProgressBarTracker::MProgressBarTracker()
{
	m_progressBar = new QProgressBar();
	m_progressBar->setMinimum(0);
	m_progressBar->setMaximum(100);
	m_progressBar->setValue(0);
}


MProgressBarTracker::~MProgressBarTracker()
{
	delete m_progressBar;
}

void MProgressBarTracker::setValue(int value)
{
	m_progressBar->setValue(value);
}

void MProgressBarTracker::initiate()
{
	m_progressBar->setValue(0);
}
