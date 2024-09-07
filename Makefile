build:
	gcc -o myapp ./src/*.c `sdl2-config --cflags --libs`
run:
	./game
clean:
	rm game
