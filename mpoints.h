#ifndef MPOINTS_H
#define MPOINTS_H

#include <vector>
using std::vector;

#include "mobject.h"

class MPoint;

class MPoints : public MObject
{

public:
	MPoints(void);
	~MPoints(void);

private:
	vector <MPoint*> points;
	virtual void defineCoo();
};

#endif
