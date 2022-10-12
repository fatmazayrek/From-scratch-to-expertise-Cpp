#include <iostream>
#include <math.h>
#include <cstring>
#include <time.h>
using namespace std;

//Structures in a structure 
struct Category{
    string categoryName;
    int numberofProducts;
};

struct Platform
{
    string platformName;
    bool isOpen;
    int totalProducts;
    Category categories;
};

struct PlatformWithPointers
{
    string platformName;
    bool isOpen;
    int totalProducts;
    Category *categories;
};


int main(){
    Category categories = {"Makarna", 250};
    Category c2 = {"Mercimek", 300};
    Category c3 = {"Tavuk", 520};

    Platform p1 = {"Kuru Gida", 1, categories.numberofProducts + c2.numberofProducts, categories};

    PlatformWithPointers p2;
    p2.platformName = "Kasap";
    p2.isOpen = 1;
    p2.categories = &c3;
    p2.totalProducts = 650;

    cout << p1.platformName << " " << p1.isOpen << " " << p1.totalProducts << " " << p1.categories.categoryName << " " << p1.categories.numberofProducts;
    cout << endl << p2.platformName << " " << p2.isOpen << " " << p2.totalProducts << " " << p2.categories->categoryName << " " << p2.categories->numberofProducts;
}


