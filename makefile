all: Simulator

Simulator: AirConditioner.h AirConditioner.cpp Freezer.h Freezer.cpp CoolingUnit.h CoolingUnit.cpp Compressor.h Compressor.cpp Simulator.cpp
	g++ -o Simulator Simulator.cpp AirConditioner.cpp Freezer.cpp CoolingUnit.cpp Compressor.cpp

clean:
	rm -f Simulator
