#pragma once

#include <cmath>
#include <ctime>
#include <cstdlib>
#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>
#include <SFML/System.hpp>
#include <SFML/OpenGL.hpp>
#include <SFML/Main.hpp>

using namespace sf;
using namespace std;


class Vehicle
{
public:

	//shape
	//color
	RenderWindow& window;
	sf::ConvexShape convex;
	Vector2f location;
	Vector2f acceleration = {30, 30};
	Vector2f velocity = {40, 40};
	float maxSpeed = 100;
	float maxForce =100;
	Vehicle(RenderWindow& myWindow);
	void draw();

	//seek target (mouse)
	//	vehicleSystem(RenderWindow& myWindow);
	Vector2i mouse = sf::Mouse::getPosition(window);
	Vector2f mousePos = window.mapPixelToCoords(mouse);

	void update()
	{
	}

};

