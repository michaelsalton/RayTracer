#include <iostream>

int main() {

    // image
    int image_width = 256;
    int image_height = 256;

    // render
    std::cout << "P3\n" << image_width << " " << image_height << "\n255\n";

    // iterate over the file grid
    // rows of pixels written out left to right
    // rows written top to bottom
    for (int j = 0; j < image_height; j++)
    {
        for (int i = 0; i < image_width; i++)
        {
            float r = float(i) / float(image_width);
            float g = float(j) / float(image_height);

            float b = 0.0;
            int ir = int(255.99*r);
            int ig = int(255.99*g);
            int ib = int(255.99*b);

            std::cout << ir << " " << ig << " " << ib << "\n";
        }
    }
}