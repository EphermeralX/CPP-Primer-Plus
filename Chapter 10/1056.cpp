#include <iostream>
using namespace std;

class Move
{
 private:
  double x;
  double y;
 public:
  Move(double a = 0, double b = 0);
  void showMove() const;
  Move add(const Move& m) const;
  void reset(double a = 0, double b = 0);
};

Move::Move(double a, double b) {
    x = a;
    y = b;
}
 
void Move::showMove() const{
    std::cout << "move x: " << x << ", y: " << y << std::endl;
};
 
Move Move::add(const Move& m) const {
    return Move(x + m.x, y + m.y);
};
 
void Move::reset(double a, double b) {
    x = a;
    y = b;
};

int main(int argc, char const *argv[])
{
    Move a, b(12.5,19);
    double x,y;
    a.showMove();
    b.showMove();
    cout << "Enter x and y: ";
    cin >> x >> y;
    cout << "Reset Object A: " <<endl;
    a.reset(x,y);
    a.showMove();
    b.showMove();
    cout << "Object A add B: " <<endl;
    a = a.add(b);
    a.showMove();
    b.showMove();
    return 0;
}

