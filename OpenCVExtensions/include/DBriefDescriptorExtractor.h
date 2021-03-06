/*
 * DBriefDescriptorExtractor.h
 *
 *  Created on: Aug 22, 2013
 *      Author: andresf
 */

#ifndef DBRIEFDESCRIPTOREXTRACTOR_H_
#define DBRIEFDESCRIPTOREXTRACTOR_H_

#include <opencv2/features2d/features2d.hpp>

#include <Dbrief/Dbrief.h>

namespace cv {

class DBriefDescriptorExtractor: public cv::DescriptorExtractor {
public:
	DBriefDescriptorExtractor();
	virtual ~DBriefDescriptorExtractor();

	// Size in Bytes of the descriptor
	int descriptorSize() const;
	// Type of the descriptor
	int descriptorType() const;
	void computeImpl(const Mat& image, std::vector<KeyPoint>& keypoints,
			Mat& descriptors) const;
	AlgorithmInfo* info() const;
};

} /* namespace cv */

#endif /* DBRIEFDESCRIPTOREXTRACTOR_H_ */
