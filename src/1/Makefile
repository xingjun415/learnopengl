CC = g++
CFLAGS = -g -Wall -std=c++11
THIRTY_PARTY_DIR = ../../third_party
LIBS = -lGLEW -lglfw3 -lGL -lX11 -lpthread -lXrandr -lXi -ldl -lXxf86vm -lXinerama -lXcursor
INCLUDES = -I../../include -I$(THIRTY_PARTY_DIR)

GLAD_DIR = $(THIRTY_PARTY_DIR)/glad
GLM_DIR = $(THIRTY_PARTY_DIR)/glm
STB_DIR = $(THIRTY_PARTY_DIR)/stb

LIB_DIR = ../build
THIRTY_PARTY_LIB = $(LIB_DIR)/glad.o $(LIB_DIR)/stb_image.o $(LIB_DIR)/shader.o

tt: test.o $(THIRTY_PARTY_LIB)
	$(CC) $(CFLAGS) -o tt  test.o $(THIRTY_PARTY_LIB) $(LIBS)

test.o: test.cpp
	$(CC) $(CFLAGS) -c test.cpp $(INCLUDES)

$(LIB_DIR)/glad.o: $(GLAD_DIR)/glad.c $(GLAD_DIR)/glad.h
	$(CC) $(CFLAGS) -c $(GLAD_DIR)/glad.c -o $(LIB_DIR)/glad.o $(INCLUDES)

$(LIB_DIR)/stb_image.o: $(STB_DIR)/stb_image.cpp $(STB_DIR)/stb_image.h
	$(CC) $(CFLAGS) -c $(STB_DIR)/stb_image.cpp -o $(LIB_DIR)/stb_image.o $(INCLUDES)

$(LIB_DIR)/shader.o: ../shader.cpp vertex_shader.vs frag_shader.fs
	$(CC) $(CFLAGS) -c ../shader.cpp -o $(LIB_DIR)/shader.o $(INCLUDES)