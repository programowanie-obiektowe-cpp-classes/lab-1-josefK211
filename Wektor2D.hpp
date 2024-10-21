class Wektor2D
{
private:
    double x;
    double y;

public:
   
    Wektor2D() : x(0), y(0) {} 
    Wektor2D(double x_, double y_) : x(x_), y(y_) {}
   
    void setX(double x_) { x = x_; }
    void setY(double y_) { y = y_; }

    double getX() const { return x; }
    double getY() const { return y; }

    Wektor2D operator+(const Wektor2D& other) const { return Wektor2D(x + other.x, y + other.y); }
    double operator*(const Wektor2D& other) const { return x * other.x + y * other.y; }
};
