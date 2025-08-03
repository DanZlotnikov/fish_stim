all:
	g++ ./src/fish_stim.cpp ./src/NHStimDLLLoader.cpp ./src/NHStimWrapperFunctions.cpp -I./include -o ./bin/hello
	./bin/hello

clean:
	del ./bin/hello.exe
