all: Simulator

Simulator: SpaceMission.h Rover.h HumanSpaceMission.h Satellite.h ControlUnit.h SpaceMission.cpp Rover.cpp HumanSpaceMission.cpp Satellite.cpp ControlUnit.cpp 
	g++ -o Simulator Simulator.cpp SpaceMission.cpp Rover.cpp HumanSpaceMission.cpp Satellite.cpp ControlUnit.cpp

clean:
	rm -f Simulator