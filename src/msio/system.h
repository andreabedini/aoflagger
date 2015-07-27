/***************************************************************************
 *   Copyright (C) 2008 by A.R. Offringa   *
 *   offringa@astro.rug.nl   *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/
#ifndef MSIOSYSTEM_H
#define MSIOSYSTEM_H

#include <casacore/casa/OS/HostInfo.h>

class System
{
	public:
		static long TotalMemory()
		{
			return casacore::HostInfo::memoryTotal()*1024;
		}
		
		static unsigned ProcessorCount()
		{
			unsigned cpus = casacore::HostInfo::numCPUs();
			if(cpus == 0) cpus = 1;
			return cpus;
		}
};

#endif //MSIOSYSTEM_H
