#include "product.h"

//TENT

void Tent::input(istream& ins){
    string tmp;
    if (&cin == &ins){
        cout << endl << "Enter how many the tent should sleep - Options: ('1', '2', ... '10'): ";
        ins >> sleeps;
        cout << "Enter the length of the tent - Options: ('36', '48', ... '128'): ";
        ins >> length;
        cout << "Enter the width of the tent - Options: ('36', '48', ... '128'): ";
        ins >> width;
        cout << "Enter the tent's color - Options: ('Blue', 'Red', 'Yellow', 'Tan', 'White'): ";
        ins.ignore(100, '\n');
        getline(ins, color);
        cout << endl;
    } else {
        ins >> sleeps;
        ins >> length;
        ins >> width;
        ins.ignore(100, '\n');
        getline(ins, color);
    }
}

void Tent::output(ostream& outs)const{
    if (&cout == &outs){
        cout << " [+] " << right << setw(23) << "[Tent]" << endl;
        cout << right << setw(30) << "Sleeps: " << left << sleeps << endl;
        cout << right << setw(30) << "Length (inches): " << left << length << endl;
        cout << right << setw(30) << "Width (inches): " << left << width << endl;
        cout << right << setw(30) << "Color: " << left << color << endl << endl;
    } else {
        outs << "Tent" << endl;
        outs << sleeps << endl;
        outs << length << endl;
        outs << width << endl;
        outs << color;
    }
}

//FISHING ROD

void FishingRod::input(istream& ins){
    if (&cin == &ins){
        cout << endl << "Enter the length of the rod in whole inches - Options: ('60', '70', ... '90'): ";
        ins >> length;
        ins.ignore(100, '\n');
        cout << "Enter the action type of the rod - Options: ('Moderate Fast', 'Fast', 'Extra Fast'): ";
        getline(ins, action);
        cout << "Enter the power level of the rod - Options: ('Medium', 'Medium Heavy', 'Heavy'): ";
        getline(ins, power);
        cout << endl;
    } else {
        ins >> length;
        ins.ignore(100, '\n');
        getline(ins, action);
        getline(ins, power);
    }
}

void FishingRod::output(ostream& outs)const{
    if (&cout == &outs){
        cout << " [+] " << right << setw(23) << "[Fishing Rod]" << endl;
        cout << right << setw(30) << "Length (inches): " << left << length << endl;
        cout << right << setw(30) << "Action Type: " << left << action << endl;
        cout << right << setw(30) << "Power Level: " << left << power << endl << endl;
    } else {
        outs << "FishingRod" << endl;
        outs << length << endl;
        outs << action << endl;
        outs << power;
    }
}

//SANDALS

void Sandal::input(istream& ins){
    if (&cin == &ins){
        cout << endl << "Enter the size in whole sizes - Options: ('1', '2', '3', ... '12'): ";
        ins >> shoeSize;
        cout << "Enter the number of toe separators - Options: ('1', '2', '3', ... '5'): ";
        ins >> toeSeps;
        ins.ignore(100, '\n');
        cout << "Enter the color - Options: ('Bungee Cord','Monkey Ear','Molten Pistachio'): ";
        getline(ins, color);
        cout << endl;
    } else {
        ins >> shoeSize;
        ins >> toeSeps;
        ins.ignore(100, '\n');
        getline(ins, color);
    }
}

void Sandal::output(ostream& outs)const{
    if (&cout == &outs){
        cout << " [+] " << right << setw(23) << "[Sandals]" << endl;
        cout << right << setw(30) << "Size: " << left << shoeSize << endl;
        cout << right << setw(30) << "Number of Toe Separators: " << left << toeSeps << endl;
        cout << right << setw(30) << "Color: " << left << color << endl << endl;
    } else {
        outs << "Sandal" << endl;
        outs << shoeSize << endl;
        outs << toeSeps << endl;
        outs << color;
    }
}

//VEST

void Vest::input(istream& ins){
    if (&cin == &ins){
        cout << endl << "Enter the size in whole sizes - Options: ('S', 'M', 'L'): ";
        ins >> vestSize;
        cout << "Enter the number of whistles: - Options: ('1', '2', '3', ... '10'): ";
        ins >> whistles;
        ins.ignore(100, '\n');
        cout << "Enter the color - Options: ('DeadGrass', 'Leaf', 'Bigger Leaf'): ";
        getline(ins, color);
        cout << endl;
    } else {
        ins >> vestSize;
        ins >> whistles;
        ins.ignore(100, '\n');
        getline(ins, color);
    }
}

void Vest::output(ostream& outs)const{
    if (&cout == &outs){
        cout << " [+] " << right << setw(23) << "[Vest]" << endl;
        cout << right << setw(30) << "Size: " << left << vestSize << endl;
        cout << right << setw(30) << "Number of Whistles: " << left << whistles << endl;
        cout << right << setw(30) << "Color: " << left << color << endl << endl;
    } else {
        outs << "Vest" << endl;
        outs << vestSize << endl;
        outs << whistles << endl;
        outs << color;
    }
}

//ATV

void ATV::input(istream& ins){
    if (&cin == &ins){
        cout << endl <<"Enter the Engine specifications (in CCs) - Options: ('300', '350', ... '600'): ";
        ins >> engineCC;
        cout << "Enter the front rack's weight allowance (in whole lbs) - Options: ('25', '50', '75', '100'): ";
        ins >> frontRack;
        ins.ignore(100, '\n');
        cout << "Enter the headlights type - Options: ('Halogen', 'LED'): ";
        getline(ins, headlights);
        cout << endl;
    } else {
        ins >> engineCC;
        ins >> frontRack;
        ins.ignore(100, '\n');
        getline(ins, headlights);
    }
}

void ATV::output(ostream& outs)const{
    if (&cout == &outs){
        cout << " [+] " << right << setw(23) << "[ATV]" << endl;
        cout << right << setw(30) << "Engine CCs: " << left << engineCC << endl;
        cout << right << setw(30) << "Front Rack Allowance (lbs): " << left << frontRack << endl;
        cout << right << setw(30) << "Headlight Type: " << left << headlights << endl << endl;
    } else {
        outs << "ATV" << endl;
        outs << engineCC << endl;
        outs << frontRack << endl;
        outs << headlights;
    }
}