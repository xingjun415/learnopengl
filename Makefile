CC = g++
LIBS = -lGLEW -lglfw3 -lGL -lX11 -lpthread -lXrandr -lXi -ldl -lXxf86vm -lXinerama -lXcursor
INCLUDES = -I./include

tt: test.o glad.o
	$(CC) -o tt test.o glad.o $(LIBS)

test.o: test.cpp 
	$(CC) -c test.cpp $(INCLUDES)

glad.o: glad.c
	$(CC) -c glad.c $(INCLUDES) 