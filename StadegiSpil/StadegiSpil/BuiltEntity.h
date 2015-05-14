#pragma once
#include "Entity.h"
class BuiltEntity :
	public Entity
{
public:
	BuiltEntity();
	~BuiltEntity();

	int getOwner(){ return owner; };
	void setOwner(int pOwner){ owner = pOwner; };
private:
	int owner;
};

