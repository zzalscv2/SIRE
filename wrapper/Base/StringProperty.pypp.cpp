// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "StringProperty.pypp.hpp"

namespace bp = boost::python;

#include "SireError/errors.h"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "SireStream/sharestrings.h"

#include "booleanproperty.h"

#include "numberproperty.h"

#include "stringproperty.h"

#include <QDebug>

#include "stringproperty.h"

SireBase::StringProperty __copy__(const SireBase::StringProperty &other){ return SireBase::StringProperty(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

void register_StringProperty_class(){

    { //::SireBase::StringProperty
        typedef bp::class_< SireBase::StringProperty, bp::bases< SireBase::Property > > StringProperty_exposer_t;
        StringProperty_exposer_t StringProperty_exposer = StringProperty_exposer_t( "StringProperty", "This class provides a thin Property wrapper around a QString\n\nAuthor: Christopher Woods\n", bp::init< >("Constructor") );
        bp::scope StringProperty_scope( StringProperty_exposer );
        StringProperty_exposer.def( bp::init< QString const & >(( bp::arg("s") ), "Construct from the passed string") );
        StringProperty_exposer.def( bp::init< double >(( bp::arg("value") ), "Construct from the the passed number") );
        StringProperty_exposer.def( bp::init< SireBase::Property const & >(( bp::arg("other") ), "Cast from the passed property") );
        StringProperty_exposer.def( bp::init< SireBase::StringProperty const & >(( bp::arg("other") ), "Copy constructor") );
        { //::SireBase::StringProperty::asABoolean
        
            typedef bool ( ::SireBase::StringProperty::*asABoolean_function_type)(  ) const;
            asABoolean_function_type asABoolean_function_value( &::SireBase::StringProperty::asABoolean );
            
            StringProperty_exposer.def( 
                "asABoolean"
                , asABoolean_function_value
                , "" );
        
        }
        { //::SireBase::StringProperty::asADouble
        
            typedef double ( ::SireBase::StringProperty::*asADouble_function_type)(  ) const;
            asADouble_function_type asADouble_function_value( &::SireBase::StringProperty::asADouble );
            
            StringProperty_exposer.def( 
                "asADouble"
                , asADouble_function_value
                , "" );
        
        }
        { //::SireBase::StringProperty::asAString
        
            typedef ::QString ( ::SireBase::StringProperty::*asAString_function_type)(  ) const;
            asAString_function_type asAString_function_value( &::SireBase::StringProperty::asAString );
            
            StringProperty_exposer.def( 
                "asAString"
                , asAString_function_value
                , "" );
        
        }
        { //::SireBase::StringProperty::asAnInteger
        
            typedef int ( ::SireBase::StringProperty::*asAnInteger_function_type)(  ) const;
            asAnInteger_function_type asAnInteger_function_value( &::SireBase::StringProperty::asAnInteger );
            
            StringProperty_exposer.def( 
                "asAnInteger"
                , asAnInteger_function_value
                , "" );
        
        }
        { //::SireBase::StringProperty::isABoolean
        
            typedef bool ( ::SireBase::StringProperty::*isABoolean_function_type)(  ) const;
            isABoolean_function_type isABoolean_function_value( &::SireBase::StringProperty::isABoolean );
            
            StringProperty_exposer.def( 
                "isABoolean"
                , isABoolean_function_value
                , "" );
        
        }
        { //::SireBase::StringProperty::isADouble
        
            typedef bool ( ::SireBase::StringProperty::*isADouble_function_type)(  ) const;
            isADouble_function_type isADouble_function_value( &::SireBase::StringProperty::isADouble );
            
            StringProperty_exposer.def( 
                "isADouble"
                , isADouble_function_value
                , "" );
        
        }
        { //::SireBase::StringProperty::isAString
        
            typedef bool ( ::SireBase::StringProperty::*isAString_function_type)(  ) const;
            isAString_function_type isAString_function_value( &::SireBase::StringProperty::isAString );
            
            StringProperty_exposer.def( 
                "isAString"
                , isAString_function_value
                , "" );
        
        }
        { //::SireBase::StringProperty::isAnInteger
        
            typedef bool ( ::SireBase::StringProperty::*isAnInteger_function_type)(  ) const;
            isAnInteger_function_type isAnInteger_function_value( &::SireBase::StringProperty::isAnInteger );
            
            StringProperty_exposer.def( 
                "isAnInteger"
                , isAnInteger_function_value
                , "" );
        
        }
        StringProperty_exposer.def( bp::self != bp::self );
        { //::SireBase::StringProperty::operator=
        
            typedef ::SireBase::StringProperty & ( ::SireBase::StringProperty::*assign_function_type)( ::SireBase::StringProperty const & ) ;
            assign_function_type assign_function_value( &::SireBase::StringProperty::operator= );
            
            StringProperty_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        StringProperty_exposer.def( bp::self == bp::self );
        { //::SireBase::StringProperty::toString
        
            typedef ::QString ( ::SireBase::StringProperty::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireBase::StringProperty::toString );
            
            StringProperty_exposer.def( 
                "toString"
                , toString_function_value
                , "" );
        
        }
        { //::SireBase::StringProperty::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireBase::StringProperty::typeName );
            
            StringProperty_exposer.def( 
                "typeName"
                , typeName_function_value
                , "" );
        
        }
        { //::SireBase::StringProperty::value
        
            typedef ::QString ( ::SireBase::StringProperty::*value_function_type)(  ) const;
            value_function_type value_function_value( &::SireBase::StringProperty::value );
            
            StringProperty_exposer.def( 
                "value"
                , value_function_value
                , "Return the actual string" );
        
        }
        StringProperty_exposer.staticmethod( "typeName" );
        StringProperty_exposer.def( "__copy__", &__copy__);
        StringProperty_exposer.def( "__deepcopy__", &__copy__);
        StringProperty_exposer.def( "clone", &__copy__);
        StringProperty_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireBase::StringProperty >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        StringProperty_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireBase::StringProperty >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        StringProperty_exposer.def( "__str__", &__str__< ::SireBase::StringProperty > );
        StringProperty_exposer.def( "__repr__", &__str__< ::SireBase::StringProperty > );
    }

}
