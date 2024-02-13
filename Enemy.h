#pragma once
#include "Phase.h"
class Enemy
{
public:

	/// <summary>
	/// XV
	/// </summary>
	void Update();


	bool GetCount() { return count; }

private:

	/// <summary>
	/// Ú‹ß
	/// </summary>
	void Approach();

	/// <summary>
	/// Œ‚‚Â
	/// </summary>
	void Shooting();

	/// <summary>
	/// —£’E
	/// </summary>
	void Leave();



private:

	static void (Enemy::* fhaseTable[])();

	Phase phase_ = Phase::APPROACH;

	bool count = false;

};
