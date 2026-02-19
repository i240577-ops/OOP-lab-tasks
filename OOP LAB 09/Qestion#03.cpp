//#include <iostream>
//using namespace std;
//
//class Circle;
//
//class MathHelper {
//public:
//    static double calculateArea(Circle c);
//    static double calculateCircumference(Circle c);
//};
//
//class Circle {
//private:
//    double radius;
//    const double pi;
//
//public:
//    Circle(double r) : radius(r), pi(3.1416) {}
//
//    friend double MathHelper::calculateArea(Circle c);
//    friend double MathHelper::calculateCircumference(Circle c);
//};
//
//double MathHelper::calculateArea(Circle c) {
//    if (c.radius <= 0) {
//        cout << "Invalid circle dimensions!" << endl;
//        return 0;
//    }
//    double area = c.pi * c.radius * c.radius;
//    return area;
//}
//
//double MathHelper::calculateCircumference(Circle c) {
//    if (c.radius <= 0) {
//        cout << "Invalid circle dimensions!" << endl;
//        return 0;
//    }
//    double circumference = 2 * c.pi * c.radius;
//    return circumference;
//}
//
//int main() {
//    float size1, size2;
//
//    cout << "Enter size for 1st circle : ";
//    cin >> size1;
//
//    cout << "Enter size for 2nd circle : ";
//    cin >> size2;
//
//    Circle c1(size1);
//    Circle c2(size2);
//
//    cout << "Circle 1:" << endl;
//    cout << "Area = " << MathHelper::calculateArea(c1) << endl;
//    cout << "Circumference = " << MathHelper::calculateCircumference(c1) << endl;
//
//    cout << "Circle 2:" << endl;
//    cout << "Area = " << MathHelper::calculateArea(c2) << endl;
//    cout << "Circumference = " << MathHelper::calculateCircumference(c2) << endl;
//
//    return 0;
//}
