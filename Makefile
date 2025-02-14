CC = gcc
CFLAGS = -Wall -std=c99

# Define the target executable names
TARGET_OSS = oss
TARGET_USER = user

# Default target to build both oss and user executables
all: $(TARGET_OSS) $(TARGET_USER)

# Compile the oss executable
$(TARGET_OSS): oss.c
	$(CC) $(CFLAGS) -o $(TARGET_OSS) oss.c

# Compile the user executable
$(TARGET_USER): user.c
	$(CC) $(CFLAGS) -o $(TARGET_USER) user.c

# Clean up generated files
clean:
	rm -f $(TARGET_OSS) $(TARGET_USER)
