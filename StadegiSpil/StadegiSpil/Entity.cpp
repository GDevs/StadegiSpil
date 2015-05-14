#include "Entity.h"


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
