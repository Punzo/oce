// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepShape_EdgeBasedWireframeModel_HeaderFile
#define _StepShape_EdgeBasedWireframeModel_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_StepShape_EdgeBasedWireframeModel_HeaderFile
#include <Handle_StepShape_EdgeBasedWireframeModel.hxx>
#endif

#ifndef _Handle_StepShape_HArray1OfConnectedEdgeSet_HeaderFile
#include <Handle_StepShape_HArray1OfConnectedEdgeSet.hxx>
#endif
#ifndef _StepGeom_GeometricRepresentationItem_HeaderFile
#include <StepGeom_GeometricRepresentationItem.hxx>
#endif
#ifndef _Handle_TCollection_HAsciiString_HeaderFile
#include <Handle_TCollection_HAsciiString.hxx>
#endif
class StepShape_HArray1OfConnectedEdgeSet;
class TCollection_HAsciiString;


//! Representation of STEP entity EdgeBasedWireframeModel <br>
class StepShape_EdgeBasedWireframeModel : public StepGeom_GeometricRepresentationItem {

public:

  //! Empty constructor <br>
  Standard_EXPORT   StepShape_EdgeBasedWireframeModel();
  //! Initialize all fields (own and inherited) <br>
  Standard_EXPORT     void Init(const Handle(TCollection_HAsciiString)& aRepresentationItem_Name,const Handle(StepShape_HArray1OfConnectedEdgeSet)& aEbwmBoundary) ;
  //! Returns field EbwmBoundary <br>
  Standard_EXPORT     Handle_StepShape_HArray1OfConnectedEdgeSet EbwmBoundary() const;
  //! Set field EbwmBoundary <br>
  Standard_EXPORT     void SetEbwmBoundary(const Handle(StepShape_HArray1OfConnectedEdgeSet)& EbwmBoundary) ;




  DEFINE_STANDARD_RTTI(StepShape_EdgeBasedWireframeModel)

protected:




private: 


Handle_StepShape_HArray1OfConnectedEdgeSet theEbwmBoundary;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif