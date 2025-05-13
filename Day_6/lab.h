#ifndef LAB_H_
#define LAB_H_

class shape
{
private:
    int dimension;

public:
    shape(int dim)
    {
        dimension = dim;
    }
    float get_dimension()
    {
        return dimension;
    }
    void set_dimension(float dim)
    {
        dimension = dim;
    }
    float calc_area(void)
    {
        return 0;
    }
};

class rectangle : public shape
{
private:
    float width;

public:
    rectangle(float length_, float width_) : shape(length_)
    {
        width = width_;
    }
    float get_width()
    {
        return width;
    }
    void set_width(float width_)
    {
        width = width_;
    }
    float calc_area()
    {
        return width * get_dimension();
    }
};

class square : public shape
{
public:
    square(float length_) : shape(length_)
    {
    }
    float calc_area()
    {
        return get_dimension() * get_dimension();
    }
};

class circle : public shape
{
public:
    circle(float radius_) : shape(radius_)
    {
    }
    float calc_area()
    {
        return get_dimension() * 3.14 * get_dimension();
    }
};

#endif
