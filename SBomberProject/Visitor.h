#pragma once

class Bomb;
class Plane;

class Visitor
{
public:
	virtual void log(const Bomb& bomb) const = 0;
	virtual void log(const Plane& plane) const = 0;

};

class LogVisitor : public Visitor 
{
public:
	void log(const Bomb& bomb) const override;
	void log(const Plane& plane) const override;

};



