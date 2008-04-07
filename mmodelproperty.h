//
// C++ Interface: mmodelproperty
//
// Description: Class for handling properties of the model - facies, porosity, perm, etc
//
//
// Author: Eldar <eldarik@eldarik-desktop>, (C) 2008
//
// Copyright: See COPYING file that comes with this distribution
//
//
#ifndef MMODELPROPERTY_H
#define MMODELPROPERTY_H

#include "mmodel.h"
#include "globals.h"

class Renderer;

class MModelProperty : public MObject
{
	public:
		MModelProperty(MModel *model, QString name);
		~MModelProperty();

		int numX() const;
		int numY() const;
		int numZ() const;

		MModel *model() const { return m_model; }

	private:
		MModel *m_model;
		int m_numX, m_numY, m_numZ;
};

class MModelDiscreteProperty : public MModelProperty
{
	public:
		MModelDiscreteProperty(MModel *model, QString name);
		~MModelDiscreteProperty();

		virtual void render(Renderer*);
		virtual void draw(Renderer *renderer);
		ObjectType type() const { return MObject::ModelDiscreteProperty; }

		unsigned char cell(int i, int j, int k) const;
		unsigned char cellNoCheck(int i, int j, int k) const;

	private:
		unsigned char* m_cells;
};
/*****************************************************************************
  MModelProperty inline functions
 *****************************************************************************/

inline int MModelProperty::numX() const
{ return m_numX; }

inline int MModelProperty::numY() const
{ return m_numY; }

inline int MModelProperty::numZ() const
{ return m_numZ; }

inline unsigned char MModelDiscreteProperty::cellNoCheck(int i, int j, int k) const
{ return m_cells[numY()*numX()*k+numX()*j+i]; }

inline unsigned char MModelDiscreteProperty::cell(int i, int j, int k) const
{
	if ( 0<=i && i<numX() && 0<=j && j<numY() && 0<=k && k<numZ())
		return m_cells[numY()*numX()*k+numX()*j+i];
	else
		return 0;
}
#endif
