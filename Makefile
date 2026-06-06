CXX=clang++
SDL_CFLAGS := $(shell pkg-config --cflags sdl2)
SDL_LIBS := $(shell pkg-config --libs sdl2)
CXXFLAGS=-std=c++17 -Wall $(SDL_CFLAGS)
LDFLAGS=$(SDL_LIBS)
SRC_DIR=src
OBJ_DIR=build
BIN_DIR=$(OBJ_DIR)/bin

SRC_FILES=$(wildcard $(SRC_DIR)/*.cpp)
EXE_FILES=$(patsubst $(SRC_DIR)/%.cpp,$(BIN_DIR)/%,$(SRC_FILES))

# Ensure the output directories exist
$(shell mkdir -p $(OBJ_DIR) $(BIN_DIR))

all: compile_commands.json $(EXE_FILES)

compile_commands.json: Makefile $(SRC_FILES)
	@printf '[\n' > compile_commands.json
	@first=1; \
	for src in $(SRC_FILES); do \
		if [ $$first -eq 0 ]; then printf ',\n' >> compile_commands.json; fi; \
		printf '  {\n    "directory": "%s",\n    "command": "%s %s -c %s",\n    "file": "%s"\n  }' \
			"$(CURDIR)" "$(CXX)" "$(CXXFLAGS)" "$$src" "$$src" >> compile_commands.json; \
		first=0; \
	done; \
	printf '\n]\n' >> compile_commands.json

$(BIN_DIR)/%: $(SRC_DIR)/%.cpp
	$(CXX) $(CXXFLAGS) -o $@ $< $(LDFLAGS)

clean:
	rm -f $(BIN_DIR)/*

.PHONY: all clean
