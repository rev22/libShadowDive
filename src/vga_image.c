#include "vga_image.h"
#include <stdlib.h>

vga_image* sd_vga_image_create(unsigned int w, unsigned int h) {
    vga_image *img = (vga_image*)malloc(sizeof(vga_image));
    img->w = w;
    img->h = h;
    img->len = w*h;
    img->data = (char*)malloc(w*h);
    return img;
}

void sd_vga_image_destroy(vga_image *img) {
    free(img->data);
    free(img);
}

vga_image* sd_vga_image_encode(rgba_image *img, palette *pal) {
    return 0;
}

rgba_image* sd_vga_image_decode(vga_image *img, palette *pal) {
    return 0;
}