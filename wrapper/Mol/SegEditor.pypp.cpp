// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "SegEditor.pypp.hpp"

namespace bp = boost::python;

#include "SireError/errors.h"

#include "SireStream/datastream.h"

#include "atom.h"

#include "atomeditor.h"

#include "chain.h"

#include "chaineditor.h"

#include "groupatomids.h"

#include "molecule.h"

#include "moleditor.h"

#include "mover.hpp"

#include "reseditor.h"

#include "residue.h"

#include "segeditor.h"

#include "segment.h"

#include "selector.hpp"

#include "segeditor.h"

SireMol::SegEditor __copy__(const SireMol::SegEditor &other){ return SireMol::SegEditor(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/len.hpp"

void register_SegEditor_class(){

    { //::SireMol::SegEditor
        typedef bp::class_< SireMol::SegEditor, bp::bases< SireMol::Editor<SireMol::SegEditor, SireMol::Segment>, SireMol::Segment, SireMol::MoleculeView, SireBase::Property > > SegEditor_exposer_t;
        SegEditor_exposer_t SegEditor_exposer = SegEditor_exposer_t( "SegEditor", "This class is used to edit the non-structural parts of a segment\n\nAuthor: Christopher Woods\n", bp::init< >("Null constructor") );
        bp::scope SegEditor_scope( SegEditor_exposer );
        SegEditor_exposer.def( bp::init< SireMol::Segment const & >(( bp::arg("residue") ), "Construct to edit a copy of the Segment segment") );
        SegEditor_exposer.def( bp::init< SireMol::SegEditor const & >(( bp::arg("other") ), "Copy constructor") );
        { //::SireMol::SegEditor::add
        
            typedef ::SireMol::AtomStructureEditor ( ::SireMol::SegEditor::*add_function_type)( ::SireMol::AtomName const & ) const;
            add_function_type add_function_value( &::SireMol::SegEditor::add );
            
            SegEditor_exposer.def( 
                "add"
                , add_function_value
                , ( bp::arg("atomname") )
                , "Add an atom called atomname to this Segment and return\nan editor for that atom" );
        
        }
        { //::SireMol::SegEditor::add
        
            typedef ::SireMol::AtomStructureEditor ( ::SireMol::SegEditor::*add_function_type)( ::SireMol::AtomNum ) const;
            add_function_type add_function_value( &::SireMol::SegEditor::add );
            
            SegEditor_exposer.def( 
                "add"
                , add_function_value
                , ( bp::arg("atomnum") )
                , "Add an atom with number atomnum to this Segment and return\nan editor for that atom" );
        
        }
        { //::SireMol::SegEditor::commit
        
            typedef ::SireMol::Segment ( ::SireMol::SegEditor::*commit_function_type)(  ) const;
            commit_function_type commit_function_value( &::SireMol::SegEditor::commit );
            
            SegEditor_exposer.def( 
                "commit"
                , commit_function_value
                , "Commit the changes made by this editor and return the\nupdated Segment" );
        
        }
        { //::SireMol::SegEditor::operator=
        
            typedef ::SireMol::SegEditor & ( ::SireMol::SegEditor::*assign_function_type)( ::SireMol::Segment const & ) ;
            assign_function_type assign_function_value( &::SireMol::SegEditor::operator= );
            
            SegEditor_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("residue") )
                , bp::return_self< >()
                , "" );
        
        }
        { //::SireMol::SegEditor::operator=
        
            typedef ::SireMol::SegEditor & ( ::SireMol::SegEditor::*assign_function_type)( ::SireMol::SegEditor const & ) ;
            assign_function_type assign_function_value( &::SireMol::SegEditor::operator= );
            
            SegEditor_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        { //::SireMol::SegEditor::reindex
        
            typedef ::SireMol::SegStructureEditor ( ::SireMol::SegEditor::*reindex_function_type)( ::SireMol::SegIdx ) const;
            reindex_function_type reindex_function_value( &::SireMol::SegEditor::reindex );
            
            SegEditor_exposer.def( 
                "reindex"
                , reindex_function_value
                , ( bp::arg("index") )
                , "Move this Segment to index newidx - this will move it\nto the start or end if this index is out of range" );
        
        }
        { //::SireMol::SegEditor::remove
        
            typedef ::SireMol::MolStructureEditor ( ::SireMol::SegEditor::*remove_function_type)(  ) const;
            remove_function_type remove_function_value( &::SireMol::SegEditor::remove );
            
            SegEditor_exposer.def( 
                "remove"
                , remove_function_value
                , "Complete remove this Segment, and return an editor\nfor the molecule that contained it" );
        
        }
        { //::SireMol::SegEditor::remove
        
            typedef ::SireMol::SegStructureEditor ( ::SireMol::SegEditor::*remove_function_type)( ::SireMol::AtomID const & ) const;
            remove_function_type remove_function_value( &::SireMol::SegEditor::remove );
            
            SegEditor_exposer.def( 
                "remove"
                , remove_function_value
                , ( bp::arg("atomid") )
                , "Completely remove all atoms that match the ID atomid from\nthis Segment\nThrow: SireMol::missing_atom\nThrow: SireError::invalid_index\n" );
        
        }
        { //::SireMol::SegEditor::remove
        
            typedef ::SireMol::SegStructureEditor ( ::SireMol::SegEditor::*remove_function_type)( int ) const;
            remove_function_type remove_function_value( &::SireMol::SegEditor::remove );
            
            SegEditor_exposer.def( 
                "remove"
                , remove_function_value
                , ( bp::arg("i") )
                , "Remove the ith atom from this Segment\nThrow: SireError::invalid_index\n" );
        
        }
        { //::SireMol::SegEditor::rename
        
            typedef ::SireMol::SegEditor & ( ::SireMol::SegEditor::*rename_function_type)( ::SireMol::SegName const & ) ;
            rename_function_type rename_function_value( &::SireMol::SegEditor::rename );
            
            SegEditor_exposer.def( 
                "rename"
                , rename_function_value
                , ( bp::arg("name") )
                , bp::return_self< >()
                , "Rename this Segment to newname" );
        
        }
        { //::SireMol::SegEditor::toString
        
            typedef ::QString ( ::SireMol::SegEditor::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireMol::SegEditor::toString );
            
            SegEditor_exposer.def( 
                "toString"
                , toString_function_value
                , "Return a string representation of this editor" );
        
        }
        { //::SireMol::SegEditor::transfer
        
            typedef ::SireMol::SegStructureEditor ( ::SireMol::SegEditor::*transfer_function_type)( ::SireMol::AtomID const &,::SireMol::SegID const & ) const;
            transfer_function_type transfer_function_value( &::SireMol::SegEditor::transfer );
            
            SegEditor_exposer.def( 
                "transfer"
                , transfer_function_value
                , ( bp::arg("atomid"), bp::arg("segid") )
                , "Transfer all atoms that match the ID atomid in this Segment\nto the Segment that matches the ID cgid\nThrow: SireMol::missing_atom\nThrow: SireMol::missing_segment\nThrow: SireMol::duplicate_segment\nThrow: SireError::invalid_index\n" );
        
        }
        { //::SireMol::SegEditor::transfer
        
            typedef ::SireMol::SegStructureEditor ( ::SireMol::SegEditor::*transfer_function_type)( int,::SireMol::SegID const & ) const;
            transfer_function_type transfer_function_value( &::SireMol::SegEditor::transfer );
            
            SegEditor_exposer.def( 
                "transfer"
                , transfer_function_value
                , ( bp::arg("i"), bp::arg("segid") )
                , "Transfer the ith atom of this Segment into the Segment identified\nby the ID cgid\nThrow: SireError::invalid_index\n" );
        
        }
        { //::SireMol::SegEditor::transferAll
        
            typedef ::SireMol::SegStructureEditor ( ::SireMol::SegEditor::*transferAll_function_type)( ::SireMol::SegID const & ) const;
            transferAll_function_type transferAll_function_value( &::SireMol::SegEditor::transferAll );
            
            SegEditor_exposer.def( 
                "transferAll"
                , transferAll_function_value
                , ( bp::arg("segid") )
                , "Completely transfer all of the atoms in this Segment to\nthe Segment that matches the ID cgid\nThrow: SireMol::missing_segment\nThrow: SireMol::duplicate_segment\nThrow: SireError::invalid_index\n" );
        
        }
        { //::SireMol::SegEditor::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMol::SegEditor::typeName );
            
            SegEditor_exposer.def( 
                "typeName"
                , typeName_function_value
                , "" );
        
        }
        SegEditor_exposer.staticmethod( "typeName" );
        SegEditor_exposer.def( "__copy__", &__copy__);
        SegEditor_exposer.def( "__deepcopy__", &__copy__);
        SegEditor_exposer.def( "clone", &__copy__);
        SegEditor_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMol::SegEditor >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        SegEditor_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMol::SegEditor >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        SegEditor_exposer.def( "__str__", &__str__< ::SireMol::SegEditor > );
        SegEditor_exposer.def( "__repr__", &__str__< ::SireMol::SegEditor > );
        SegEditor_exposer.def( "__len__", &__len_size< ::SireMol::SegEditor > );
    }

}
