#ifndef ITK_DATATYPE_H
#define ITK_DATATYPE_H 1

#include "config/datatype.h"

#include "itkImage.h"
#include "itkImageFileReader.h"
#include "itkImageFileWriter.h"


/* standard names for ITK filters */
typedef input_pixel_type      InputPixelType;
typedef pixel_type         InternalPixelType; /* standard name for ITK filters */
typedef output_pixel_type    OutputPixelType; /* standard name for ITK filters */

const   unsigned int   Dimension = 3; /* should be PIXEL_NDIMS (in "config/datatype.h"), but needed for ITK templates */

typedef itk::Image< InputPixelType,    Dimension >   InputImageType;
typedef itk::Image< InternalPixelType, Dimension >   InternalImageType;
typedef itk::Image< OutputPixelType,   Dimension >   OutputImageType;

#endif /* ITK_DATATYPE_H */

