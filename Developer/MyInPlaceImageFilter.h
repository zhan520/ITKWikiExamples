#ifndef __itkMyInPlaceImageFilter_h
#define __itkMyInPlaceImageFilter_h

#include "itkInPlaceImageFilter.h"

namespace itk
{
template< class TImage>
class MyInPlaceImageFilter : public InPlaceImageFilter<TImage>
{
public:
  /** Standard class typedefs. */
  typedef MyInPlaceImageFilter             Self;
  typedef InPlaceImageFilter<TImage> Superclass;
  typedef SmartPointer< Self >        Pointer;

  /** Method for creation through the object factory. */
  itkNewMacro(Self);

  /** Run-time type information (and related methods). */
  itkTypeMacro(MyInPlaceImageFilter, InPlaceImageFilter);

protected:
  MyInPlaceImageFilter(){}
  ~MyInPlaceImageFilter(){}

  /** Does the real work. */
  virtual void GenerateData();

private:
  MyInPlaceImageFilter(const Self &); //purposely not implemented
  void operator=(const Self &);  //purposely not implemented

};
} //namespace ITK


#ifndef ITK_MANUAL_INSTANTIATION
#include "MyInPlaceImageFilter.hxx"
#endif


#endif
