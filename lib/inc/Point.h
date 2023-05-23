#ifndef POINT
#define POINT

#include<sstream>
#include<ostream>

template<typename T>
struct Point {

	T x, y, z;
	Point(): x(0), y(0),z(0) {} // default constructor , to work when no argument is provided with object declaration.
	Point(T r, T c, T b): x{r}, y{c}, z{b} {}
	Point(T r, T c): x(r), y(c), z(0) {}
};

template<typename T>
std::ostream& operator <<(std::ostream& out, const Point<T>& obj) {
	if (obj.z == 0)  out << "( " << obj.x << " , " << obj.y << " )";
	else   out << "( " << obj.x << " , " << obj.y << " , " << obj.z << " )";
	return out;
}

template<typename T>
Point<T> operator - (const Point<T>& A, const Point<T>& B) {
	Point<T> temp;
	temp.x = A.x - B.x;
	temp.y = A.y - B.y;
	temp.z = A.z - B.z;
	return temp;
}

template<typename T>
Point<T> operator + (const Point<T>& A, const Point<T>& B) {
	Point<T> temp;
	temp.x = A.x + B.x;
	temp.y = A.y + B.y;
	temp.z = A.z + B.z;
	return temp;
}

template<typename T>
Point<T> operator * (const Point<T>& A, const Point<T>& B) {
	Point<T> temp;
	temp.x = A.x * B.x;
	temp.y = A.y * B.y;
	temp.z = A.z * B.z;
	return temp;
}

template<typename T>
Point<T> operator / (const Point<T>& A, const Point<T>& B) {
	Point<T> temp;
	temp.x = A.x / B.x;
	temp.y = A.y / B.y;
	temp.z = A.z / B.z;
	return temp;
}
#endif // POINT
