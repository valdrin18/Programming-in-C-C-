#include <iostream>
#ifndef CREATURE_H
#define CREATURE_H

using namespace std;
//creature class with private and public data
class Creature {
	public:
		Creature();
		void run() const;
		~Creature();

	protected:
		int distance;
};
//wizard class as inheritance with it's public
//and private data
class Wizard : public Creature {
	public:
		Wizard();
		void hover() const;
		~Wizard();


	private:
		int distFactor;
};

//wolf class as inheritance with it's public
//and private data
class Wolf : public Creature {
    public:
		Wolf();
		void Fast() const;
		~Wolf();

	private:
		double Period;
};

//dinosaur class as inheritance with it's public
//and private data
class Dinosaur : public Creature {
    public:
		Dinosaur();
		void Size1() const;
		~Dinosaur();

	private:
		int Size2;
};
#endif // CREATURE_H
