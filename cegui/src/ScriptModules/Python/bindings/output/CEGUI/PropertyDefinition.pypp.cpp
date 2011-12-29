// This file has been generated by Py++.

#include "boost/python.hpp"
#include "python_CEGUI.h"
#include "PropertyDefinition.pypp.hpp"

namespace bp = boost::python;

struct PropertyDefinition_wrapper : CEGUI::PropertyDefinition, bp::wrapper< CEGUI::PropertyDefinition > {

    PropertyDefinition_wrapper(CEGUI::PropertyDefinition const & arg )
    : CEGUI::PropertyDefinition( arg )
      , bp::wrapper< CEGUI::PropertyDefinition >(){
        // copy constructor
        
    }

    PropertyDefinition_wrapper(::CEGUI::String const & name, ::CEGUI::String const & initialValue, bool redrawOnWrite, bool layoutOnWrite )
    : CEGUI::PropertyDefinition( boost::ref(name), boost::ref(initialValue), redrawOnWrite, layoutOnWrite )
      , bp::wrapper< CEGUI::PropertyDefinition >(){
        // constructor
    
    }

    PropertyDefinition_wrapper(::CEGUI::String const & name, ::CEGUI::String const & initialValue, ::CEGUI::String const & help, bool redrawOnWrite, bool layoutOnWrite )
    : CEGUI::PropertyDefinition( boost::ref(name), boost::ref(initialValue), boost::ref(help), redrawOnWrite, layoutOnWrite )
      , bp::wrapper< CEGUI::PropertyDefinition >(){
        // constructor
    
    }

    virtual ::CEGUI::String get( ::CEGUI::PropertyReceiver const * receiver ) const  {
        if( bp::override func_get = this->get_override( "get" ) )
            return func_get( boost::python::ptr(receiver) );
        else{
            return this->CEGUI::PropertyDefinition::get( boost::python::ptr(receiver) );
        }
    }
    
    ::CEGUI::String default_get( ::CEGUI::PropertyReceiver const * receiver ) const  {
        return CEGUI::PropertyDefinition::get( boost::python::ptr(receiver) );
    }

    virtual void set( ::CEGUI::PropertyReceiver * receiver, ::CEGUI::String const & value ) {
        if( bp::override func_set = this->get_override( "set" ) )
            func_set( boost::python::ptr(receiver), boost::ref(value) );
        else{
            this->CEGUI::PropertyDefinition::set( boost::python::ptr(receiver), boost::ref(value) );
        }
    }
    
    void default_set( ::CEGUI::PropertyReceiver * receiver, ::CEGUI::String const & value ) {
        CEGUI::PropertyDefinition::set( boost::python::ptr(receiver), boost::ref(value) );
    }

    virtual void writeXMLElementType( ::CEGUI::XMLSerializer & xml_stream ) const {
        if( bp::override func_writeXMLElementType = this->get_override( "writeXMLElementType" ) )
            func_writeXMLElementType( boost::ref(xml_stream) );
        else{
            this->CEGUI::PropertyDefinition::writeXMLElementType( boost::ref(xml_stream) );
        }
    }
    
    virtual void default_writeXMLElementType( ::CEGUI::XMLSerializer & xml_stream ) const {
        CEGUI::PropertyDefinition::writeXMLElementType( boost::ref(xml_stream) );
    }

    virtual ::CEGUI::String getDefault( ::CEGUI::PropertyReceiver const * receiver ) const  {
        if( bp::override func_getDefault = this->get_override( "getDefault" ) )
            return func_getDefault( boost::python::ptr(receiver) );
        else{
            return this->CEGUI::Property::getDefault( boost::python::ptr(receiver) );
        }
    }
    
    ::CEGUI::String default_getDefault( ::CEGUI::PropertyReceiver const * receiver ) const  {
        return CEGUI::Property::getDefault( boost::python::ptr(receiver) );
    }

    virtual bool isDefault( ::CEGUI::PropertyReceiver const * receiver ) const  {
        if( bp::override func_isDefault = this->get_override( "isDefault" ) )
            return func_isDefault( boost::python::ptr(receiver) );
        else{
            return this->CEGUI::Property::isDefault( boost::python::ptr(receiver) );
        }
    }
    
    bool default_isDefault( ::CEGUI::PropertyReceiver const * receiver ) const  {
        return CEGUI::Property::isDefault( boost::python::ptr(receiver) );
    }

    virtual bool isReadable(  ) const  {
        if( bp::override func_isReadable = this->get_override( "isReadable" ) )
            return func_isReadable(  );
        else{
            return this->CEGUI::Property::isReadable(  );
        }
    }
    
    bool default_isReadable(  ) const  {
        return CEGUI::Property::isReadable( );
    }

    virtual bool isWritable(  ) const  {
        if( bp::override func_isWritable = this->get_override( "isWritable" ) )
            return func_isWritable(  );
        else{
            return this->CEGUI::Property::isWritable(  );
        }
    }
    
    bool default_isWritable(  ) const  {
        return CEGUI::Property::isWritable( );
    }

    virtual void writeXMLAttributes( ::CEGUI::XMLSerializer & xml_stream ) const {
        if( bp::override func_writeXMLAttributes = this->get_override( "writeXMLAttributes" ) )
            func_writeXMLAttributes( boost::ref(xml_stream) );
        else{
            this->CEGUI::PropertyDefinitionBase::writeXMLAttributes( boost::ref(xml_stream) );
        }
    }
    
    virtual void default_writeXMLAttributes( ::CEGUI::XMLSerializer & xml_stream ) const {
        CEGUI::PropertyDefinitionBase::writeXMLAttributes( boost::ref(xml_stream) );
    }

    virtual void writeXMLToStream( ::CEGUI::PropertyReceiver const * receiver, ::CEGUI::XMLSerializer & xml_stream ) const  {
        if( bp::override func_writeXMLToStream = this->get_override( "writeXMLToStream" ) )
            func_writeXMLToStream( boost::python::ptr(receiver), boost::ref(xml_stream) );
        else{
            this->CEGUI::PropertyDefinitionBase::writeXMLToStream( boost::python::ptr(receiver), boost::ref(xml_stream) );
        }
    }
    
    void default_writeXMLToStream( ::CEGUI::PropertyReceiver const * receiver, ::CEGUI::XMLSerializer & xml_stream ) const  {
        CEGUI::PropertyDefinitionBase::writeXMLToStream( boost::python::ptr(receiver), boost::ref(xml_stream) );
    }

};

void register_PropertyDefinition_class(){

    { //::CEGUI::PropertyDefinition
        typedef bp::class_< PropertyDefinition_wrapper, bp::bases< CEGUI::PropertyDefinitionBase > > PropertyDefinition_exposer_t;
        PropertyDefinition_exposer_t PropertyDefinition_exposer = PropertyDefinition_exposer_t( "PropertyDefinition", "*!\n\
        \n\
            Class representing a generic getset property.\n\
        *\n", bp::init< CEGUI::String const &, CEGUI::String const &, bool, bool >(( bp::arg("name"), bp::arg("initialValue"), bp::arg("redrawOnWrite"), bp::arg("layoutOnWrite") ), "*!\n\
         deprecated\n\
            This version of the constructor is deprecated in favour of the\n\
            version taking a help string.\n\
        *\n") );
        bp::scope PropertyDefinition_scope( PropertyDefinition_exposer );
        PropertyDefinition_exposer.def( bp::init< CEGUI::String const &, CEGUI::String const &, CEGUI::String const &, bool, bool >(( bp::arg("name"), bp::arg("initialValue"), bp::arg("help"), bp::arg("redrawOnWrite"), bp::arg("layoutOnWrite") )) );
        { //::CEGUI::PropertyDefinition::get
        
            typedef ::CEGUI::String ( ::CEGUI::PropertyDefinition::*get_function_type )( ::CEGUI::PropertyReceiver const * ) const;
            typedef ::CEGUI::String ( PropertyDefinition_wrapper::*default_get_function_type )( ::CEGUI::PropertyReceiver const * ) const;
            
            PropertyDefinition_exposer.def( 
                "get"
                , get_function_type(&::CEGUI::PropertyDefinition::get)
                , default_get_function_type(&PropertyDefinition_wrapper::default_get)
                , ( bp::arg("receiver") ) );
        
        }
        { //::CEGUI::PropertyDefinition::set
        
            typedef void ( ::CEGUI::PropertyDefinition::*set_function_type )( ::CEGUI::PropertyReceiver *,::CEGUI::String const & ) ;
            typedef void ( PropertyDefinition_wrapper::*default_set_function_type )( ::CEGUI::PropertyReceiver *,::CEGUI::String const & ) ;
            
            PropertyDefinition_exposer.def( 
                "set"
                , set_function_type(&::CEGUI::PropertyDefinition::set)
                , default_set_function_type(&PropertyDefinition_wrapper::default_set)
                , ( bp::arg("receiver"), bp::arg("value") ) );
        
        }
        { //::CEGUI::PropertyDefinition::writeXMLElementType
        
            typedef void ( PropertyDefinition_wrapper::*writeXMLElementType_function_type )( ::CEGUI::XMLSerializer & ) const;
            
            PropertyDefinition_exposer.def( 
                "writeXMLElementType"
                , writeXMLElementType_function_type( &PropertyDefinition_wrapper::default_writeXMLElementType )
                , ( bp::arg("xml_stream") ) );
        
        }
        { //::CEGUI::Property::getDefault
        
            typedef ::CEGUI::String ( ::CEGUI::Property::*getDefault_function_type )( ::CEGUI::PropertyReceiver const * ) const;
            typedef ::CEGUI::String ( PropertyDefinition_wrapper::*default_getDefault_function_type )( ::CEGUI::PropertyReceiver const * ) const;
            
            PropertyDefinition_exposer.def( 
                "getDefault"
                , getDefault_function_type(&::CEGUI::Property::getDefault)
                , default_getDefault_function_type(&PropertyDefinition_wrapper::default_getDefault)
                , ( bp::arg("receiver") ) );
        
        }
        { //::CEGUI::Property::isDefault
        
            typedef bool ( ::CEGUI::Property::*isDefault_function_type )( ::CEGUI::PropertyReceiver const * ) const;
            typedef bool ( PropertyDefinition_wrapper::*default_isDefault_function_type )( ::CEGUI::PropertyReceiver const * ) const;
            
            PropertyDefinition_exposer.def( 
                "isDefault"
                , isDefault_function_type(&::CEGUI::Property::isDefault)
                , default_isDefault_function_type(&PropertyDefinition_wrapper::default_isDefault)
                , ( bp::arg("receiver") ) );
        
        }
        { //::CEGUI::Property::isReadable
        
            typedef bool ( ::CEGUI::Property::*isReadable_function_type )(  ) const;
            typedef bool ( PropertyDefinition_wrapper::*default_isReadable_function_type )(  ) const;
            
            PropertyDefinition_exposer.def( 
                "isReadable"
                , isReadable_function_type(&::CEGUI::Property::isReadable)
                , default_isReadable_function_type(&PropertyDefinition_wrapper::default_isReadable) );
        
        }
        { //::CEGUI::Property::isWritable
        
            typedef bool ( ::CEGUI::Property::*isWritable_function_type )(  ) const;
            typedef bool ( PropertyDefinition_wrapper::*default_isWritable_function_type )(  ) const;
            
            PropertyDefinition_exposer.def( 
                "isWritable"
                , isWritable_function_type(&::CEGUI::Property::isWritable)
                , default_isWritable_function_type(&PropertyDefinition_wrapper::default_isWritable) );
        
        }
        { //::CEGUI::PropertyDefinitionBase::writeXMLAttributes
        
            typedef void ( PropertyDefinition_wrapper::*writeXMLAttributes_function_type )( ::CEGUI::XMLSerializer & ) const;
            
            PropertyDefinition_exposer.def( 
                "writeXMLAttributes"
                , writeXMLAttributes_function_type( &PropertyDefinition_wrapper::default_writeXMLAttributes )
                , ( bp::arg("xml_stream") )
                , "*!\n\
                    \n\
                        Write out any xml attributes added in a sub-class.  Note that you\n\
                        should not write the closing '>' character sequence, nor any other\n\
                        information in this function.  You should always call the base class\n\
                        implementation of this function when overriding.\n\
            \n\
                    @param xml_stream\n\
                        Stream where xml data should be output.\n\
                    *\n" );
        
        }
        { //::CEGUI::PropertyDefinitionBase::writeXMLToStream
        
            typedef void ( ::CEGUI::PropertyDefinitionBase::*writeXMLToStream_function_type )( ::CEGUI::PropertyReceiver const *,::CEGUI::XMLSerializer & ) const;
            typedef void ( PropertyDefinition_wrapper::*default_writeXMLToStream_function_type )( ::CEGUI::PropertyReceiver const *,::CEGUI::XMLSerializer & ) const;
            
            PropertyDefinition_exposer.def( 
                "writeXMLToStream"
                , writeXMLToStream_function_type(&::CEGUI::PropertyDefinitionBase::writeXMLToStream)
                , default_writeXMLToStream_function_type(&PropertyDefinition_wrapper::default_writeXMLToStream)
                , ( bp::arg("receiver"), bp::arg("xml_stream") ) );
        
        }
    }

}
