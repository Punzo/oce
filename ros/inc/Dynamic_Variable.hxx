// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Dynamic_Variable_HeaderFile
#define _Dynamic_Variable_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Dynamic_Variable_HeaderFile
#include <Handle_Dynamic_Variable.hxx>
#endif

#ifndef _Handle_Dynamic_Parameter_HeaderFile
#include <Handle_Dynamic_Parameter.hxx>
#endif
#ifndef _Dynamic_ModeEnum_HeaderFile
#include <Dynamic_ModeEnum.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Standard_OStream_HeaderFile
#include <Standard_OStream.hxx>
#endif
class Dynamic_Parameter;


//! This  class   is the  root   class for  describing <br>
//!          variables.  A   variable is useful to  specify the <br>
//!          signature of a method in terms of arguments and if <br>
//!          necessary variables and/or constants needed inside <br>
//!          a  function.   This  set  of information defines a <br>
//!          scope for  these variables. This class is directly <br>
//!          used   by  the MethodDefinition class.   From this <br>
//!          class is  derived the instances of variables which <br>
//!          are used by the  classes under the  MethodInstance <br>
//!          class. A variable is composed by : <br>
//! <br>
//!          * an identifier for giving it a name, <br>
//!          * a type of expected value, <br>
//!          * possibly a default value, <br>
//!          * a mode which explains if the variable is : <br>
//! <br>
//!            - an input and/or output argument to the method, <br>
//!            - an internal or  constant variable used in  the <br>
//!            body of the method. <br>
class Dynamic_Variable : public MMgt_TShared {

public:

  //! Creates and returns an empty instance of this class. <br>
  Standard_EXPORT   Dynamic_Variable();
  //! Sets  the   parameter  <aparameter>   in  <me>.   This <br>
//!          parameter gives the name,  the  type of value, and  if <br>
//!          necessary the default value of the variable. <br>
  Standard_EXPORT     void Parameter(const Handle(Dynamic_Parameter)& aparameter) ;
  //! Returns the parameter stored in <me>. <br>
  Standard_EXPORT     Handle_Dynamic_Parameter Parameter() const;
  //! Sets the mode to the variable. the  mode is to take in <br>
//!          the enumeration  IN,  OUT, INOUT,  INTERNAL, CONSTANT, <br>
//!          which describes the type of the variable. <br>
  Standard_EXPORT     void Mode(const Dynamic_ModeEnum amode) ;
  //! Returns the mode of the variable. <br>
  Standard_EXPORT     Dynamic_ModeEnum Mode() const;
  //! Useful for debugging. <br>
  Standard_EXPORT     void Dump(Standard_OStream& astream) const;




  DEFINE_STANDARD_RTTI(Dynamic_Variable)

protected:




private: 


Handle_Dynamic_Parameter theparameter;
Dynamic_ModeEnum themode;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif