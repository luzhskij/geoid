//
// C++ Interface: mwell
//
// Description: 
//
//
// Author: Eldar <eldarik@eldarik-desktop>, (C) 2008
//
// Copyright: See COPYING file that comes with this distribution
//
//
#ifndef MWELL_H
#define MWELL_H

#include <QVector>
#include "mobject.h"

struct WellNode
{
	double x, y, z, h;
};

class MWell : public MObject
{
	public:
		MWell(QString name = QString());
		~MWell();

		virtual void render(Renderer*);
		virtual void draw(Renderer *renderer);
		virtual ObjectType type() const { return MObject::Well; }

		const QVector<WellNode> &nodes() const { return m_wellNodes; }
		void addNode(WellNode node);
		void reCalculateBorders();

	private:
		QVector<WellNode> m_wellNodes;
};

#endif
