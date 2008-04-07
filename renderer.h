//
// C++ Interface: renderer
//
// Description:
//
//
// Author: eldarka <eldarka@eldarka-desktop>, (C) 2008
//
// Copyright: See COPYING file that comes with this distribution
//
//
#ifndef RENDERER_H
#define RENDERER_H

class MObject;
class MGrid;
class MWell;
class MPoints;
class MModel;
class MModelSkeleton;
class MModelDiscreteProperty;

class Renderer
{
public:
	Renderer();
	virtual ~Renderer();
	
	virtual void draw(MObject*) = 0;

	virtual void render(MGrid*) = 0;
	virtual void render(MWell*) = 0;
	virtual void render(MPoints*) = 0;
	virtual void render(MModelSkeleton*) = 0;
	virtual void render(MModelDiscreteProperty*) = 0;

	virtual void render(MModel*) = 0;
};

#endif
