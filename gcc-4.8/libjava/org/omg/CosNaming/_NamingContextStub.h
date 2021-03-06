
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __org_omg_CosNaming__NamingContextStub__
#define __org_omg_CosNaming__NamingContextStub__

#pragma interface

#include <org/omg/CORBA/portable/ObjectImpl.h>
#include <gcj/array.h>

extern "Java"
{
  namespace org
  {
    namespace omg
    {
      namespace CORBA
      {
          class Object;
        namespace portable
        {
            class Delegate;
            class InputStream;
        }
      }
      namespace CosNaming
      {
          class BindingIteratorHolder;
          class BindingListHolder;
          class NameComponent;
          class NamingContext;
          class _NamingContextStub;
      }
    }
  }
}

class org::omg::CosNaming::_NamingContextStub : public ::org::omg::CORBA::portable::ObjectImpl
{

public:
  _NamingContextStub();
public: // actually package-private
  _NamingContextStub(::org::omg::CORBA::portable::Delegate *);
public:
  virtual JArray< ::java::lang::String * > * _ids();
  virtual void bind(JArray< ::org::omg::CosNaming::NameComponent * > *, ::org::omg::CORBA::Object *);
  virtual void bind_context(JArray< ::org::omg::CosNaming::NameComponent * > *, ::org::omg::CosNaming::NamingContext *);
  virtual ::org::omg::CosNaming::NamingContext * bind_new_context(JArray< ::org::omg::CosNaming::NameComponent * > *);
  virtual void destroy();
  virtual void list(jint, ::org::omg::CosNaming::BindingListHolder *, ::org::omg::CosNaming::BindingIteratorHolder *);
  virtual ::org::omg::CosNaming::NamingContext * new_context();
  virtual void rebind(JArray< ::org::omg::CosNaming::NameComponent * > *, ::org::omg::CORBA::Object *);
  virtual void rebind_context(JArray< ::org::omg::CosNaming::NameComponent * > *, ::org::omg::CosNaming::NamingContext *);
  virtual ::org::omg::CORBA::Object * resolve(JArray< ::org::omg::CosNaming::NameComponent * > *);
  virtual void unbind(JArray< ::org::omg::CosNaming::NameComponent * > *);
public: // actually package-private
  virtual void throw4(::org::omg::CORBA::portable::InputStream *, ::java::lang::String *);
  virtual void throw5(::org::omg::CORBA::portable::InputStream *, ::java::lang::String *);
private:
  static const jlong serialVersionUID = 6835430958405349379LL;
public:
  static ::java::lang::Class class$;
};

#endif // __org_omg_CosNaming__NamingContextStub__
