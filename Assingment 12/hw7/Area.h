#ifndef AREA_H
#define AREA_H
//class with properties

class Area
{
	public:
		Area(const char *n);
		virtual ~Area();
		void getColor() const;
		virtual double calcArea() const = 0;
		virtual double calcPerimeter() const = 0;
	private:
		char color[11];
};

#endif
