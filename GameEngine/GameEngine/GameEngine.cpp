// GameEngine.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"


//Functions of Entity

Entity::Entity()
{
	x = 0;
	y = 0;
	z = 0;
	damage = 0;
}


Entity::~Entity()
{
}

void Entity::receiveDamage(double pDamage)
{
	damage = damage + pDamage;
}



//Functions of BuiltEntity
BuiltEntity::BuiltEntity()
{
	owner = 0;
}


BuiltEntity::~BuiltEntity()
{
}