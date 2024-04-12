#pragma once

#include "../Utility/Vector2D.h"

class Player
{
private:
	Vector2D location;
	Vector2D direction;
	float redius;

public:
	Player();
	Player(float x, float y);
	Player(Vector2D location);
	~Player();

	void Update();
	void Draw() const;

	void SetLocation(float x, float y);
};

