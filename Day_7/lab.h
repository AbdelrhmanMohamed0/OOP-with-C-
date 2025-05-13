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
    virtual float calc_area(void) = 0;
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

class photo
{
    shape **sh;

public:
    photo(shape **sh_)
    {
        sh = sh_;
    }
    float photo_area(int num_shapes)
    {
        float sum = 0;
        for (int i = 0; i < num_shapes; i++)
        {
            sum += sh[i]->calc_area();
        }
        return sum;
    }
};

#endif