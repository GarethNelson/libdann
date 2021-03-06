#ifndef __NAIVE_BAYES_CLASSIFIER_H_
#define __NAIVE_BAYES_CLASSIFIER_H_
#include "dann/classify/Classifier.h"
#include "dann/classify/naive/NaiveClassifier.h"

namespace dann {
namespace classify {
namespace naive {
namespace bayes {

  template <class I, class F, class C> 
  class INaiveBayesClassifier : public INaiveClassifier<I, F, C> {
     public:
       virtual ~INaiveBayesClassifier() { }
       virtual C classification(I item, bool useThreshold) { return C(); };
       virtual double getCategoryThreshold(C category) { return 0; };
       virtual void setCategoryThreshold(C category, double threshold) { };
  };

}}}}
#endif
