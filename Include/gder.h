/*
*   Creating Gaussian Derivatives for images
*   Evan O'Keeffe
*/

#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <cfloat>
#include <cmath>
#include <vector>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/features2d/features2d.hpp>

#ifndef GDER_H
#define GDER_H

cv::Mat gder(cv::Mat f, double sigma, int iorder, int jorder);
cv::Mat fill_border(cv::Mat in, int bw);

#endif
