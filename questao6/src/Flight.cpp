#include <iostream>
#include "Flight.hpp"
#include <string>

using namespace std;

int Flight::totalSeat = 100;

Flight::Flight(int numFlight, string date, string time){

        setNumFlight(numFlight);
        setDate(date);
        setTime(time);

        for(int i = 0; i<totalSeat; i++) {
                if(i%3 == 0) {

                        availableSeat[i] = true;

                }else{

                        availableSeat[i] = false;
                }

        }
}

string Flight::verify(int numSeat){

        if(this->availableSeat[numSeat] == true) {

                return "Cadeira Ocupada";
        }
        return "Cadeira Desocupada";
}

int Flight::nextFree(){

        for(int i = 0; i < 100; i++) {

                if(this->availableSeat[i] == false) {

                        return i+1;

                }
        }
        return -1;
}

int Flight::vacancies(){

        int cont = 0;

        for(int i = 0; i < 100; i++) {

                if(this->availableSeat[i] == false) {

                        cont++;
                }
        }

        return cont;
}

bool Flight::occupy(int numSeat){

        if(this->availableSeat[numSeat] == false) {
                this->availableSeat[numSeat] = true;
                return true;

        }else{
                return false;
        }
}

void Flight::setNumFlight(int numFlight){

        this->numFlight = numFlight;
}

void Flight::setNumSeat(int numSeat){

        this->numSeat = numSeat;
}

void Flight::setDate(string date){

        this->date = date;
}

void Flight::setTime(string time){

        this->time = time;
}

int Flight::getNumFlight(){

        return numFlight;
}

int Flight::getNumSeat(){

        return numSeat;
}

string Flight::getDate(){

        return date;
}

string Flight::getTime(){

        return time;
}
