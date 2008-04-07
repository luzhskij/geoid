//
// C++ Interface: treeitem
//
// Description: 
//
//
// Author: Eldar <eldarik@eldarik-desktop>, (C) 2008
//
// Copyright: See COPYING file that comes with this distribution
//
//
#ifndef TREEITEM_H
#define TREEITEM_H

#include <QList>
#include <QVariant>
#include <list>
#include <QIcon>

class ItemParams
{
	bool checked;
};

class MFolder;
class Renderer;
class BorderStruct;

class TreeItem
{
	friend class TreeModel;
	friend class MFolder;
	
	public:
		TreeItem(TreeItem *parent = 0);
		virtual ~TreeItem();

		TreeItem *parent() const { return parentItem; }
		void setParentItem(TreeItem *parent) { parentItem = parent; }

		QVariant data(int role) const;
		void setData(int column, int role, const QVariant &value);

		int row() const;
		virtual void render(Renderer *renderer) = 0;
		virtual void draw(Renderer *renderer) = 0;
		virtual void calculateBorders(BorderStruct &borders) = 0;
		
		bool isChecked() const { return m_checked; }
		virtual void setChecked(bool checkState, bool recursive);
		
		virtual QIcon icon() const { return QIcon(); }
	
	public:
		void appendChild(TreeItem *child);
		TreeItem *child(int row);
		int childCount() const;

	public:
		const QString &objectName() const { return m_objectName; }
		void setObjectName(QString name) { m_objectName = name; }

	private:
		bool m_checked;
		QString m_objectName;

		TreeItem *parentItem;
		std::list<ItemParams> viewParams;
		
		QList<TreeItem*> children;
};

#endif
