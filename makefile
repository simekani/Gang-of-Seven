main:
	g++ -g -std=c++0x *.cpp Logistics/*.cpp Logistics/*.h Testing/*.cpp Testing/*.h Simulator/*.cpp Simulator/*.h Engineering/*.cpp  Engineering/*.h  Mediator/*.cpp Mediator/*.h -o main
run:	main
	./main

clean:
	rm *.o main