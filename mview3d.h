//
// C++ Interface: mview3d
//
// Description:
//
//
// Author: Eldar <eldarik@eldarik-desktop>, (C) 2008
//
// Copyright: See COPYING file that comes with this distribution
//
//
#ifndef MVIEW3D_H
#define MVIEW3D_H

#include "mabstractview.h"
#include "borderstruct.h"

class GLRenderer3D;
class GLWidget3D;

class MView3D : public MAbstractView
{
	public:
		MView3D(TreeModel *treeModel);
		~MView3D();

		virtual void draw();
		virtual Renderer *renderer() const;
		virtual QWidget *widget() const;
		void calculateBorders();
		
	private:
		GLRenderer3D *m_glRenderer3D;
		GLWidget3D *m_glWidget3D;
};

#endif
