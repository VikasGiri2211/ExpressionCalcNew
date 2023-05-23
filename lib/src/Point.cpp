
#include"Point.h"

// DOUBT.... -> why when I use this file for the below definitions, it gives unresolved externals error.

//template<typename T>
//std::ostream& operator <<(std::ostream& out, const Point<T>& obj) {
//	if (obj.z == 0)  out << "( " << obj.x << " , " << obj.y << " )";
//	else   out << "( " << obj.x << " , " << obj.y << " , " << obj.z << " )";
//	return out;
//}
//template<typename T>
//Point<T> operator - (const Point<T>& A, const Point<T>& B) {
//	Point<T> temp;
//	temp.x = A.x - B.x;
//	temp.y = A.y - B.y;
//	temp.z = A.z - B.z;
//	return temp;
//}
//
//template<typename T>
//Point<T> operator + (const Point<T>& A, const Point<T>& B) {
//	Point<T> temp;
//	temp.x = A.x + B.x;
//	temp.y = A.y + B.y;
//	temp.z = A.z + B.z;
//	return temp;
//}
//
//template<typename T>
//Point<T> operator * (const Point<T>& A, const Point<T>& B) {
//	Point<T> temp;
//	temp.x = A.x * B.x;
//	temp.y = A.y * B.y;
//	temp.z = A.z * B.z;
//	return temp;
//}
//
//template<typename T>
//Point<T> operator / (const Point<T>& A, const Point<T>& B) {
//	Point<T> temp;
//	temp.x = A.x / B.x;
//	temp.y = A.y / B.y;
//	temp.z = A.z / B.z;
//	return temp;
//}