
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_plaf_basic_BasicDesktopPaneUI$MinimizeAction__
#define __javax_swing_plaf_basic_BasicDesktopPaneUI$MinimizeAction__

#pragma interface

#include <javax/swing/AbstractAction.h>
extern "Java"
{
  namespace java
  {
    namespace awt
    {
      namespace event
      {
          class ActionEvent;
      }
    }
  }
  namespace javax
  {
    namespace swing
    {
      namespace plaf
      {
        namespace basic
        {
            class BasicDesktopPaneUI;
            class BasicDesktopPaneUI$MinimizeAction;
        }
      }
    }
  }
}

class javax::swing::plaf::basic::BasicDesktopPaneUI$MinimizeAction : public ::javax::swing::AbstractAction
{

public: // actually protected
  BasicDesktopPaneUI$MinimizeAction(::javax::swing::plaf::basic::BasicDesktopPaneUI *);
public:
  virtual void actionPerformed(::java::awt::event::ActionEvent *);
  virtual jboolean isEnabled();
public: // actually package-private
  ::javax::swing::plaf::basic::BasicDesktopPaneUI * __attribute__((aligned(__alignof__( ::javax::swing::AbstractAction)))) this$0;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_swing_plaf_basic_BasicDesktopPaneUI$MinimizeAction__
