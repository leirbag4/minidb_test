
compile:
	clear
	g++ *.cpp simdjson/simdjson.o -o app -lcurl && ./app
