main: main.o Racionais.o
	g++ -o main ./main.o ./Racionais.o
	./main
	rm ./main ./main.o ./ Racionais.o

main.o: main.cpp Racionais.o
	g++ -c ./main.cpp -o ./main.o

Racionais.o: Racionais.cpp Racionais.h
	g++ -c ./Racionais.cpp -o ./Racionais.o