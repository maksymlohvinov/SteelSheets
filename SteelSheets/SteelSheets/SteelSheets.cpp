#include <iostream>
#include <vector>

class SteelSheet {
protected:
    double thickness;
    double density;

public:
    virtual double Area() = 0;
    double Weight() {
        return Area() * thickness * density;
    }

    virtual void Information() = 0;
};

class SquareSheet : public SteelSheet {
private:
    double side;

public:
    SquareSheet(double side, double thickness, double density) {
        this->side = side;
        this->thickness = thickness;
        this->density = density;
    }

    double Area() override {
        return side * side;
    }

    void Information() override {
        std::cout << "Type: Square Sheet, Area: " << Area() << " sq.mm, Weight: " << Weight() << " kg" << std::endl;
    }
};

class RectangleSheet : public SteelSheet {
private:
    double width;
    double length;

public:
    RectangleSheet(double width, double length, double thickness, double density) {
        this->width = width;
        this->length = length;
        this->thickness = thickness;
        this->density = density;
    }

    double Area() override {
        return width * length;
    }

    void Information() override {
        std::cout << "Type: Rectangular Sheet, Area: " << Area() << " sq.mm, Weight: " << Weight() << " kg" << std::endl;
    }
};

class TriangleSheet : public SteelSheet {
private:
    double catet1;
    double catet2;

public:
    TriangleSheet(double cathetus1, double cathetus2, double thickness, double density) {
        this->catet1 = catet2;
        this->catet1 = catet2;
        this->thickness = thickness;
        this->density = density;
    }

    double Area() override {
        return 0.5 * catet1 * catet2;
    }

    void Information() override {
        std::cout << "Type: Triangular Sheet, Area: " << Area() << " sq.mm, Weight: " << Weight() << " kg" << std::endl;
    }
};

int main() {
    //1 
    std::vector<SteelSheet*> steelSheets(15);

    //2
    steelSheets[0] = new SquareSheet(100, 1.5, 78);
    steelSheets[1] = new SquareSheet(100, 1.5, 78);
    steelSheets[2] = new SquareSheet(100, 1.5, 78);
    steelSheets[3] = new SquareSheet(100, 1.5, 78);
    steelSheets[4] = new SquareSheet(100, 1.5, 78);




    steelSheets[5] = new RectangleSheet(90, 120 * 10, 1.2, 78);
    steelSheets[6] = new RectangleSheet(90, 120 * 10, 1.2, 78);
    steelSheets[7] = new RectangleSheet(90, 120 * 10, 1.2, 78);
    steelSheets[8] = new RectangleSheet(90, 120 * 10, 1.2, 78);
    steelSheets[9] = new RectangleSheet(90, 120 * 10, 1.2, 78);
    steelSheets[10] = new RectangleSheet(90, 120 * 10, 1.2, 78);
    steelSheets[11] = new RectangleSheet(90, 120 * 10, 1.2, 78);




    steelSheets[12] = new TriangleSheet(50, 70, 1.8, 78);
    //->
    double totalArea = 0.0;
    double totalWeight = 0.0;

    for (size_t i = 0; i < steelSheets.size(); ++i) {
        steelSheets[i]->Information();
        totalArea += steelSheets[i]->Area();
        totalWeight += steelSheets[i]->Weight();
        std::cout << std::endl;
    }

    std::cout << "\nTotal area of all sheets: " << totalArea << " square mm" << std::endl;
    std::cout << "Total weight of all sheets: " << totalWeight << " kg" << std::endl;
    //3
    delete steelSheets[0];
    delete steelSheets[1];
    delete steelSheets[2];
    delete steelSheets[3];
    delete steelSheets[4];
    delete steelSheets[5];
    delete steelSheets[6];
    delete steelSheets[7];
    delete steelSheets[8];
    delete steelSheets[9];
    delete steelSheets[10];
    delete steelSheets[11];
    delete steelSheets[12];

    //Fin:
    std::cout << "\n\nFinish" << std::endl;
}



