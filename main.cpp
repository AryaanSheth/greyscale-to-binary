#include "imagelib.h"

int main() {
    loadFile("inputimage.png"); // Loads the image from root directory

    // iterates through the image pixels as a matrix
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {

            // gets the value of the pixel at the current position
            // truncates values under 70 to 0 and the rest to 255
            if (image[i][j] <= 70) {
                image[i][j] = 0;    // truncate to 0 (black)
            } else {
                image[i][j] = 255;  // truncate to 255 (white)
            }
        }
    }
    saveFile("outputimages/modifiedimage.png"); // saves file to outputimages directory
}