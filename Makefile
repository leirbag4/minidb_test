
compile:
	clear
	g++ *.cpp simdjson/simdjson.cpp -o app -lcurl && ./app
