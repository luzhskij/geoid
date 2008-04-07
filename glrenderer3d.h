//
// C++ Interface: glrenderer3d
//
// Description: 
//
//
// Author: eldarka <eldarka@eldarka-desktop>, (C) 2008
//
// Copyright: See COPYING file that comes with this distribution
//
//
#ifndef GLRENDERER3D_H
#define GLRENDERER3D_H

#include <renderer.h>

class GLRenderer3D : public Renderer
{
	public:
		GLRenderer3D();
		virtual ~GLRenderer3D();
		
		virtual void draw(MObject*);

		virtual void render(MGrid*);
		virtual void render(MWell*);
		virtual void render(MPoints*);
		virtual void render(MModelSkeleton*);
		virtual void render(MModelDiscreteProperty*);

		virtual void render(MModel*);
};

#endif
