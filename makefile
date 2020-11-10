
main:
	g++ -g -std=c++0x  Racing/*.h Racing/*.cpp RaceStrategy/*.cpp RaceStrategy/*.h Testing/*.cpp Testing/*.h Simulator/*.cpp Simulator/*.h Engineering/*.cpp  Engineering/*.h  Mediator/*.cpp Mediator/*.h *.cpp -o main
run:	main
	./main

clean:
	rm *.o main