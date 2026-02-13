#include<iostream>
#include <algorithm>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect r1, Rect r2) {
    
    double r1_right = r1.x + r1.w;
    double r1_bottom = r1.y - r1.h;
    
    double r2_right = r2.x + r2.w;
    double r2_bottom = r2.y - r2.h;

    double overlap_left = max(r1.x, r2.x);
    double overlap_right = min(r1_right, r2_right);
    double overlap_top = min(r1.y, r2.y);
    double overlap_bottom = max(r1_bottom, r2_bottom);
    
    if (overlap_left >= overlap_right || overlap_bottom >= overlap_top) {
        return 0;
    }

    double overlap_width = overlap_right - overlap_left;
    double overlap_height = overlap_top - overlap_bottom;

    return overlap_width * overlap_height;
}
