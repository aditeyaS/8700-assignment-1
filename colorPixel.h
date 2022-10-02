//Aditeya Srivastava (aditeys@clemson.edu)
#ifndef COLOR_PIXEL_H
#define COLOR_PIXEL_H

class ColorPixel {
   private:
      unsigned char red;
      unsigned char green;
      unsigned char blue;

   public:
      ColorPixel();

      ColorPixel(unsigned char red, unsigned char green, unsigned char blue) {
         this->red = red;
         this->green = green;
         this->blue = blue;
      }

      // ~ColorPixel();

      //getters
      unsigned char getRed() {return red;}
      unsigned char getGreen() {return green;}
      unsigned char getBlue() {return blue;}
};

#endif