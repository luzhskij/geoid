//
// C++ Interface: mfolder
//
// Description:
//
//
// Author: Eldar <eldarik@eldarik-desktop>, (C) 2008
//
// Copyright: See COPYING file that comes with this distribution
//
//
#ifndef MFOLDER_H
#define MFOLDER_H

#include "mobject.h"

class MFolder : public MObject
{
	public:
		MFolder(QString name = QString());
		~MFolder();

		virtual void render(Renderer *renderer);
		virtual void draw(Renderer *renderer);
		virtual void calculateBorders(BorderStruct &borders);
		virtual ObjectType type() const { return MObject::Folder; }
		
		virtual void setChecked(bool checkState, bool recursive);
		virtual QIcon icon() const;
};

#endif
