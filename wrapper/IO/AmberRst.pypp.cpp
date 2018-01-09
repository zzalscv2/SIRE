// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "AmberRst.pypp.hpp"

namespace bp = boost::python;

#include "SireBase/booleanproperty.h"

#include "SireBase/getinstalldir.h"

#include "SireBase/parallel.h"

#include "SireBase/stringproperty.h"

#include "SireBase/timeproperty.h"

#include "SireBase/unittest.h"

#include "SireIO/amberformat.h"

#include "SireIO/amberrst.h"

#include "SireIO/errors.h"

#include "SireIO/netcdffile.h"

#include "SireMol/atomcoords.h"

#include "SireMol/atomforces.h"

#include "SireMol/atomvelocities.h"

#include "SireMol/mgname.h"

#include "SireMol/molecule.h"

#include "SireMol/moleditor.h"

#include "SireMol/molidx.h"

#include "SireStream/shareddatastream.h"

#include "SireSystem/system.h"

#include "SireUnits/dimensions.h"

#include "SireUnits/units.h"

#include "SireVol/periodicbox.h"

#include "amberrst.h"

#include "amberrst.h"

SireIO::AmberRst __copy__(const SireIO::AmberRst &other){ return SireIO::AmberRst(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/len.hpp"

void register_AmberRst_class(){

    { //::SireIO::AmberRst
        typedef bp::class_< SireIO::AmberRst, bp::bases< SireIO::MoleculeParser, SireBase::Property > > AmberRst_exposer_t;
        AmberRst_exposer_t AmberRst_exposer = AmberRst_exposer_t( "AmberRst", "This class represents an Amber-format restartcoordinate file (binary),\ncurrently supporting these files from Amber7 to Amber16.\n\nThis is a netcdf file format, which is described here;\n\nhttp:ambermd.orgnetcdfnctraj.xhtml\n\nAuthor: Christopher Woods\n", bp::init< >("Constructor") );
        bp::scope AmberRst_scope( AmberRst_exposer );
        AmberRst_exposer.def( bp::init< QString const &, bp::optional< SireBase::PropertyMap const & > >(( bp::arg("filename"), bp::arg("map")=SireBase::PropertyMap() ), "Construct by parsing the passed file") );
        AmberRst_exposer.def( bp::init< QStringList const &, bp::optional< SireBase::PropertyMap const & > >(( bp::arg("lines"), bp::arg("map")=SireBase::PropertyMap() ), "Construct by parsing the data in the passed text lines") );
        AmberRst_exposer.def( bp::init< SireSystem::System const &, bp::optional< SireBase::PropertyMap const & > >(( bp::arg("system"), bp::arg("map")=SireBase::PropertyMap() ), "Construct by extracting the necessary data from the passed System") );
        AmberRst_exposer.def( bp::init< SireIO::AmberRst const & >(( bp::arg("other") ), "Copy constructor") );
        { //::SireIO::AmberRst::boxAngles
        
            typedef ::SireMaths::Vector ( ::SireIO::AmberRst::*boxAngles_function_type)(  ) const;
            boxAngles_function_type boxAngles_function_value( &::SireIO::AmberRst::boxAngles );
            
            AmberRst_exposer.def( 
                "boxAngles"
                , boxAngles_function_value
                , "Return the parsed box angles, or Vector(0) if there is no space information.\nIf there are multiple frames, then only the first frame is returned" );
        
        }
        { //::SireIO::AmberRst::boxAngles
        
            typedef ::SireMaths::Vector ( ::SireIO::AmberRst::*boxAngles_function_type)( int ) const;
            boxAngles_function_type boxAngles_function_value( &::SireIO::AmberRst::boxAngles );
            
            AmberRst_exposer.def( 
                "boxAngles"
                , boxAngles_function_value
                , ( bp::arg("frame") )
                , "Return the box angles of the ith frame from the file" );
        
        }
        { //::SireIO::AmberRst::boxDimensions
        
            typedef ::SireMaths::Vector ( ::SireIO::AmberRst::*boxDimensions_function_type)(  ) const;
            boxDimensions_function_type boxDimensions_function_value( &::SireIO::AmberRst::boxDimensions );
            
            AmberRst_exposer.def( 
                "boxDimensions"
                , boxDimensions_function_value
                , "Return the parsed box dimensions, or Vector(0) if there is no space information.\nIf there are multiple frames, then only the first frame is returned" );
        
        }
        { //::SireIO::AmberRst::boxDimensions
        
            typedef ::SireMaths::Vector ( ::SireIO::AmberRst::*boxDimensions_function_type)( int ) const;
            boxDimensions_function_type boxDimensions_function_value( &::SireIO::AmberRst::boxDimensions );
            
            AmberRst_exposer.def( 
                "boxDimensions"
                , boxDimensions_function_value
                , ( bp::arg("frame") )
                , "Return the box dimensions of the ith\n frame from the file" );
        
        }
        { //::SireIO::AmberRst::construct
        
            typedef ::SireIO::MoleculeParserPtr ( ::SireIO::AmberRst::*construct_function_type)( ::QString const &,::SireBase::PropertyMap const & ) const;
            construct_function_type construct_function_value( &::SireIO::AmberRst::construct );
            
            AmberRst_exposer.def( 
                "construct"
                , construct_function_value
                , ( bp::arg("filename"), bp::arg("map") )
                , "Return this parser constructed from the passed filename" );
        
        }
        { //::SireIO::AmberRst::construct
        
            typedef ::SireIO::MoleculeParserPtr ( ::SireIO::AmberRst::*construct_function_type)( ::QStringList const &,::SireBase::PropertyMap const & ) const;
            construct_function_type construct_function_value( &::SireIO::AmberRst::construct );
            
            AmberRst_exposer.def( 
                "construct"
                , construct_function_value
                , ( bp::arg("lines"), bp::arg("map") )
                , "Return this parser constructed from the passed set of lines" );
        
        }
        { //::SireIO::AmberRst::construct
        
            typedef ::SireIO::MoleculeParserPtr ( ::SireIO::AmberRst::*construct_function_type)( ::SireSystem::System const &,::SireBase::PropertyMap const & ) const;
            construct_function_type construct_function_value( &::SireIO::AmberRst::construct );
            
            AmberRst_exposer.def( 
                "construct"
                , construct_function_value
                , ( bp::arg("system"), bp::arg("map") )
                , "Return this parser constructed from the passed SireSystem::System" );
        
        }
        { //::SireIO::AmberRst::coordinates
        
            typedef ::QVector< SireMaths::Vector > ( ::SireIO::AmberRst::*coordinates_function_type)(  ) const;
            coordinates_function_type coordinates_function_value( &::SireIO::AmberRst::coordinates );
            
            AmberRst_exposer.def( 
                "coordinates"
                , coordinates_function_value
                , "Return the parsed coordinate data. If there are multiple frames,\nthen only the first frame is returned" );
        
        }
        { //::SireIO::AmberRst::coordinates
        
            typedef ::QVector< SireMaths::Vector > ( ::SireIO::AmberRst::*coordinates_function_type)( int ) const;
            coordinates_function_type coordinates_function_value( &::SireIO::AmberRst::coordinates );
            
            AmberRst_exposer.def( 
                "coordinates"
                , coordinates_function_value
                , ( bp::arg("frame") )
                , "Return the coordinates of the ith frame from the file" );
        
        }
        { //::SireIO::AmberRst::count
        
            typedef int ( ::SireIO::AmberRst::*count_function_type)(  ) const;
            count_function_type count_function_value( &::SireIO::AmberRst::count );
            
            AmberRst_exposer.def( 
                "count"
                , count_function_value
                , "Return the number of frames in the file" );
        
        }
        { //::SireIO::AmberRst::createdFromRestart
        
            typedef bool ( ::SireIO::AmberRst::*createdFromRestart_function_type)(  ) const;
            createdFromRestart_function_type createdFromRestart_function_value( &::SireIO::AmberRst::createdFromRestart );
            
            AmberRst_exposer.def( 
                "createdFromRestart"
                , createdFromRestart_function_value
                , "Return whether or not this was created from a restart (.rst) file" );
        
        }
        { //::SireIO::AmberRst::createdFromTrajectory
        
            typedef bool ( ::SireIO::AmberRst::*createdFromTrajectory_function_type)(  ) const;
            createdFromTrajectory_function_type createdFromTrajectory_function_value( &::SireIO::AmberRst::createdFromTrajectory );
            
            AmberRst_exposer.def( 
                "createdFromTrajectory"
                , createdFromTrajectory_function_value
                , "Return whether or not this was created from a trajectory (.trj) file" );
        
        }
        { //::SireIO::AmberRst::creatorApplication
        
            typedef ::QString ( ::SireIO::AmberRst::*creatorApplication_function_type)(  ) const;
            creatorApplication_function_type creatorApplication_function_value( &::SireIO::AmberRst::creatorApplication );
            
            AmberRst_exposer.def( 
                "creatorApplication"
                , creatorApplication_function_value
                , "Return the application that created the file that has been parsed" );
        
        }
        { //::SireIO::AmberRst::forces
        
            typedef ::QVector< SireMaths::Vector > ( ::SireIO::AmberRst::*forces_function_type)(  ) const;
            forces_function_type forces_function_value( &::SireIO::AmberRst::forces );
            
            AmberRst_exposer.def( 
                "forces"
                , forces_function_value
                , "Return the parsed force data. If there are multiple frames,\nthen only the first frame is returned" );
        
        }
        { //::SireIO::AmberRst::forces
        
            typedef ::QVector< SireMaths::Vector > ( ::SireIO::AmberRst::*forces_function_type)( int ) const;
            forces_function_type forces_function_value( &::SireIO::AmberRst::forces );
            
            AmberRst_exposer.def( 
                "forces"
                , forces_function_value
                , ( bp::arg("frame") )
                , "Return the forces of the ith frame from the file" );
        
        }
        { //::SireIO::AmberRst::formatDescription
        
            typedef ::QString ( ::SireIO::AmberRst::*formatDescription_function_type)(  ) const;
            formatDescription_function_type formatDescription_function_value( &::SireIO::AmberRst::formatDescription );
            
            AmberRst_exposer.def( 
                "formatDescription"
                , formatDescription_function_value
                , "Return a description of the file format" );
        
        }
        { //::SireIO::AmberRst::formatName
        
            typedef ::QString ( ::SireIO::AmberRst::*formatName_function_type)(  ) const;
            formatName_function_type formatName_function_value( &::SireIO::AmberRst::formatName );
            
            AmberRst_exposer.def( 
                "formatName"
                , formatName_function_value
                , "Return the format name that is used to identify this file format within Sire" );
        
        }
        { //::SireIO::AmberRst::formatSuffix
        
            typedef ::QStringList ( ::SireIO::AmberRst::*formatSuffix_function_type)(  ) const;
            formatSuffix_function_type formatSuffix_function_value( &::SireIO::AmberRst::formatSuffix );
            
            AmberRst_exposer.def( 
                "formatSuffix"
                , formatSuffix_function_value
                , "Return the suffixes that AmberRst files will typically use" );
        
        }
        { //::SireIO::AmberRst::formatVersion
        
            typedef double ( ::SireIO::AmberRst::*formatVersion_function_type)(  ) const;
            formatVersion_function_type formatVersion_function_value( &::SireIO::AmberRst::formatVersion );
            
            AmberRst_exposer.def( 
                "formatVersion"
                , formatVersion_function_value
                , "Return the version of the file format that was parsed" );
        
        }
        { //::SireIO::AmberRst::hasCoordinates
        
            typedef bool ( ::SireIO::AmberRst::*hasCoordinates_function_type)(  ) const;
            hasCoordinates_function_type hasCoordinates_function_value( &::SireIO::AmberRst::hasCoordinates );
            
            AmberRst_exposer.def( 
                "hasCoordinates"
                , hasCoordinates_function_value
                , "Return whether or not this restart file provides coordinates" );
        
        }
        { //::SireIO::AmberRst::hasForces
        
            typedef bool ( ::SireIO::AmberRst::*hasForces_function_type)(  ) const;
            hasForces_function_type hasForces_function_value( &::SireIO::AmberRst::hasForces );
            
            AmberRst_exposer.def( 
                "hasForces"
                , hasForces_function_value
                , "Return whether or not this restart file also provides forces" );
        
        }
        { //::SireIO::AmberRst::hasVelocities
        
            typedef bool ( ::SireIO::AmberRst::*hasVelocities_function_type)(  ) const;
            hasVelocities_function_type hasVelocities_function_value( &::SireIO::AmberRst::hasVelocities );
            
            AmberRst_exposer.def( 
                "hasVelocities"
                , hasVelocities_function_value
                , "Return whether or not this restart file also provides velocities" );
        
        }
        { //::SireIO::AmberRst::isTextFile
        
            typedef bool ( ::SireIO::AmberRst::*isTextFile_function_type)(  ) const;
            isTextFile_function_type isTextFile_function_value( &::SireIO::AmberRst::isTextFile );
            
            AmberRst_exposer.def( 
                "isTextFile"
                , isTextFile_function_value
                , "This is not a text file" );
        
        }
        { //::SireIO::AmberRst::nAtoms
        
            typedef int ( ::SireIO::AmberRst::*nAtoms_function_type)(  ) const;
            nAtoms_function_type nAtoms_function_value( &::SireIO::AmberRst::nAtoms );
            
            AmberRst_exposer.def( 
                "nAtoms"
                , nAtoms_function_value
                , "Return the number of atoms whose data are contained in this restart file" );
        
        }
        { //::SireIO::AmberRst::nFrames
        
            typedef int ( ::SireIO::AmberRst::*nFrames_function_type)(  ) const;
            nFrames_function_type nFrames_function_value( &::SireIO::AmberRst::nFrames );
            
            AmberRst_exposer.def( 
                "nFrames"
                , nFrames_function_value
                , "Return the number of frames that have been loaded from the file" );
        
        }
        AmberRst_exposer.def( bp::self != bp::self );
        { //::SireIO::AmberRst::operator=
        
            typedef ::SireIO::AmberRst & ( ::SireIO::AmberRst::*assign_function_type)( ::SireIO::AmberRst const & ) ;
            assign_function_type assign_function_value( &::SireIO::AmberRst::operator= );
            
            AmberRst_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        AmberRst_exposer.def( bp::self == bp::self );
        { //::SireIO::AmberRst::operator[]
        
            typedef ::SireIO::AmberRst ( ::SireIO::AmberRst::*__getitem___function_type)( int ) const;
            __getitem___function_type __getitem___function_value( &::SireIO::AmberRst::operator[] );
            
            AmberRst_exposer.def( 
                "__getitem__"
                , __getitem___function_value
                , ( bp::arg("i") )
                , "" );
        
        }
        { //::SireIO::AmberRst::parse
        
            typedef ::SireIO::AmberRst ( *parse_function_type )( ::QString const & );
            parse_function_type parse_function_value( &::SireIO::AmberRst::parse );
            
            AmberRst_exposer.def( 
                "parse"
                , parse_function_value
                , ( bp::arg("filename") )
                , "Parse from the passed file" );
        
        }
        { //::SireIO::AmberRst::size
        
            typedef int ( ::SireIO::AmberRst::*size_function_type)(  ) const;
            size_function_type size_function_value( &::SireIO::AmberRst::size );
            
            AmberRst_exposer.def( 
                "size"
                , size_function_value
                , "Return the number of frames in the file" );
        
        }
        { //::SireIO::AmberRst::time
        
            typedef double ( ::SireIO::AmberRst::*time_function_type)(  ) const;
            time_function_type time_function_value( &::SireIO::AmberRst::time );
            
            AmberRst_exposer.def( 
                "time"
                , time_function_value
                , "Return the current time of the simulation from which this restart\nfile was written. Returns 0 if there is no time set. If there are\nmultiple frames, then the time of the first frame is returned" );
        
        }
        { //::SireIO::AmberRst::time
        
            typedef double ( ::SireIO::AmberRst::*time_function_type)( int ) const;
            time_function_type time_function_value( &::SireIO::AmberRst::time );
            
            AmberRst_exposer.def( 
                "time"
                , time_function_value
                , ( bp::arg("frame") )
                , "Return the time of the ith frame from the file" );
        
        }
        { //::SireIO::AmberRst::title
        
            typedef ::QString ( ::SireIO::AmberRst::*title_function_type)(  ) const;
            title_function_type title_function_value( &::SireIO::AmberRst::title );
            
            AmberRst_exposer.def( 
                "title"
                , title_function_value
                , "Return the title of the file" );
        
        }
        { //::SireIO::AmberRst::toString
        
            typedef ::QString ( ::SireIO::AmberRst::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireIO::AmberRst::toString );
            
            AmberRst_exposer.def( 
                "toString"
                , toString_function_value
                , "" );
        
        }
        { //::SireIO::AmberRst::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireIO::AmberRst::typeName );
            
            AmberRst_exposer.def( 
                "typeName"
                , typeName_function_value
                , "" );
        
        }
        { //::SireIO::AmberRst::velocities
        
            typedef ::QVector< SireMaths::Vector > ( ::SireIO::AmberRst::*velocities_function_type)(  ) const;
            velocities_function_type velocities_function_value( &::SireIO::AmberRst::velocities );
            
            AmberRst_exposer.def( 
                "velocities"
                , velocities_function_value
                , "Return the parsed coordinate data. If there are multiple frames,\nthen only the first frame is returned" );
        
        }
        { //::SireIO::AmberRst::velocities
        
            typedef ::QVector< SireMaths::Vector > ( ::SireIO::AmberRst::*velocities_function_type)( int ) const;
            velocities_function_type velocities_function_value( &::SireIO::AmberRst::velocities );
            
            AmberRst_exposer.def( 
                "velocities"
                , velocities_function_value
                , ( bp::arg("frame") )
                , "Return the velocities of the ith frame from the file" );
        
        }
        { //::SireIO::AmberRst::warnings
        
            typedef ::QStringList ( ::SireIO::AmberRst::*warnings_function_type)(  ) const;
            warnings_function_type warnings_function_value( &::SireIO::AmberRst::warnings );
            
            AmberRst_exposer.def( 
                "warnings"
                , warnings_function_value
                , "Return any warnings that were triggered during parsing" );
        
        }
        { //::SireIO::AmberRst::what
        
            typedef char const * ( ::SireIO::AmberRst::*what_function_type)(  ) const;
            what_function_type what_function_value( &::SireIO::AmberRst::what );
            
            AmberRst_exposer.def( 
                "what"
                , what_function_value
                , "" );
        
        }
        { //::SireIO::AmberRst::writeToFile
        
            typedef void ( ::SireIO::AmberRst::*writeToFile_function_type)( ::QString const & ) const;
            writeToFile_function_type writeToFile_function_value( &::SireIO::AmberRst::writeToFile );
            
            AmberRst_exposer.def( 
                "writeToFile"
                , writeToFile_function_value
                , ( bp::arg("filename") )
                , "Write this AmberRst to a file called filename. This will write out\nthe data in this object to the Amber NetCDF format" );
        
        }
        AmberRst_exposer.staticmethod( "parse" );
        AmberRst_exposer.staticmethod( "typeName" );
        AmberRst_exposer.def( "__copy__", &__copy__);
        AmberRst_exposer.def( "__deepcopy__", &__copy__);
        AmberRst_exposer.def( "clone", &__copy__);
        AmberRst_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireIO::AmberRst >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        AmberRst_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireIO::AmberRst >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        AmberRst_exposer.def( "__str__", &__str__< ::SireIO::AmberRst > );
        AmberRst_exposer.def( "__repr__", &__str__< ::SireIO::AmberRst > );
        AmberRst_exposer.def( "__len__", &__len_size< ::SireIO::AmberRst > );
    }

}
