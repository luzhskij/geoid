//
// C++ Implementation: mfolder
//
// Description:
//
//
// Author: Eldar <eldarik@eldarik-desktop>, (C) 2008
//
// Copyright: See COPYING file that comes with this distribution
//
//
#include "mfolder.h"
#include "borderstruct.h"

MFolder::MFolder(QString name) :
		MObject(name)
{

}


MFolder::~MFolder()
{
}

void MFolder::setChecked(bool checkState, bool recursive)
{
	TreeItem::setChecked(checkState, false);
	if (recursive)
	{
		TreeItem *iterator;
		foreach(iterator, children)
			iterator->setChecked(checkState, recursive);
	}
}

QIcon MFolder::icon() const
{
	return QIcon( "Images/folder.png" );
}

void MFolder::render(Renderer *renderer)
{
	TreeItem *iterator;
	foreach(iterator, children)
		if(iterator->isChecked())
			iterator->render(renderer);
}

void MFolder::draw(Renderer *renderer)
{
	TreeItem *iterator;
	foreach(iterator, children)
		if(iterator->isChecked())
			iterator->draw(renderer);
}

void MFolder::calculateBorders(BorderStruct &borders)
{
	TreeItem *iterator;
	foreach(iterator, children)
		iterator->calculateBorders(borders);
}
