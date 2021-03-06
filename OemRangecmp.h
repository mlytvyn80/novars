/*
 *
 * This file is a part of NovaRS.
 *     
 * NovaRS, the GNSS station controlling software.
 * Copyright (C) 2016  Mykhailo Lytvyn
 * 
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */


#ifndef OEMRANGECMP_H
#define OEMRANGECMP_H

#include "OemRange.h"


namespace novars
{

class OemRangecmp : public OemRange
{
public:
    OemRangecmp();
    virtual ~OemRangecmp();

    void decodeASCII(std::string buf);
    void decodeBinary(std::vector<UChar> buf);
protected:



};

} // namespace novars

#endif // OEMRANGECMP_H
