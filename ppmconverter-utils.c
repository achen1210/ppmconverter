//Andrew Chen
#include "ppmconverter.h"

// compare two rgb structs for logical equality
int rgb_eq(struct rgb c1, struct rgb c2)
{
    return (c1.r == c2.r) && (c1.g == c2.g) && (c1.b == c2.b);  
}

// check if image is all gray pixels
int img_grayscale(struct image *img)
{
    uint32_t width = img -> w;
    uint32_t height = img -> h;
    uint32_t length = width * height;
    for(int i = 0; i < length; i++)
    {
        unsigned char r = img[i].pixels -> r;
        unsigned char g = img[i].pixels -> g;
        unsigned char b = img[i].pixels -> b;
        if(r != g)
            return 0;
        if(r != b)
            return 0;
    }
    return 1;
}

