
compile:
	clear
	g++ *.cpp simdjson/simdjson.o -o app -lcurl && ./app

all:
	clear
	@echo "[compiling JSON library]"
	g++ -c simdjson/simdjson.cpp -o simdjson/simdjson.o
end:

