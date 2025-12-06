#include "Point.hpp"
#include <cmath>
class Circle {
private:
    double *radius;
public:
    Point center;

    ~Circle() {
        delete radius;
    }

    Circle(double r, double x_coordinates = 0.0, double y_coordinates = 0.0) 
    //call Point constructor
    : center(x_coordinates, y_coordinates)
    {
        radius = new double;
        *radius = r;
    }

    void set_radius (double r) {
        *radius = r;
    }

    double get_radius () {
        return *radius;
    }
    
    double area (void){
        return M_PI*(*radius)*(*radius);
    }

};