#include <iostream>
#ifndef CREATURE_H
#define CREATURE_H

using namespace std;

//creature class
class Creature {
	//purlbic,private data
	public:
		Creature();
		void run() const;
		~Creature();

	protected:
		int distance;
};

//wizard class as inheritance
class Wizard : public Creature {
	//public,and private data
	public:
		Wizard();
		void hover() const;
		~Wizard();


	private:
		int distFactor;
};

//wolf class as inheritance
class Wolf : public Creature {
    //public and private data
    public:
		Wolf();
		void Fast() const;
		~Wolf();

	private:
		double Period;
};

//dinosaur class as inheritance
class Dinosaur : public Creature {
    //public and private data
    public:
		Dinosaur();
		void Size1() const;
		~Dinosaur();

	private:
		int Size2;
};
#endif // CREATURE_H
