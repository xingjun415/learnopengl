CC = g++
LIBS = -lGLEW -lglfw3 -lGL -lX11 -lpthread -lXrandr -lXi -ldl -lXxf86vm -lXinerama -lXcursor
INCLUDES = -I./include -I./third_party
FLAGS = -g

tt: test.o glad.o stb_image.o shader.o
	$(CC) $(FLAGS) -o tt test.o glad.o stb_image.o shader.o $(LIBS)

test.o: test.cpp 
	$(CC) $(FLAGS) -c test.cpp $(INCLUDES)

glad.o: glad.c
	$(CC) $(FLAGS) -c glad.c $(INCLUDES) 

stb_image.o: stb_image.h stb_image.cpp
	$(CC) $(FLAGS) -c stb_image.cpp

shader.o: shader.cpp ./glsl/vertex_shader.ver ./glsl/frag_shader.frag
	$(CC) $(FLAGS) -c shader.cpp $(INCLUDES)

.PHONY: clean
clean:
	-rm -f *.o
	-rm ./tt