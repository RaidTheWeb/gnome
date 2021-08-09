OUT := gnome
SOURCE_DIR := src
BUILD_DIR := bin
HEADERS := $(wildcard $(SOURCE_DIR)/include/*.h)
SOURCES := $(wildcard $(SOURCE_DIR)/*.c)
OBJECTS := $(addprefix $(BUILD_DIR)/, $(notdir $(SOURCES:.c=.o)))
CC := gcc
CFLAGS := -Isrc/include

build/$(OUT): $(OBJECTS)
	@ printf "%8s %-40s %s\n" $(CC) $@ "$(CFLAGS)"
	@ mkdir -p build
	@ $(CC) $(CFLAGS) $^ -o $@

$(BUILD_DIR)/%.o: $(SOURCE_DIR)/%.c $(HEADERS)
	@ printf "%8s %-40s %s\n" $(CC) $< "$(CFLAGS)"
	@ mkdir -p $(BUILD_DIR)/
	@ $(CC) -c $(C_LANG) $(CFLAGS) -o $@ $<
