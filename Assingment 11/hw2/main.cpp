/* CH-230-A
  A11.p2(Cpp)
 Valdrin Smakaj
Vsmakaj@jacobs-university.de
*/

#include <iostream>

using namespace std;

//class creature
class Creature {
	public:
		Creature();
		void run() const;
		~Creature();

	protected:
		int distance;
};

Creature::Creature(): distance(10)
{}
//constructor
Creature::~Creature(){}
//func for run
void Creature::run() const
{
    cout << "running " << distance << " meters!\n";
}
//inheritance class,public private data
class Wizard : public Creature {
	public:
		Wizard();
		void hover() const;
		~Wizard();


	private:
		int distFactor;
};

Wizard::Wizard() : distFactor(3)
{}
//constructors
Wizard::~Wizard(){}
void Wizard::hover()const
{
    cout<<"Constructor called"<<endl;
    cout << "hovering " << (distFactor * distance) << " meters!\n";
}

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

Wolf::Wolf() : Period(2)
{}
//cons,desc
Wolf::~Wolf(){}
void Wolf::Fast() const
{
    cout<<"Constructor called"<<endl;
    cout << "Wolves can go up to " << (distance/Period) << " meters per second!\n";
}
//dino class as inheritance
class Dinosaur : public Creature {
    public:
		Dinosaur();
		void Size1() const;
		~Dinosaur();

	private:
		int Size2;
};

Dinosaur::Dinosaur() : Size2(20)
{}
//cons,desc,func
Dinosaur::~Dinosaur(){}
void Dinosaur::Size1() const
{
    cout<<"Constructor called"<<endl;
    cout << "The Dinosaur is " << Size2 << " meters long"<<endl;
    cout<<"It is like "<<distance<<" Humans big!\n"<<endl;
}
//main function
int main()
{
    //creating and calling func
    cout << "Creating a Creature.\n";
    Creature c;
    c.run();

    cout << "\nCreating a Wizard.\n";
    Wizard w;
    w.run();
    w.hover();

    cout << "\nCreating a Wolf.\n";
    Wolf d;
    d.run();
    d.Fast();

    cout << "\nCreating a Dinosaur.\n";
    Dinosaur dino;
    dino.run();
    dino.Size1();

    return 0;
}
