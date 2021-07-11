all: Simulator

Simulator: SpaceMission.h SpaceMission.cpp Rover.h Rover.cpp HumanSpaceMission.h Satellite.h HumanSpaceMission.cpp Satellite.cpp ControlUnit.h ControlUnit.cpp Simulator.cpp Model/Astronaut.h Model
	g++ -o Simulator Simulator.cpp SpaceMission.cpp Rover.cpp HumanSpaceMission.cpp Satellite.cpp ControlUnit.cpp Model/Astronaut.cpp
	./Simulator
	g++ launch.cpp -lGL -lGLU -lglut -o launch
	
	./launch
clean:
	rm -f Simulator



	