//
// C++ Implementation: mview3d
//
// Description:
//
//
// Author: Eldar <eldarik@eldarik-desktop>, (C) 2008
//
// Copyright: See COPYING file that comes with this distribution
//
//
#include "mview3d.h"
#include "glrenderer3d.h"
#include "glwidget3d.h"
#include "treemodel.h"

MView3D::MView3D(TreeModel *treeModel) :
		MAbstractView(treeModel)
{
	m_glRenderer3D = new GLRenderer3D();
	m_glWidget3D = new GLWidget3D();
}

MView3D::~MView3D()
{
	delete m_glRenderer3D;
	delete m_glWidget3D;
}

void MView3D::draw()
{
	glNewList (m_glWidget3D->getglList(), GL_COMPILE) ;
	treeModel()->draw(m_glRenderer3D);
	glEndList();
	m_glWidget3D->updateGL();
}

Renderer *MView3D::renderer() const
{
	return m_glRenderer3D;
}

QWidget *MView3D::widget() const
{
	return m_glWidget3D;
}

void MView3D::calculateBorders()
{
	m_glWidget3D->camera().borders().atLeastOne = false;
	treeModel()->calculateBorders(m_glWidget3D->camera().borders());
}
