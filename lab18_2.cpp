#include<iostream>
#include <algorithm>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect *r1, Rect *r2){
    
    double w_over = min(r1->x + r1->w, r2->x + r2->w) - max(r1->x, r2->x);
    double h_over = min(r1->y + r1->h, r2->y + r2->h) - max(r1->y, r2->y);
    
    w_over = max(0.0, w_over);
    h_over = max(0.0, h_over);
    
    return w_over * h_over;
}
