class Point {
private:
public:
    double x;
    double y;

    ~Point(){
        std::cout << "Destructor called\n";
    }
    //default constructor
    Point() : x(0), y(0) {
        std::cout << "Default Constructor called\n";
    }
    // parameterized constructor
    Point(double x_coordinates, double y_coordinates) : x(x_coordinates), y(y_coordinates) {
        std::cout << "Constructor called\n";
    }

    void display (){
        std::cout << "(" << x << "," << y << ")\n";
    }
};