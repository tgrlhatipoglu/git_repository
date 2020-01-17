#ifndef RECTANGE_H
#define RECTANGE_H

class Rectange{

public:
    Rectange();
    Rectange(int w, int h);
    void setWidth(int width)
    {
        this->width = width;
    }
    void setHeight(int height)
    {

        this->height = height;
    }

    int getarea()
    {
        return width*height;
    }

private:
    int width;
    int height;
};

#endif // RECTANGE_H
