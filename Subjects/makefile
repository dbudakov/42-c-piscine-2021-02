OUT=c_subjects
CC=gcc
CFLAGS=-Wall -Wextra -Werror -Wpedantic -std=c11
MAIN=src/main.c

SDIR=src/exercise/*.c \
	src/utility/*.c \
	src/test/*.c

SOURCES=$(wildcard $(SDIR))
OBJECTS=$(addprefix $(ODIR)/,$(notdir $(patsubst %.c, %.o, $(SOURCES))))

ODIR=src/objects
LIB=lib/libft.a

HEADER=include/*.h

all: $(OUT)

$(OUT): $(LIB)
	$(CC) $(CFLAGS) $(MAIN) $(LIB) -o $(OUT)

$(LIB): $(OBJECTS) 
	ar -rc $(LIB) $(OBJECTS) $(HEADER)
	ranlib $(LIB)

# $(OBJECTS) 
$(ODIR)/%.o: src/*/%.c 
	$(CC) -c $< -o $@

clean:
	rm -f $(wildcard include/*.gch) $(OUT) $(LIB) $(OBJECTS)

re: clean $(OUT)

.SILENT: clean all $(OUT) $(LIB) $(OBJECTS) 