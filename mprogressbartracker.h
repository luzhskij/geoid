//
// C++ Interface: mprogressbartracker
//
// Description: 
//
//
// Author: Eldar <eldarik@eldarik-desktop>, (C) 2008
//
// Copyright: See COPYING file that comes with this distribution
//
//
#ifndef MPROGRESSBARTRACKER_H
#define MPROGRESSBARTRACKER_H

#include <QProgressBar>

class MProgressBarTracker {

public:
	MProgressBarTracker();
	~MProgressBarTracker();
	
	inline QProgressBar *progressBar() { return m_progressBar; }
	void setValue(int value);
	void initiate();

private:
	QProgressBar *m_progressBar;
};

#endif
