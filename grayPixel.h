//Aditeya Srivastava (aditeys@clemson.edu)
#ifndef GRAY_PIXEL_H
#define GRAY_PIXEL_H

class GrayPixel {
    private:
        unsigned char gray;

    public:
        GrayPixel();
        GrayPixel(unsigned char gray) {
            this->gray = gray;
        }

        // ~GrayPixel();

        //getters
        unsigned char getGray() {return gray;}

        //setters
        void setGray(unsigned char gray) {this->gray = gray;}
};

#endif