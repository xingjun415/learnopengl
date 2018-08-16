CC = g++
CFLAGS = -g -Wall -std=c++11

PROJECT_ROOT_DIR = ../
THIRTY_PARTY_DIR = $(PROJECT_ROOT_DIR)/third_party
INCLUDES = -I$(PROJECT_ROOT_DIR)include -I$(THIRTY_PARTY_DIR)

GLAD_DIR = $(THIRTY_PARTY_DIR)/glad
GLM_DIR = $(THIRTY_PARTY_DIR)/glm
STB_DIR = $(THIRTY_PARTY_DIR)/stb


LIB_DIR = $(PROJECT_ROOT_DIR)/src/build
THIRTY_PARTY_LIB = $(LIB_DIR)/glad.o $(LIB_DIR)/stb_image.o $(LIB_DIR)/shader.o

vpath $(LIB_DIR):$(GLAD_DIR):$(GLM_DIR):$(STB_DIR)

.PHONY: all
all: $(LIB_DIR)/glad.o $(LIB_DIR)/stb_image.o $(LIB_DIR)/shader.o


$(LIB_DIR)/glad.o: $(GLAD_DIR)/glad.c $(GLAD_DIR)/glad.h
	$(CC) $(CFLAGS) -c $(GLAD_DIR)/glad.c -o $(LIB_DIR)/glad.o $(INCLUDES)

$(LIB_DIR)/stb_image.o: $(STB_DIR)/stb_image.cpp $(STB_DIR)/stb_image.h
	$(CC) $(CFLAGS) -c $(STB_DIR)/stb_image.cpp -o $(LIB_DIR)/stb_image.o $(INCLUDES)

$(LIB_DIR)/shader.o: shader.cpp 
	$(CC) $(CFLAGS) -c shader.cpp -o $(LIB_DIR)/shader.o $(INCLUDES)

.PHONY: clean
clean:
	- rm $(LIB_DIR)/*.o