/**
 * @file prodmain.cc
 * @author Jansen Craft
 * @brief - Program that allows user to put in order and view them for Shmass Shmro Shops
 * @date 2022-03-31
 */
#include <fstream>
#include <iostream>
#include <list>
#include "product.h"
using namespace std;

char menu();

int main(){
  char choice;
  ifstream fin;
  ofstream fout;
  int loops = 0;
  string tmp;

	cout << "Welcome to..." << endl;
  cout << " _______ __                                    _______ __                             _______ __                           " << endl;
	cout << "|     __|  |--.--------.---.-.-----.-----.    |     __|  |--.--------.----.-----.    |     __|  |--.----.-----.-----.-----." << endl;
  cout << "|__     |     |        |  _  |__ --|__ --|    |__     |     |        |   _|  _  |    |__     |     |   _|  _  |  _  |__ --|" << endl;
  cout << "|_______|__|__|__|__|__|___._|_____|_____|    |_______|__|__|__|__|__|__| |_____|    |_______|__|__|__| |_____|   __|_____|" << endl;
  cout << "                                                                                                              |__|         " << endl;

	//Shopping Cart
	list<Product*> cart;

  //Iterator
  list<Product*>::iterator it;

  fin.open("orders.txt");
  if(!fin.fail()){
    while(!fin.eof()){
      getline(fin, tmp);
      if(tmp == "Tent"){
        Tent* tempo = new Tent;
        tempo -> input(fin);
        cart.push_back(tempo);
      } else if(tmp == "FishingRod"){
        FishingRod* tempo = new FishingRod;
        tempo -> input(fin);
        cart.push_back(tempo);
      } else if(tmp == "Sandal"){
        Sandal* tempo = new Sandal;
        tempo -> input(fin);
        cart.push_back(tempo);
      } else if(tmp == "Vest"){
        Vest* tempo = new Vest;
        tempo -> input(fin);
        cart.push_back(tempo);
      } else if(tmp == "ATV"){
        ATV* tempo = new ATV;
        tempo -> input(fin);
        cart.push_back(tempo);
      }
    }
    fin.close();
	}

	choice = menu();
	while(choice != '0'){
    switch(choice){
    case '1':{
      Tent* temp = new Tent;
      temp -> input(cin);
      cart.push_back(temp);
      break;
    }
    case '2':{
      FishingRod* temp = new FishingRod;
      temp -> input(cin);
      cart.push_back(temp);
      break;
    }
    case '3':{
      Sandal* temp = new Sandal;
      temp -> input(cin);
      cart.push_back(temp);
      break;
    }
    case '4':{
      Vest* temp = new Vest;
      temp -> input(cin);
      cart.push_back(temp);
      break;
    }
    case '5':{
      ATV* temp = new ATV;
      temp -> input(cin);
      cart.push_back(temp);
      break;
    }
    case '6':{
      it = cart.begin();
      cout << endl << ">|<     Shopping Cart     >|<" << endl << endl;
      while(it != cart.end()){
        (*it)->output(cout);
        it++;
      }
      break;
    }
    case '7':{
      //remove all elements
      it = cart.begin();
      cart.erase(cart.begin(), cart.end());
      break;
    }
    case '0':
      //Ends the loop
      break;
    default:
      //Resets Back to Top
      break;
    }
    choice = menu();
	}

  fout.open("orders.txt");
  if(!fout.fail()){
    it = cart.begin();
    while(it != cart.end()){
      if(loops > 0){ //if not first then put endl at begining
        fout << endl;
      }
      (*it)->output(fout);
      it++;
      loops++;
    }
  } else {
    cout << "Error: Data Unsaved" << endl;
  }
  fout.close();
	return 0;
}

char menu(){
  char choice;
  cout << ">|<   Choose an Option    >|<" << endl;
  cout << "1 - Buy a Custom Tent." << endl;
  cout << "2 - Buy a Fishing Pole." << endl;
  cout << "3 - Buy a pair of Sandals." << endl;
  cout << "4 - Buy a Turkey Vest." << endl;
  cout << "5 - Buy an ATV." << endl;
  cout << "6 - Display Shopping Cart." << endl;
  cout << "7 - Remove all items from the shopping cart." << endl;
  cout << "0 - Quit & save all changes." << endl;
  cout << ">|<                       >|<" << endl;
  cout << endl << "> ";
  cin >> choice;
  return choice;
}