all: Simulator

Simulator: Rocket.h Rover.h SpaceExploration.h Satellite.h ControlUnit.h Rocket.cpp Rover.cpp SpaceExploration.cpp Satellite.cpp ControlUnit.cpp 
	g++ -o Simulator Simulator.cpp Rocket.cpp Rover.cpp SpaceExploration.cpp Satellite.cpp ControlUnit.cpp

clean:
	rm -f Simulator