#include <fstream>
#include <iostream>
#include <iomanip>
using namespace std;

class Product{
    public:
        Product(){cost = 0;}

        virtual void input(istream& ins){return;}
        virtual void output(ostream& outs)const{return;}

    private:
        double cost;
};

class Tent:public Product{
    public:
        Tent(){sleeps = -1; length = -1; width = -1; color = "x";}

        void input(istream& ins);
        void output(ostream& outs)const;

    private:
        int sleeps;
        int length;
        int width;
        string color;
};

class FishingRod:public Product{
    public:
    //Casting Rod
        FishingRod(){length = -1; action = "x"; power = "x";}

        void input(istream& ins);
        void output(ostream& outs)const;

    private:
        int length; //7' 7'2 7'6
        string action; //Moderate Fast Fast Extra Fast
        string power; //Medium Medium Heavy
};

class Sandal:public Product{
    public:
        Sandal(){shoeSize = -1; toeSeps = -1; color = "x";}

        void input(istream& ins);
        void output(ostream& outs)const;

    private:
        int shoeSize; //Whole Sizes
        int toeSeps; //Whole Nums
        string color; //Color -> Bungee Cord - Monkey Ear -> Molten Pistachio Crust
};

class Vest:public Product{
    public:
        Vest(){vestSize = 'x'; whistles = -1; color = "x";}

        void input(istream& ins);
        void output(ostream& outs)const;

    private:
        char vestSize; //Whole Sizes S M L
        int whistles; //number of whistles on the jacket
        string color; //Color -> DeadGrass, Leaf, Bigger Leaf
};

class ATV:public Product{
    public:
        ATV(){engineCC = -1; frontRack = -1; headlights = "x";}

        void input(istream& ins);
        void output(ostream& outs)const;

    private:
        int engineCC; //600cc 500cc 400cc 800cc
        int frontRack; //100lb, 50lb, 25lb
        string headlights; //Halogen or LED
};