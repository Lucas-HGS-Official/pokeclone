TARGET = code/bin/game
SRC = $(wildcard code/src/*.c)
OBJ = $(patsubst code/src/%.c, code/obj/%.o, $(SRC))

run: clean default

default: $(TARGET)

$(TARGET): $(OBJ)
	gcc -o $@ $?

code/obj/%.o : code/src/%.c
	gcc -c $< -o $@ -Icode/include

clean:
	rm -f code/obj/*.o
	rm -f code/bin/*