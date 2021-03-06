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

#ifndef OEMHEADER_H
#define OEMHEADER_H


#include "typedefs.h"
#include "oem.h"
#include "date.h"
#include "StringUtils.h"

#include <vector>
#include <string>

namespace novars
{



class OemHeader
{
public:
    OemHeader();

    bool decodeASCII(const std::string &buf);
    bool decodeBinary(const std::vector<UChar> &buf);

protected:
    bool parseMessageID(const std::string &msgID);
    inline void parseSequience(const std::string &msgField){sequence_ = std::stoi(msgField);}
    inline void parseIdleTime(const std::string &msgField){idle_time_ = std::stoi(msgField);}
    bool parseTimeStatus(const std::string &msgField);


    UChar length_;
    MessageID message_id_;
    MessageType message_type_;
    UChar message_length_;
    UShort sequence_;
    UChar idle_time_;
    TimeStatus time_status_;
    DATE date_;
    ULong receiver_status_;
    UShort receiver_sw_version_;

};

}  // namespace novars

#endif // OEMHEADER_H
