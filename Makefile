build_arch?="Nothing here yet..."

run: comp
	./cave_in.sh

comp:
	@echo "Compiling..."
	g++ -o cave_in.sh src/cave_in.cpp src/command.cpp src/lexx.cpp

clean:
	@echo "Cleaning up..."
	find . -name "cave_in" -delete
	find . -name "cave_in.sh" -delete
	find . -name "cave_in.exe" -delete
	find . -name "cave_in.o" -delete
	find . -name "command.o" -delete
	find . -name "lexx.o" -delete

build:
	@echo $(build_arch)