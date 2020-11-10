
main:
	g++ -g -std=c++0x  RaceStrategy/*.cpp RaceStrategy/*.h Logistics/*.cpp Logistics/*.h Testing/*.cpp Testing/*.h Simulator/*.cpp Simulator/*.h Engineering/*.cpp  Engineering/*.h  Mediator/*.cpp Mediator/*.h *.cpp -o main
run:	main
	./main

clean:
	rm main