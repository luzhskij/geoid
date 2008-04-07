/*
 * This file is part of the Geoid and licensed under the GNU General Public License, version 3
 * http://www.gnu.org/licenses/gpl-3.0.html
 */

#ifndef BORDERSTRUCT_H
#define BORDERSTRUCT_H
struct BorderStruct
{
	double minX, maxX, minY, maxY, minZ, maxZ;
	bool atLeastOne;
};

#endif
