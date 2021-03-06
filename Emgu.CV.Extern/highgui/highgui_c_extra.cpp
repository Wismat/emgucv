//----------------------------------------------------------------------------
//
//  Copyright (C) 2004-2020 by EMGU Corporation. All rights reserved.
//
//----------------------------------------------------------------------------

#include "highgui_c_extra.h"

void cveImshow(cv::String* winname, cv::_InputArray* mat)
{
#if HAVE_OPENCV_HIGHGUI
	cv::imshow(*winname, *mat);
#else
	throw_no_highgui();
#endif
}
void cveNamedWindow(cv::String* winname, int flags)
{
#if HAVE_OPENCV_HIGHGUI
	cv::namedWindow(*winname, flags);
#else
	throw_no_highgui();
#endif
}
void cveSetWindowProperty(cv::String* winname, int propId, double propValue)
{
#if HAVE_OPENCV_HIGHGUI
	cv::setWindowProperty(*winname, propId, propValue);
#else
	throw_no_highgui();
#endif
}
void cveSetWindowTitle(cv::String* winname, cv::String* title)
{
#if HAVE_OPENCV_HIGHGUI
	cv::setWindowTitle(*winname, *title);
#else
	throw_no_highgui();
#endif
}
double cveGetWindowProperty(cv::String* winname, int propId)
{
#if HAVE_OPENCV_HIGHGUI
	return cv::getWindowProperty(*winname, propId);
#else
	throw_no_highgui();
#endif
}
void cveDestroyWindow(cv::String* winname)
{
#if HAVE_OPENCV_HIGHGUI
	cv::destroyWindow(*winname);
#else
	throw_no_highgui();
#endif
}
void cveDestroyAllWindows()
{
#if HAVE_OPENCV_HIGHGUI
	cv::destroyAllWindows();
#else
	throw_no_highgui();
#endif
}
int cveWaitKey(int delay)
{
#if HAVE_OPENCV_HIGHGUI
	return cv::waitKey(delay);
#else
	throw_no_highgui();
#endif
}

void cveSelectROI(cv::String* windowName, cv::_InputArray* img, bool showCrosshair, bool fromCenter, CvRect* roi)
{
#if HAVE_OPENCV_HIGHGUI
	cv::Rect r = cv::selectROI(*windowName, *img, showCrosshair, fromCenter);
	roi->x = r.x;
	roi->y = r.y;
	roi->width = r.width;
	roi->height = r.height;
#else
	throw_no_highgui();
#endif
}

void cveSelectROIs(
	cv::String* windowName,
	cv::_InputArray* img,
	std::vector< cv::Rect >* boundingBoxs,
	bool showCrosshair,
	bool fromCenter)
{
#if HAVE_OPENCV_HIGHGUI
	cv::selectROIs(*windowName, *img, *boundingBoxs, showCrosshair, fromCenter);
#else
	throw_no_highgui();
#endif
}