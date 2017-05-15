// CMPM_flocking_Hackman.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>
#include <SFML/System.hpp>
#include <SFML/OpenGL.hpp>
#include <SFML/Main.hpp>
#include "vehicle.h"
#include "vehicleSystem.h"
#include <iostream>
using namespace std;
using namespace sf;





int main()
{
	// create the window
	sf::RenderWindow window(sf::VideoMode(512, 256), "Vehicle");

	// create the particle system
	//VehicleSystem vehicle(500);
	
	Vehicle myVehicle = Vehicle(window);

	// create a clock to track the elapsed time
	sf::Clock clock;

	// run the main loop
	while (window.isOpen())
	{
		// handle events
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		// make the particle system emitter follow the mouse
			sf::Vector2i mouse = sf::Mouse::getPosition(window);
	//	vehicle.setEmitter(window.mapPixelToCoords(mouse));
	

		// update it
		sf::Time elapsed = clock.restart();
	//	vehicle.update(elapsed);
		// draw it
		window.clear();
		//window.draw(vehicle);
		myVehicle.draw();
		window.display();
	}

	return 0;
}





