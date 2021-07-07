all: Simulator

Simulator: SpaceMission.h SpaceMission.cpp Rover.h Rover.cpp HumanSpaceMission.h Satellite.h HumanSpaceMission.cpp Satellite.cpp ControlUnit.h ControlUnit.cpp Simulator.cpp
	g++ -o Simulator Simulator.cpp SpaceMission.cpp Rover.cpp HumanSpaceMission.cpp Satellite.cpp ControlUnit.cpp

clean:
	rm -f Simulator