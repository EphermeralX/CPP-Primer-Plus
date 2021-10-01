typedef int Item;
 
class List {
 private:
  enum {Max = 10};
  Item items[Max];
  int first;
 public:
  List();
  bool isempty() const;
  bool isfull() const;
  bool append(const Item& item);
  void visit (void (*pf) (Item&));
};
