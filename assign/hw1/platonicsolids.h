#include <cmath>

template <class T>
class PlatonicSolid {
public:
    virtual T area() = 0;
    virtual T volume() = 0;
};

template <class T>
class Tetrahedron : public PlatonicSolid<T> {
protected:
    T edge;
public:
    Tetrahedron(T a) : edge(a) {}
    T area() {
        return static_cast<T>(sqrt(3)*edge*edge/4);
    }
    T volume() {
        return static_cast<T>(edge*edge*edge/(6*sqrt(2)));
    }
};

template <class T>
class RightSquarePyramid : public Tetrahedron<T> {
protected:
    T base;
public:
    RightSquarePyramid(T a, T b) : Tetrahedron<T>(a), base{b} {}
    T area() {
        return static_cast<T>(base*base + base*sqrt(base*base+2*this->edge*this->edge));
    }
    T volume() {
        return static_cast<T>(base*base*this->edge/3);
    }
};
