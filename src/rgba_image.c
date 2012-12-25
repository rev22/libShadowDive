#include "rgba_image.h"
#include <stdlib.h>

rgba_image* sd_create_rgba_image(unsigned int w, unsigned int h) {
    rgba_image *img = (rgba_image*)malloc(sizeof(rgba_image));
    img->data = (char*)malloc(w * h * 4);
    img->w = w;
    img->h = h;
    return img;
}

void sd_delete_rgba_image(rgba_image *img) {
    free(img->data);
    free(img);
}