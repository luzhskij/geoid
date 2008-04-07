//
// C++ Implementation: treeitem
//
// Description: 
//
//
// Author: Eldar <eldarik@eldarik-desktop>, (C) 2008
//
// Copyright: See COPYING file that comes with this distribution
//
//

#include "treeitem.h"

TreeItem::TreeItem(TreeItem *parent)
{
	parentItem = parent;
	m_checked = true;
}

TreeItem::~TreeItem()
{
	qDeleteAll(children);
}

void TreeItem::setChecked(bool checkState, bool recursive)
{
	m_checked = checkState;
	if(parentItem != 0 && checkState)
		parentItem->setChecked(checkState, false);
}

void TreeItem::setData(int column, int role, const QVariant &value)
{
	if (column < 0)
		return;

	if (role == Qt::CheckStateRole)
		setChecked(value.toBool(), true);
}

QVariant TreeItem::data(int role) const
{
	if (role == Qt::CheckStateRole)
		return m_checked? Qt::Checked : Qt::Unchecked;

	if (role == Qt::DisplayRole)
		return objectName();
	if (role == Qt::DecorationRole)
		return icon();
	return QVariant();
}

int TreeItem::row() const
{
	if (parent())
		return parent()->children.indexOf(const_cast<TreeItem*>(this));

	return 0;
}

void TreeItem::appendChild(TreeItem *item)
{
	children.append(item);
	item->setParentItem(this);
}

TreeItem *TreeItem::child(int row)
{
	return children.value(row);
}

int TreeItem::childCount() const
{
	return children.count();
}
