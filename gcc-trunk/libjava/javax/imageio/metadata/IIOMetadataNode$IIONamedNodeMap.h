
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_imageio_metadata_IIOMetadataNode$IIONamedNodeMap__
#define __javax_imageio_metadata_IIOMetadataNode$IIONamedNodeMap__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace javax
  {
    namespace imageio
    {
      namespace metadata
      {
          class IIOMetadataNode;
          class IIOMetadataNode$IIONamedNodeMap;
      }
    }
  }
  namespace org
  {
    namespace w3c
    {
      namespace dom
      {
          class Node;
      }
    }
  }
}

class javax::imageio::metadata::IIOMetadataNode$IIONamedNodeMap : public ::java::lang::Object
{

public:
  IIOMetadataNode$IIONamedNodeMap(::javax::imageio::metadata::IIOMetadataNode *, ::java::util::HashMap *);
  virtual ::org::w3c::dom::Node * getNamedItem(::java::lang::String *);
  virtual ::org::w3c::dom::Node * setNamedItem(::org::w3c::dom::Node *);
  virtual ::org::w3c::dom::Node * removeNamedItem(::java::lang::String *);
  virtual ::org::w3c::dom::Node * item(jint);
  virtual jint getLength();
  virtual ::org::w3c::dom::Node * getNamedItemNS(::java::lang::String *, ::java::lang::String *);
  virtual ::org::w3c::dom::Node * setNamedItemNS(::org::w3c::dom::Node *);
  virtual ::org::w3c::dom::Node * removeNamedItemNS(::java::lang::String *, ::java::lang::String *);
public: // actually package-private
  ::java::util::HashMap * __attribute__((aligned(__alignof__( ::java::lang::Object)))) attrs;
  ::javax::imageio::metadata::IIOMetadataNode * this$0;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_imageio_metadata_IIOMetadataNode$IIONamedNodeMap__
