/*
 * SkeletonStatefulFF.h
 *
 *  Created on: 27 Oct 2015
 *      Author: hieu
 */

#ifndef SKELETONSTATEFULFF_H_
#define SKELETONSTATEFULFF_H_

#include "StatefulFeatureFunction.h"

class SkeletonStatefulFF : public StatefulFeatureFunction
{
public:
	SkeletonStatefulFF(size_t startInd, const std::string &line);
	virtual ~SkeletonStatefulFF();

  virtual const Moses::FFState* EmptyHypothesisState(const Manager &mgr, const Phrase &input) const;

  virtual void
  EvaluateInIsolation(const System &system,
		  const PhraseBase &source, const TargetPhrase &targetPhrase,
		  Scores &scores,
		  Scores *estimatedScore) const;

  virtual Moses::FFState* EvaluateWhenApplied(const Manager &mgr,
    const Hypothesis &hypo,
    const Moses::FFState &prevState,
    Scores &scores) const;

};

#endif /* SKELETONSTATEFULFF_H_ */
