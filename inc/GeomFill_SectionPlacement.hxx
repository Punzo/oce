// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GeomFill_SectionPlacement_HeaderFile
#define _GeomFill_SectionPlacement_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _gp_Ax1_HeaderFile
#include <gp_Ax1.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Handle_GeomFill_LocationLaw_HeaderFile
#include <Handle_GeomFill_LocationLaw.hxx>
#endif
#ifndef _GeomAdaptor_Curve_HeaderFile
#include <GeomAdaptor_Curve.hxx>
#endif
#ifndef _Handle_Geom_Curve_HeaderFile
#include <Handle_Geom_Curve.hxx>
#endif
#ifndef _Extrema_ExtPC_HeaderFile
#include <Extrema_ExtPC.hxx>
#endif
#ifndef _gp_Pnt_HeaderFile
#include <gp_Pnt.hxx>
#endif
#ifndef _Handle_Geom_Geometry_HeaderFile
#include <Handle_Geom_Geometry.hxx>
#endif
#ifndef _Handle_Adaptor3d_HCurve_HeaderFile
#include <Handle_Adaptor3d_HCurve.hxx>
#endif
class GeomFill_LocationLaw;
class Geom_Curve;
class StdFail_NotDone;
class Geom_Geometry;
class Adaptor3d_HCurve;
class gp_Trsf;
class gp_Mat;
class gp_Vec;


//! To place section in sweep Function <br>
class GeomFill_SectionPlacement  {
public:

  void* operator new(size_t,void* anAddress) 
  {
    return anAddress;
  }
  void* operator new(size_t size) 
  {
    return Standard::Allocate(size); 
  }
  void  operator delete(void *anAddress) 
  {
    if (anAddress) Standard::Free((Standard_Address&)anAddress); 
  }

  
  Standard_EXPORT   GeomFill_SectionPlacement(const Handle(GeomFill_LocationLaw)& L,const Handle(Geom_Geometry)& Section);
  //! To change the section Law <br>
  Standard_EXPORT     void SetLocation(const Handle(GeomFill_LocationLaw)& L) ;
  
  Standard_EXPORT     void Perform(const Standard_Real Tol) ;
  
  Standard_EXPORT     void Perform(const Handle(Adaptor3d_HCurve)& Path,const Standard_Real Tol) ;
  
  Standard_EXPORT     void Perform(const Standard_Real ParamOnPath,const Standard_Real Tol) ;
  
  Standard_EXPORT     Standard_Boolean IsDone() const;
  
  Standard_EXPORT     Standard_Real ParameterOnPath() const;
  
  Standard_EXPORT     Standard_Real ParameterOnSection() const;
  
  Standard_EXPORT     Standard_Real Distance() const;
  
  Standard_EXPORT     Standard_Real Angle() const;
  
  Standard_EXPORT     gp_Trsf Transformation(const Standard_Boolean WithTranslation,const Standard_Boolean WithCorrection = Standard_False) const;
  //! Compute the Section, in the coordinate syteme given by <br>
//!          the Location Law. <br>
//!          If <WithTranslation> contact beetween <br>
//!          <Section> and <Path> is forced. <br>
  Standard_EXPORT     Handle_Geom_Curve Section(const Standard_Boolean WithTranslation) const;
  //! Compute the Section, in the coordinate syteme given by <br>
//!          the Location Law. <br>
//!          To have the Normal to section equal to the Location <br>
//!          Law Normal.  If <WithTranslation> contact beetween <br>
//!          <Section> and <Path> is forced. <br>
  Standard_EXPORT     Handle_Geom_Curve ModifiedSection(const Standard_Boolean WithTranslation) const;





protected:





private:

  
  Standard_EXPORT     void SectionAxis(const gp_Mat& M,gp_Vec& T,gp_Vec& N,gp_Vec& BN) const;
  
  Standard_EXPORT     Standard_Boolean Choix(const Standard_Real Dist,const Standard_Real Angle) const;


Standard_Boolean done;
Standard_Boolean isplan;
gp_Ax1 TheAxe;
Standard_Real Gabarit;
Handle_GeomFill_LocationLaw myLaw;
GeomAdaptor_Curve myAdpSection;
Handle_Geom_Curve mySection;
Standard_Real SecParam;
Standard_Real PathParam;
Standard_Real Dist;
Standard_Real AngleMax;
Extrema_ExtPC myExt;
Standard_Boolean myIsPoint;
gp_Pnt myPoint;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif