# Aditeya Srivastava (aditeys@clemson.edu)
rotator:
	g++ colorPixel.h grayPixel.h Ppm.cpp Pgm.cpp Rotator.cpp -o rotator

clean:
	rm *.o rotator

tarball:
	tar -czvf discovery1.tar.gz 