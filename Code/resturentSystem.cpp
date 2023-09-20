#include <iostream>
#include <vector>
using namespace std;
int counter = 0;
class Meal {
  string name, type;
  float price;
  int id;

public:
  Meal(int id, string name, float price, string type = "Sandwitch") {
    Meal::name = name;
    Meal::type = type;
    Meal::price = price;
    Meal::id = id;
  }
  string getName() { return name; }
  float getPrice() { return price; }
  string getType() { return type; }
  int getId() { return id; }
};

class Menu {
  string note;
  // counter ++
  Meal allMeals[4] = {Meal(1, "Hotdog", 7), Meal(2, "Chicken sandwitch", 9),
                      Meal(3, "Cheese Buger", 9, "BURGER Sandwitch"),
                      Meal(4, "Beef Burger", 10, "BURGER Sandwitch")

  };

public:
  Menu(string n) { note = n; }
  void printMenu() {
    cout << "\t"
         << "Sandwitch" << endl
         << endl;
    for (int i = 0; i < 4; i++) {
      if (allMeals[i].getType() == "Sandwitch")
        cout << allMeals[i].getId() << ". " << allMeals[i].getName() << " "
             << allMeals[i].getPrice() << "$" << endl;
    }
    cout << "\n\t"
         << "BURGER Sandwitch" << endl
         << endl;

    for (int i = 0; i < 4; i++) {
      if (allMeals[i].getType() != "Sandwitch")
        cout << allMeals[i].getId() << ". " << allMeals[i].getName() << " "
             << allMeals[i].getPrice() << "$" << endl;
    }
    cout << "\n*" << note << endl << endl;
    cout << "\t<---------------------->\n";
  }

  Meal getMeal(int mealId) {
    for (int i = 0; i < 4; i++) {
      if (allMeals[i].getId() == mealId)
        return allMeals[i];
    }

    return Meal(-1, "-", -1);
  }
};
class Order {
  int id;
  float total;
  vector<Meal> orderedMeals; // vector<int>

public:
  Order() {
    id = counter++;
    total = 0;
  }
  void addMeal(Menu m, int mealId) {
    // get meal --> id
    // add meal vector
    Meal temp = m.getMeal(mealId);
    if (temp.getId() != -1) {
      orderedMeals.push_back(temp);
      total += temp.getPrice();
    } else if (mealId != -1)
      cout << "Meal Not Found\n";
  }

  void printOrder() {
    for (int i = 0; i < orderedMeals.size(); i++) {
      cout << i + 1 << ". " << orderedMeals[i].getName() << "  "
           << orderedMeals[i].getPrice() << endl;
    }
    cout << "----------------------\n";
    cout << "Total is : " << total << endl;
  }
  void removeMeal(int id) {

    float price = orderedMeals[id].getPrice();
    orderedMeals.erase(orderedMeals.begin() + id);
    total -= price;
  }
};

class Customer {
  Menu m = Menu("All served with french fires");
  Order o = Order();

public:
  void printMenu() { m.printMenu(); }
  void addMeal(int id) { o.addMeal(m, id); }
  void removeMeal(int id) { o.removeMeal(id); }

  void printOrder() { o.printOrder(); }
};

void printUserMenu() {
  cout << "---------------------------\n";
  cout << "Welcome:" << endl;
  cout << "Enter the order number:\n";
  cout << "1. Get The Resturent Menu\n";
  cout << "2. Add Meal To The Order\n";
  cout << "3. Remove Meal To The Order\n";
  cout << "4. Print Order\n";
  cout << "5.Get The Pill\n";
}

int main()

{
  int num, mId;
  Customer c = Customer();
  do {
    printUserMenu();
    cin >> num;
    switch (num) {
    case 1:
      c.printMenu();
      break;

    case 2:
      cout << "*To Stop Operation Enter -1\n";
      do {
        cout << "Enter The Meal ID:";
        cin >> mId;
        c.addMeal(mId);
      } while (mId != -1);
      break;
    case 3:
      cout << "Enter The Meal ID:";
      cin >> mId;
      mId--;
      c.removeMeal(mId);
      break;
    case 4:
      c.printOrder();
    }
  } while (num > 0 && num < 5);
  c.printOrder();
  cout << "Welcome again, hope you enjoyed\n";
}
