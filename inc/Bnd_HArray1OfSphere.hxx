// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Bnd_HArray1OfSphere_HeaderFile
#define _Bnd_HArray1OfSphere_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Bnd_HArray1OfSphere_HeaderFile
#include <Handle_Bnd_HArray1OfSphere.hxx>
#endif

#ifndef _Bnd_Array1OfSphere_HeaderFile
#include <Bnd_Array1OfSphere.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class Bnd_Sphere;
class Bnd_Array1OfSphere;



class Bnd_HArray1OfSphere : public MMgt_TShared {

public:

  
  Standard_EXPORT   Bnd_HArray1OfSphere(const Standard_Integer Low,const Standard_Integer Up);
  
  Standard_EXPORT   Bnd_HArray1OfSphere(const Standard_Integer Low,const Standard_Integer Up,const Bnd_Sphere& V);
  
  Standard_EXPORT     void Init(const Bnd_Sphere& V) ;
  
        Standard_Integer Length() const;
  
        Standard_Integer Lower() const;
  
        Standard_Integer Upper() const;
  
        void SetValue(const Standard_Integer Index,const Bnd_Sphere& Value) ;
  
       const Bnd_Sphere& Value(const Standard_Integer Index) const;
  
        Bnd_Sphere& ChangeValue(const Standard_Integer Index) ;
  
       const Bnd_Array1OfSphere& Array1() const;
  
        Bnd_Array1OfSphere& ChangeArray1() ;




  DEFINE_STANDARD_RTTI(Bnd_HArray1OfSphere)

protected:




private: 


Bnd_Array1OfSphere myArray;


};

#define ItemHArray1 Bnd_Sphere
#define ItemHArray1_hxx <Bnd_Sphere.hxx>
#define TheArray1 Bnd_Array1OfSphere
#define TheArray1_hxx <Bnd_Array1OfSphere.hxx>
#define TCollection_HArray1 Bnd_HArray1OfSphere
#define TCollection_HArray1_hxx <Bnd_HArray1OfSphere.hxx>
#define Handle_TCollection_HArray1 Handle_Bnd_HArray1OfSphere
#define TCollection_HArray1_Type_() Bnd_HArray1OfSphere_Type_()

#include <TCollection_HArray1.lxx>

#undef ItemHArray1
#undef ItemHArray1_hxx
#undef TheArray1
#undef TheArray1_hxx
#undef TCollection_HArray1
#undef TCollection_HArray1_hxx
#undef Handle_TCollection_HArray1
#undef TCollection_HArray1_Type_


// other Inline functions and methods (like "C++: function call" methods)


#endif
