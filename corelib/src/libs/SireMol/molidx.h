/********************************************\
  *
  *  Sire - Molecular Simulation Framework
  *
  *  Copyright (C) 2007  Christopher Woods
  *
  *  This program is free software; you can redistribute it and/or modify
  *  it under the terms of the GNU General Public License as published by
  *  the Free Software Foundation; either version 2 of the License, or
  *  (at your option) any later version.
  *
  *  This program is distributed in the hope that it will be useful,
  *  but WITHOUT ANY WARRANTY; without even the implied warranty of
  *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  *  GNU General Public License for more details.
  *
  *  You should have received a copy of the GNU General Public License
  *  along with this program; if not, write to the Free Software
  *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
  *
  *  For full details of the license please see the COPYING file
  *  that should have come with this distribution.
  *
  *  You can contact the authors via the developer's mailing list
  *  at http://siremol.org
  *
\*********************************************/

#ifndef SIREMOL_MOLIDX_H
#define SIREMOL_MOLIDX_H

#include "SireID/index.h"

#include "molid.h"

SIRE_BEGIN_HEADER

namespace SireMol
{
class MolIdx;
}

QDataStream& operator<<(QDataStream&, const SireMol::MolIdx&);
QDataStream& operator>>(QDataStream&, SireMol::MolIdx&);

namespace SireMol
{

/** This is an ID object that is used to index molecules (e.g. index
    in a list or array, or in a MoleculeGroup).

    @author Christopher Woods
*/
class SIREMOL_EXPORT MolIdx : public SireID::Index_T_<MolIdx>, public MolID
{

friend QDataStream& ::operator<<(QDataStream&, const MolIdx&);
friend QDataStream& ::operator>>(QDataStream&, MolIdx&);

public:
    MolIdx();
    explicit MolIdx(qint32 idx);
    
    MolIdx(const MolIdx &other);
    
    ~MolIdx();
    
    static const char* typeName();
    
    const char* what() const
    {
        return MolIdx::typeName();
    }
    
    MolIdx* clone() const;
    
    static MolIdx null();
    
    bool isNull() const;
    
    uint hash() const;

    QString toString() const;
    
    MolIdx& operator=(const MolIdx &other);
    
    bool operator==(const SireID::ID &other) const;
    
    using SireID::Index_T_<MolIdx>::operator=;

    using SireID::Index_T_<MolIdx>::operator==;
    using SireID::Index_T_<MolIdx>::operator!=;

    using SireID::Index_T_<MolIdx>::operator+=;
    using SireID::Index_T_<MolIdx>::operator++;
    using SireID::Index_T_<MolIdx>::operator-=;
    using SireID::Index_T_<MolIdx>::operator--;
    
    using SireID::Index_T_<MolIdx>::map;
    
    QList<MolNum> map(const Molecules &molecules) const;
    QList<MolNum> map(const MoleculeGroup &molgroup) const;
    QList<MolNum> map(const MolGroupsBase &molgroups) const;
};
    
}

Q_DECLARE_METATYPE(SireMol::MolIdx);

SIRE_EXPOSE_CLASS( SireMol::MolIdx )

SIRE_END_HEADER

#endif

