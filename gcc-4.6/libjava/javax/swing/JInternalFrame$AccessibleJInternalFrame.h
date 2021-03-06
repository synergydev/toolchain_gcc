
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_JInternalFrame$AccessibleJInternalFrame__
#define __javax_swing_JInternalFrame$AccessibleJInternalFrame__

#pragma interface

#include <javax/swing/JComponent$AccessibleJComponent.h>
extern "Java"
{
  namespace javax
  {
    namespace accessibility
    {
        class AccessibleRole;
        class AccessibleValue;
    }
    namespace swing
    {
        class JInternalFrame;
        class JInternalFrame$AccessibleJInternalFrame;
    }
  }
}

class javax::swing::JInternalFrame$AccessibleJInternalFrame : public ::javax::swing::JComponent$AccessibleJComponent
{

public: // actually protected
  JInternalFrame$AccessibleJInternalFrame(::javax::swing::JInternalFrame *);
public:
  virtual ::java::lang::String * getAccessibleName();
  virtual ::javax::accessibility::AccessibleRole * getAccessibleRole();
  virtual ::javax::accessibility::AccessibleValue * getAccessibleValue();
  virtual ::java::lang::Number * getCurrentAccessibleValue();
  virtual ::java::lang::Number * getMaximumAccessibleValue();
  virtual ::java::lang::Number * getMinimumAccessibleValue();
  virtual jboolean setCurrentAccessibleValue(::java::lang::Number *);
private:
  static const jlong serialVersionUID = 5931936924175476797LL;
public: // actually package-private
  ::javax::swing::JInternalFrame * __attribute__((aligned(__alignof__( ::javax::swing::JComponent$AccessibleJComponent)))) this$0;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_swing_JInternalFrame$AccessibleJInternalFrame__
