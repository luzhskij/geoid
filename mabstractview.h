//
// C++ Interface: mabstractview
//
// Description:
//
//
// Author: Eldar <eldarik@eldarik-desktop>, (C) 2008
//
// Copyright: See COPYING file that comes with this distribution
//
//
#ifndef MABSTRACTVIEW_H
#define MABSTRACTVIEW_H

class Renderer;
class QWidget;
class TreeModel;

class MAbstractView
{
	public:
		MAbstractView(TreeModel *treeModel);
		virtual ~MAbstractView();
		
		virtual void draw() = 0;
		virtual Renderer *renderer() const = 0;
		virtual QWidget *widget() const = 0;
		TreeModel *treeModel() const { return m_treeModel; }

	private:
		TreeModel *m_treeModel;
};

#endif
