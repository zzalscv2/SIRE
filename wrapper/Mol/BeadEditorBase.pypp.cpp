// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "BeadEditorBase.pypp.hpp"

namespace bp = boost::python;

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "beadeditor.h"

#include "beadeditor.h"

#include "beadproperty.hpp"

SireMol::BeadEditorBase& set_Metadata_SireMol_BeadStringProperty_function1(
                                  SireMol::BeadEditorBase &molview,
                                   const QString &metakey, const QString &p)
                                   { return molview.setMetadata< QString >(metakey, p); }

SireMol::BeadEditorBase& set_Metadata_SireMol_BeadStringProperty_function2(
                                  SireMol::BeadEditorBase &molview,
                                   const QString &key, const QString &metakey, const QString &p)
                                   { return molview.setMetadata< QString >(key, metakey, p); }

SireMol::BeadEditorBase& set_Metadata_SireMol_BeadIntProperty_function1(
                                  SireMol::BeadEditorBase &molview,
                                   const QString &metakey, const qint64 &p)
                                   { return molview.setMetadata< qint64 >(metakey, p); }

SireMol::BeadEditorBase& set_Metadata_SireMol_BeadIntProperty_function2(
                                  SireMol::BeadEditorBase &molview,
                                   const QString &key, const QString &metakey, const qint64 &p)
                                   { return molview.setMetadata< qint64 >(key, metakey, p); }

SireMol::BeadEditorBase& set_Metadata_SireMol_BeadFloatProperty_function1(
                                  SireMol::BeadEditorBase &molview,
                                   const QString &metakey, const double &p)
                                   { return molview.setMetadata< double >(metakey, p); }

SireMol::BeadEditorBase& set_Metadata_SireMol_BeadFloatProperty_function2(
                                  SireMol::BeadEditorBase &molview,
                                   const QString &key, const QString &metakey, const double &p)
                                   { return molview.setMetadata< double >(key, metakey, p); }

SireMol::BeadEditorBase& set_Metadata_SireMol_BeadVariantProperty_function1(
                                  SireMol::BeadEditorBase &molview,
                                   const QString &metakey, const QVariant &p)
                                   { return molview.setMetadata< QVariant >(metakey, p); }

SireMol::BeadEditorBase& set_Metadata_SireMol_BeadVariantProperty_function2(
                                  SireMol::BeadEditorBase &molview,
                                   const QString &key, const QString &metakey, const QVariant &p)
                                   { return molview.setMetadata< QVariant >(key, metakey, p); }

#include "Helpers/str.hpp"

#include "Helpers/len.hpp"

void register_BeadEditorBase_class(){

    { //::SireMol::Editor< SireMol::BeadEditor, SireMol::Bead >
        typedef bp::class_< SireMol::Editor< SireMol::BeadEditor, SireMol::Bead >, bp::bases< SireMol::Bead, SireMol::MoleculeView, SireBase::Property >, boost::noncopyable > BeadEditorBase_exposer_t;
        BeadEditorBase_exposer_t BeadEditorBase_exposer = BeadEditorBase_exposer_t( "BeadEditorBase", bp::no_init );
        bp::scope BeadEditorBase_scope( BeadEditorBase_exposer );
        { //::SireMol::Editor< SireMol::BeadEditor, SireMol::Bead >::atom
        
            typedef SireMol::Editor< SireMol::BeadEditor, SireMol::Bead > exported_class_t;
            typedef ::SireMol::AtomEditor ( ::SireMol::Editor< SireMol::BeadEditor, SireMol::Bead >::*atom_function_type )(  ) ;
            atom_function_type atom_function_value( &::SireMol::Editor< SireMol::BeadEditor, SireMol::Bead >::atom );
            
            BeadEditorBase_exposer.def( 
                "atom"
                , atom_function_value );
        
        }
        { //::SireMol::Editor< SireMol::BeadEditor, SireMol::Bead >::atom
        
            typedef SireMol::Editor< SireMol::BeadEditor, SireMol::Bead > exported_class_t;
            typedef ::SireMol::AtomEditor ( ::SireMol::Editor< SireMol::BeadEditor, SireMol::Bead >::*atom_function_type )( ::SireMol::AtomID const &,::SireBase::PropertyMap const & ) ;
            atom_function_type atom_function_value( &::SireMol::Editor< SireMol::BeadEditor, SireMol::Bead >::atom );
            
            BeadEditorBase_exposer.def( 
                "atom"
                , atom_function_value
                , ( bp::arg("atomid"), bp::arg("map")=SireBase::PropertyMap() ) );
        
        }
        { //::SireMol::Editor< SireMol::BeadEditor, SireMol::Bead >::chain
        
            typedef SireMol::Editor< SireMol::BeadEditor, SireMol::Bead > exported_class_t;
            typedef ::SireMol::ChainEditor ( ::SireMol::Editor< SireMol::BeadEditor, SireMol::Bead >::*chain_function_type )(  ) ;
            chain_function_type chain_function_value( &::SireMol::Editor< SireMol::BeadEditor, SireMol::Bead >::chain );
            
            BeadEditorBase_exposer.def( 
                "chain"
                , chain_function_value );
        
        }
        { //::SireMol::Editor< SireMol::BeadEditor, SireMol::Bead >::chain
        
            typedef SireMol::Editor< SireMol::BeadEditor, SireMol::Bead > exported_class_t;
            typedef ::SireMol::ChainEditor ( ::SireMol::Editor< SireMol::BeadEditor, SireMol::Bead >::*chain_function_type )( ::SireMol::ChainID const &,::SireBase::PropertyMap const & ) ;
            chain_function_type chain_function_value( &::SireMol::Editor< SireMol::BeadEditor, SireMol::Bead >::chain );
            
            BeadEditorBase_exposer.def( 
                "chain"
                , chain_function_value
                , ( bp::arg("chainid"), bp::arg("map")=SireBase::PropertyMap() ) );
        
        }
        { //::SireMol::Editor< SireMol::BeadEditor, SireMol::Bead >::cutGroup
        
            typedef SireMol::Editor< SireMol::BeadEditor, SireMol::Bead > exported_class_t;
            typedef ::SireMol::CGEditor ( ::SireMol::Editor< SireMol::BeadEditor, SireMol::Bead >::*cutGroup_function_type )(  ) ;
            cutGroup_function_type cutGroup_function_value( &::SireMol::Editor< SireMol::BeadEditor, SireMol::Bead >::cutGroup );
            
            BeadEditorBase_exposer.def( 
                "cutGroup"
                , cutGroup_function_value );
        
        }
        { //::SireMol::Editor< SireMol::BeadEditor, SireMol::Bead >::cutGroup
        
            typedef SireMol::Editor< SireMol::BeadEditor, SireMol::Bead > exported_class_t;
            typedef ::SireMol::CGEditor ( ::SireMol::Editor< SireMol::BeadEditor, SireMol::Bead >::*cutGroup_function_type )( ::SireMol::CGID const &,::SireBase::PropertyMap const & ) ;
            cutGroup_function_type cutGroup_function_value( &::SireMol::Editor< SireMol::BeadEditor, SireMol::Bead >::cutGroup );
            
            BeadEditorBase_exposer.def( 
                "cutGroup"
                , cutGroup_function_value
                , ( bp::arg("cgid"), bp::arg("map")=SireBase::PropertyMap() ) );
        
        }
        { //::SireMol::Editor< SireMol::BeadEditor, SireMol::Bead >::molecule
        
            typedef SireMol::Editor< SireMol::BeadEditor, SireMol::Bead > exported_class_t;
            typedef ::SireMol::MolEditor ( ::SireMol::Editor< SireMol::BeadEditor, SireMol::Bead >::*molecule_function_type )(  ) ;
            molecule_function_type molecule_function_value( &::SireMol::Editor< SireMol::BeadEditor, SireMol::Bead >::molecule );
            
            BeadEditorBase_exposer.def( 
                "molecule"
                , molecule_function_value );
        
        }
        { //::SireMol::Editor< SireMol::BeadEditor, SireMol::Bead >::operator=
        
            typedef SireMol::Editor< SireMol::BeadEditor, SireMol::Bead > exported_class_t;
            typedef ::SireMol::Editor< SireMol::BeadEditor, SireMol::Bead > & ( ::SireMol::Editor< SireMol::BeadEditor, SireMol::Bead >::*assign_function_type )( ::SireMol::Editor< SireMol::BeadEditor, SireMol::Bead > const & ) ;
            assign_function_type assign_function_value( &::SireMol::Editor< SireMol::BeadEditor, SireMol::Bead >::operator= );
            
            BeadEditorBase_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >() );
        
        }
        { //::SireMol::Editor< SireMol::BeadEditor, SireMol::Bead >::operator=
        
            typedef SireMol::Editor< SireMol::BeadEditor, SireMol::Bead > exported_class_t;
            typedef ::SireMol::Editor< SireMol::BeadEditor, SireMol::Bead > & ( ::SireMol::Editor< SireMol::BeadEditor, SireMol::Bead >::*assign_function_type )( ::SireMol::Bead const & ) ;
            assign_function_type assign_function_value( &::SireMol::Editor< SireMol::BeadEditor, SireMol::Bead >::operator= );
            
            BeadEditorBase_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >() );
        
        }
        { //::SireMol::Editor< SireMol::BeadEditor, SireMol::Bead >::removeMetadata
        
            typedef SireMol::Editor< SireMol::BeadEditor, SireMol::Bead > exported_class_t;
            typedef ::SireMol::BeadEditor & ( ::SireMol::Editor< SireMol::BeadEditor, SireMol::Bead >::*removeMetadata_function_type )( ::SireBase::PropertyName const & ) ;
            removeMetadata_function_type removeMetadata_function_value( &::SireMol::Editor< SireMol::BeadEditor, SireMol::Bead >::removeMetadata );
            
            BeadEditorBase_exposer.def( 
                "removeMetadata"
                , removeMetadata_function_value
                , ( bp::arg("metakey") )
                , bp::return_self< >() );
        
        }
        { //::SireMol::Editor< SireMol::BeadEditor, SireMol::Bead >::removeMetadata
        
            typedef SireMol::Editor< SireMol::BeadEditor, SireMol::Bead > exported_class_t;
            typedef ::SireMol::BeadEditor & ( ::SireMol::Editor< SireMol::BeadEditor, SireMol::Bead >::*removeMetadata_function_type )( ::SireBase::PropertyName const &,::SireBase::PropertyName const & ) ;
            removeMetadata_function_type removeMetadata_function_value( &::SireMol::Editor< SireMol::BeadEditor, SireMol::Bead >::removeMetadata );
            
            BeadEditorBase_exposer.def( 
                "removeMetadata"
                , removeMetadata_function_value
                , ( bp::arg("key"), bp::arg("metakey") )
                , bp::return_self< >() );
        
        }
        { //::SireMol::Editor< SireMol::BeadEditor, SireMol::Bead >::removeProperty
        
            typedef SireMol::Editor< SireMol::BeadEditor, SireMol::Bead > exported_class_t;
            typedef ::SireMol::BeadEditor & ( ::SireMol::Editor< SireMol::BeadEditor, SireMol::Bead >::*removeProperty_function_type )( ::SireBase::PropertyName const & ) ;
            removeProperty_function_type removeProperty_function_value( &::SireMol::Editor< SireMol::BeadEditor, SireMol::Bead >::removeProperty );
            
            BeadEditorBase_exposer.def( 
                "removeProperty"
                , removeProperty_function_value
                , ( bp::arg("key") )
                , bp::return_self< >() );
        
        }
        { //::SireMol::Editor< SireMol::BeadEditor, SireMol::Bead >::residue
        
            typedef SireMol::Editor< SireMol::BeadEditor, SireMol::Bead > exported_class_t;
            typedef ::SireMol::ResEditor ( ::SireMol::Editor< SireMol::BeadEditor, SireMol::Bead >::*residue_function_type )(  ) ;
            residue_function_type residue_function_value( &::SireMol::Editor< SireMol::BeadEditor, SireMol::Bead >::residue );
            
            BeadEditorBase_exposer.def( 
                "residue"
                , residue_function_value );
        
        }
        { //::SireMol::Editor< SireMol::BeadEditor, SireMol::Bead >::residue
        
            typedef SireMol::Editor< SireMol::BeadEditor, SireMol::Bead > exported_class_t;
            typedef ::SireMol::ResEditor ( ::SireMol::Editor< SireMol::BeadEditor, SireMol::Bead >::*residue_function_type )( ::SireMol::ResID const &,::SireBase::PropertyMap const & ) ;
            residue_function_type residue_function_value( &::SireMol::Editor< SireMol::BeadEditor, SireMol::Bead >::residue );
            
            BeadEditorBase_exposer.def( 
                "residue"
                , residue_function_value
                , ( bp::arg("resid"), bp::arg("map")=SireBase::PropertyMap() ) );
        
        }
        { //::SireMol::Editor< SireMol::BeadEditor, SireMol::Bead >::segment
        
            typedef SireMol::Editor< SireMol::BeadEditor, SireMol::Bead > exported_class_t;
            typedef ::SireMol::SegEditor ( ::SireMol::Editor< SireMol::BeadEditor, SireMol::Bead >::*segment_function_type )(  ) ;
            segment_function_type segment_function_value( &::SireMol::Editor< SireMol::BeadEditor, SireMol::Bead >::segment );
            
            BeadEditorBase_exposer.def( 
                "segment"
                , segment_function_value );
        
        }
        { //::SireMol::Editor< SireMol::BeadEditor, SireMol::Bead >::segment
        
            typedef SireMol::Editor< SireMol::BeadEditor, SireMol::Bead > exported_class_t;
            typedef ::SireMol::SegEditor ( ::SireMol::Editor< SireMol::BeadEditor, SireMol::Bead >::*segment_function_type )( ::SireMol::SegID const &,::SireBase::PropertyMap const & ) ;
            segment_function_type segment_function_value( &::SireMol::Editor< SireMol::BeadEditor, SireMol::Bead >::segment );
            
            BeadEditorBase_exposer.def( 
                "segment"
                , segment_function_value
                , ( bp::arg("segid"), bp::arg("map")=SireBase::PropertyMap() ) );
        
        }
        { //::SireMol::Editor< SireMol::BeadEditor, SireMol::Bead >::select
        
            typedef SireMol::Editor< SireMol::BeadEditor, SireMol::Bead > exported_class_t;
            typedef ::SireMol::AtomEditor ( ::SireMol::Editor< SireMol::BeadEditor, SireMol::Bead >::*select_function_type )( ::SireMol::AtomID const &,::SireBase::PropertyMap const & ) ;
            select_function_type select_function_value( &::SireMol::Editor< SireMol::BeadEditor, SireMol::Bead >::select );
            
            BeadEditorBase_exposer.def( 
                "select"
                , select_function_value
                , ( bp::arg("atomid"), bp::arg("map")=SireBase::PropertyMap() ) );
        
        }
        { //::SireMol::Editor< SireMol::BeadEditor, SireMol::Bead >::select
        
            typedef SireMol::Editor< SireMol::BeadEditor, SireMol::Bead > exported_class_t;
            typedef ::SireMol::CGEditor ( ::SireMol::Editor< SireMol::BeadEditor, SireMol::Bead >::*select_function_type )( ::SireMol::CGID const &,::SireBase::PropertyMap const & ) ;
            select_function_type select_function_value( &::SireMol::Editor< SireMol::BeadEditor, SireMol::Bead >::select );
            
            BeadEditorBase_exposer.def( 
                "select"
                , select_function_value
                , ( bp::arg("cgid"), bp::arg("map")=SireBase::PropertyMap() ) );
        
        }
        { //::SireMol::Editor< SireMol::BeadEditor, SireMol::Bead >::select
        
            typedef SireMol::Editor< SireMol::BeadEditor, SireMol::Bead > exported_class_t;
            typedef ::SireMol::ResEditor ( ::SireMol::Editor< SireMol::BeadEditor, SireMol::Bead >::*select_function_type )( ::SireMol::ResID const &,::SireBase::PropertyMap const & ) ;
            select_function_type select_function_value( &::SireMol::Editor< SireMol::BeadEditor, SireMol::Bead >::select );
            
            BeadEditorBase_exposer.def( 
                "select"
                , select_function_value
                , ( bp::arg("resid"), bp::arg("map")=SireBase::PropertyMap() ) );
        
        }
        { //::SireMol::Editor< SireMol::BeadEditor, SireMol::Bead >::select
        
            typedef SireMol::Editor< SireMol::BeadEditor, SireMol::Bead > exported_class_t;
            typedef ::SireMol::ChainEditor ( ::SireMol::Editor< SireMol::BeadEditor, SireMol::Bead >::*select_function_type )( ::SireMol::ChainID const &,::SireBase::PropertyMap const & ) ;
            select_function_type select_function_value( &::SireMol::Editor< SireMol::BeadEditor, SireMol::Bead >::select );
            
            BeadEditorBase_exposer.def( 
                "select"
                , select_function_value
                , ( bp::arg("chainid"), bp::arg("map")=SireBase::PropertyMap() ) );
        
        }
        { //::SireMol::Editor< SireMol::BeadEditor, SireMol::Bead >::select
        
            typedef SireMol::Editor< SireMol::BeadEditor, SireMol::Bead > exported_class_t;
            typedef ::SireMol::SegEditor ( ::SireMol::Editor< SireMol::BeadEditor, SireMol::Bead >::*select_function_type )( ::SireMol::SegID const &,::SireBase::PropertyMap const & ) ;
            select_function_type select_function_value( &::SireMol::Editor< SireMol::BeadEditor, SireMol::Bead >::select );
            
            BeadEditorBase_exposer.def( 
                "select"
                , select_function_value
                , ( bp::arg("segid"), bp::arg("map")=SireBase::PropertyMap() ) );
        
        }
        BeadEditorBase_exposer.def( "_set_property_QString", 
                                           &SireMol::BeadEditorBase::setProperty< QString >, bp::return_self< >() );
        BeadEditorBase_exposer.def( "_set_metadata_QString", &set_Metadata_SireMol_BeadStringProperty_function1, bp::return_self< >());
        BeadEditorBase_exposer.def( "_set_metadata_QString", &set_Metadata_SireMol_BeadStringProperty_function2, bp::return_self< >());
        BeadEditorBase_exposer.def( "_set_property_qint64", 
                                           &SireMol::BeadEditorBase::setProperty< qint64 >, bp::return_self< >() );
        BeadEditorBase_exposer.def( "_set_metadata_qint64", &set_Metadata_SireMol_BeadIntProperty_function1, bp::return_self< >());
        BeadEditorBase_exposer.def( "_set_metadata_qint64", &set_Metadata_SireMol_BeadIntProperty_function2, bp::return_self< >());
        BeadEditorBase_exposer.def( "_set_property_double", 
                                           &SireMol::BeadEditorBase::setProperty< double >, bp::return_self< >() );
        BeadEditorBase_exposer.def( "_set_metadata_double", &set_Metadata_SireMol_BeadFloatProperty_function1, bp::return_self< >());
        BeadEditorBase_exposer.def( "_set_metadata_double", &set_Metadata_SireMol_BeadFloatProperty_function2, bp::return_self< >());
        BeadEditorBase_exposer.def( "_set_property_QVariant", 
                                           &SireMol::BeadEditorBase::setProperty< QVariant >, bp::return_self< >() );
        BeadEditorBase_exposer.def( "_set_metadata_QVariant", &set_Metadata_SireMol_BeadVariantProperty_function1, bp::return_self< >());
        BeadEditorBase_exposer.def( "_set_metadata_QVariant", &set_Metadata_SireMol_BeadVariantProperty_function2, bp::return_self< >());
        BeadEditorBase_exposer.def( "__str__", &__str__< ::SireMol::Editor<SireMol::BeadEditor, SireMol::Bead> > );
        BeadEditorBase_exposer.def( "__repr__", &__str__< ::SireMol::Editor<SireMol::BeadEditor, SireMol::Bead> > );
        BeadEditorBase_exposer.def( "__len__", &__len_size< ::SireMol::Editor<SireMol::BeadEditor, SireMol::Bead> > );
    }

}