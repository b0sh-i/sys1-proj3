# Compile the program 

gcc-opt = -std=c99 -pedantic -Wimplicit-function-declaration -Wreturn-type -Wformat -g -c

# all target

all: project3, project3Readme, project3.zip, project3main, readtitles, getfavorites, savedata

# The .zip file to submit to Carmen

project3.zip: Makefile, project3Readme, project3, project3.h, project3main.c, getfavorites.c, readtitles.c, savedata.c
	zip project3 Makefile, project3Readme, project3, project3.h, project3main.c, getfavorites.c, readtitles.c, savedata.c

# Compile all of the files into project3 executable

project3: project3main.o, getfavorites.o, readtitles.o, savedata.o
	gcc project3main.o, getfavorites.o, readtitles.o, savedata.o -o project3


# create getfavorites.o

getfavorites.o: getfavorites.c
	gcc $(gcc_opt) -o getfavorites.o getfavorites.c

# create readtitles.o

readtitles.o: readtitles.c
	gcc $(gcc_opt) -o readtitles.o readtitles.c


# create savedata.o

savedata.o: savedata.c
	gcc $(gcc_opt) -o savedata.o savedata.c

# create project3main.o

project3main.o: project3main.c
	gcc $(gcc_opt) -o project3main.o project3main.c

# clear all files made by makefile

clean:
	rm -rf *.o project3 project3.zip project3.h


