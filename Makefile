CC = gcc
CFLAGS = -Wall -g -Iunity -Iinclude
UNITY_DIR = ./unity

SRC_DIR = ./src
INC_DIR = ./include
TEST_DIR = ./test

UNITY_SRC = $(UNITY_DIR)/unity.c

# Objects
LIGHTS_OBJ = $(SRC_DIR)/lights_control.o
TEMP_OBJ = $(SRC_DIR)/temperature_control.o
STATUS_OBJ = $(SRC_DIR)/system_status.o

TEST_LIGHTS_OBJ = $(TEST_DIR)/test_lights_control.o $(LIGHTS_OBJ)
TEST_TEMP_OBJ = $(TEST_DIR)/test_temperature_control.o $(TEMP_OBJ)

# Targets
all: test_lights_control test_temperature_control

test_lights_control: $(TEST_LIGHTS_OBJ) $(UNITY_SRC)
	$(CC) -o $@ $^ $(CFLAGS)

test_temperature_control: $(TEST_TEMP_OBJ) $(UNITY_SRC)
	$(CC) -o $@ $^ $(CFLAGS)

clean:
	# Remove all .o files in all subdirectories
	find . -type f -name "*.o" -exec rm -f {} \;
	# Remove the executables
	rm -f test_lights_control test_temperature_control
