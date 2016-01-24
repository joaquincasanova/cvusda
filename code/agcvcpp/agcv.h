#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/ml/ml.hpp>

using namespace cv;
using namespace std;

class raspiCV{
 private:
  Mat image,hsv,h,v,hSeg,vSeg;
  Scalar hMeanS, vegFracS, litFracS;

  char imname[30];
  char hOutname[30];
  char vOutname[30];
  vector<Mat> hsvsplit;
  int n;
 public:
  int hT, vT;

  double hMean, vegFrac, litFrac;
  int retval;
  raspiCV(void);
  ~raspiCV(void);
  int capture(int imnum);
  int hvsplit(void);
  int segment(void);
  int compute(void);
};

