//Headrerfile fuer die Dll, wird in der dll eingebunden, und in programmen, die die dll nutzen
#ifdef GAMEENGINE_EXPORTS
#define GAMEENGINEAPI __declspec(dllexport)
#else
#define GAMEENIGINEAPI __declspec(dllimport)
#endif

struct GAMEENGINEAPI Vector
{
	double x;
	double y;
	double z;
};

//Abstract class entity
class GAMEENGINEAPI Entity
{
public:
	Entity();
	~Entity();

	Vector getPosition(){ return position; };
	double returnDamage(){ return damage; };		//returnDamage() anstelle von getDamage(), um verwechslungen mit receiveDamage(double) vorzubeugen

	void setPosition(Vector pPosition){ position = pPosition; };
	void setDamage(double pDamage){ damage = pDamage; };
	virtual void receiveDamage(double pDamage);
	virtual void performAction() = 0;

private:
	Vector position;
	double damage;
};


//Abstract class BuiltEntity
class GAMEENGINEAPI BuiltEntity :
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