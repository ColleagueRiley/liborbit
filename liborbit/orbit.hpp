#include <iostream>
namespace orbit{
	struct ellipse{int width,length; int x=0, y=0;};
    ellipse getEllipse(double length, double foci1, double foci2);
};

orbit::ellipse orbit::getEllipse(double length, double foci1, double foci2){
	double e=(double)((foci1-foci2))/length;
    return {length, length - (double)(1-e) };
}
