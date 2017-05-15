#pragma once
#include <SFML/Main.hpp>
#include "vehicle.h"
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


//Vehicle::Vehicle();
//
//{
//	//vehicle shape

//  
//
//	
//	location(0, 0); //set position
//	acceleration();
//	velocity();
//	maxSpeed();
//	maxForce();
//
//};
	
Vehicle::Vehicle(RenderWindow& myWindow) : window(myWindow)
{
	convex.setPointCount(3);
	convex.setPoint(0, sf::Vector2f(0, 0));
	convex.setPoint(1, sf::Vector2f(12, 0));
	convex.setPoint(2, sf::Vector2f(6, 30));

	convex.setFillColor(Color::White);
	location = Vector2f(10, 10);
	convex.setPosition(location);

}


void Vehicle::draw()
{
	window.draw(convex);
}

void update()
{
	velocity.x = velocity.x + acceleration.x;
	velocity = velocity.limit(maxSpeed);
	location = location.y + velocity.y;

	//velocity.add(acceleration);
	//velocity.limit(maxspeed);
	//location.add(velocity);
	acceleration.mult(0);

};


	

