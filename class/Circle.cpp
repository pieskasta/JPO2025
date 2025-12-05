#include <iostream>
//#include "Point.hpp" - Circle has #include point, so this line is not needed
#include "Circle.hpp"

int main ()
{
    //Testing methods from Point.hpp
    //Point initial_center(5, 10);
    //initial_center.display();

    //Create object, then get its area and coordinates
    //Syntax:  (radius,x,y)
    Circle ball(5.1,1,1);
    std::cout << "Object area: " << ball.area() << "\n" ;
    std::cout << "Object center coordinates: \n";
    ball.center.display();

    //Modyfying object parameters via setters:
    ball.set_radius(10);
    ball.set_origin(3.1,4.2);
    std::cout << "\nObject parameters have been modified\n\n";

    //Print object parameters again
    std::cout << "Object area: " << ball.area() << "\n" ;
    std::cout << "Object center coordinates: ";
    ball.center.display();
}