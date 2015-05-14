#pragma once
class Entity
{
public:
	Entity();
	~Entity();

	double getX(){ return x; };
	double getY(){ return x; };
	double getZ(){ return x; };
	double returnDamage(){ return damage; };		//returnDamage() anstelle von getDamage(), um verwechslungen mit receiveDamage(double) vorzubeugen

	void setX(double pX){ x = pX; };
	void setY(double pY){ x = pY; };
	void setZ(double pZ){ x = pZ; };
	void setDamage(double pDamage){ damage = pDamage; };
	virtual void receiveDamage(double pDamage);
	virtual void performAction() = 0;

private:
	double x;
	double y;
	double z;
	double damage;
};

