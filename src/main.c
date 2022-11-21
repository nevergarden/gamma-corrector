#include <stdio.h>
#include <math.h>

#define STB_IMAGE_IMPLEMENTATION
#include "stb_image.h"

#define STB_IMAGE_WRITE_IMPLEMENTATION
#include "stb_image_write.h"

int main(int argc, char ** argv) {
	if(argc < 2) {
		printf("Usage: gamma-corrector file.[jpg,tif,png] [gamma value]\n");
		exit(0);
	}

	int w, h, c;
	unsigned char * data = stbi_load(argv[1], &w, &h, &c, STBI_rgb);
	printf("%d:%d\n", w, h);
	float gamma = atof(argv[2]);
	gamma = 1/gamma;

	for(int i = 0; i < w*h*c; i++) {
		data[i] = (unsigned char) (255 * powf(((float)data[i]/(float)255),gamma));
	}

	stbi_write_png("gamma.png", w, h, c, data, w*c);
	stbi_image_free(data);
}
