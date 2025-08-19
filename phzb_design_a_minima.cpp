#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Data Model for Minimalist Mobile App Dashboard

class Widget {
public:
    string name;
    string type; // e.g. "chart", "list", "button"
    int x, y, width, height; // position and size
};

class Dashboard {
public:
    string title;
    vector<Widget> widgets;

    void addWidget(Widget widget) {
        widgets.push_back(widget);
    }

    void display() {
        cout << "Dashboard: " << title << endl;
        for (const auto& widget : widgets) {
            cout << "  " << widget.name << " (" << widget.type << ") at (" << widget.x << ", " << widget.y << ")" << endl;
        }
    }
};

int main() {
    Dashboard dashboard;
    dashboard.title = "My Minimalist Dashboard";

    Widget widget1;
    widget1.name = "Revenue Chart";
    widget1.type = "chart";
    widget1.x = 10;
    widget1.y = 20;
    widget1.width = 300;
    widget1.height = 200;

    Widget widget2;
    widget2.name = "Task List";
    widget2.type = "list";
    widget2.x = 350;
    widget2.y = 20;
    widget2.width = 200;
    widget2.height = 300;

    dashboard.addWidget(widget1);
    dashboard.addWidget(widget2);

    dashboard.display();

    return 0;
}