# Compile the program 

gcc_opt = -std=c99 -pedantic -Wimplicit-function-declaration -Wreturn-type -Wformat -g -c

# all target

all: project3 project3Readme project3.zip project3main readtitles getfavorites savedata addtoarray addtofavorites printlist

# The .zip file to submit to Carmen

project3.zip: Makefile project3Readme project3 project3.h project3main.c getfavorites.c readtitles.c savedata.c addtoarray.c addtofavorites.c printlist.c
	zip project3 Makefile project3Readme project3 project3.h project3main.c getfavorites.c readtitles.c savedata.c

# Compile all of the files into project3 executable

project3: project3main.o getfavorites.o readtitles.o savedata.o addtoarray.o addtofavorites.o printlist.o printfavorites.o project3.h
	gcc -o project3 project3main.o getfavorites.o readtitles.o savedata.o addtoarray.o addtofavorites.o printlist.o printfavorites.o

# create project3main.o

project3main.o: project3main.c project3.h
	gcc $(gcc_opt) -o project3main.o project3main.c

# create getfavorites.o

getfavorites.o: getfavorites.c project3.h
	gcc $(gcc_opt) -o getfavorites.o getfavorites.c

# create readtitles.o

readtitles.o: readtitles.c project3.h
	gcc $(gcc_opt) -o readtitles.o readtitles.c


# create savedata.o

savedata.o: savedata.c project3.h
	gcc $(gcc_opt) -o savedata.o savedata.c

# create addtoarray.o 

addtoarray.o: addtoarray.c project3.h
	gcc $(gcc_opt) -o addtoarray.o addtoarray.c

# create addtofavorites.o 

addtofavorites.o: addtofavorites.c project3.h
	gcc $(gcc_opt) -o addtofavorites.o addtofavorites.c

# create printlist.o

printlist.o: printlist.c project3.h
	gcc $(gcc_opt) -o printlist.o printlist.c

printfavorites.o: printfavorites.c project3.h
# clear all files made by makefile

clean:
	rm -rf *.o project3 project3.zip


