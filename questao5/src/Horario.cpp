#include "Horario.hpp"
#include <string>

using namespace std;

Horario::Horario(){
        hour = "00";
        minute = "00";
        second = "00";
}

Horario::Horario(string hour, string minute, string second)
        : Horario()
{
        setHour(hour);
        setMinute(minute);
        setSecond(second);
}

void Horario::setHour(string hour){

        if(hour >= "00" && hour < "24") {
                this->hour = hour;
        }else{
                this->hour = "00";
        }
}

void Horario::setMinute(string minute){

        if(minute >= "00" && minute < "60") {
                this->minute = minute;
        }else{
                this->minute = "00";
        }
}

void Horario::setSecond(string second){

        if(second >= "00" && second < "60") {
                this->second = second;
        }else{
                this->second = "00";
        }
}

void Horario::setHorario(string hour, string minute, string seg){
        setHour(hour);
        setMinute(minute);
        setSecond(seg);
}

string Horario::getHour(){
        return hour;
}

string Horario::getMinute(){
        return minute;
}

string Horario::getSecond(){
        return second;
}

void Horario::avancarHorario(){
        int h, m, s;

        if(hour == "23" && minute == "59" && second == "59") {
                hour = "00";
                minute = "00";
                second = "00";
        }
        else if(minute == "59" && second == "59") {
                h = stoi(hour);
                h++;
                if(h < 10){
                  hour = "0" + to_string(h);
                  minute = "00";
                  second = "00";
                }else{
                  hour = to_string(h);
                  minute = "00";
                  second = "00";
                }

        }
        else if(second == "59") {
                this->hour = hour;
                m = stoi(minute);
                m++;
                if(m < 10){
                  minute = "0" + to_string(h);
                  minute = to_string(m);
                  second = "00";
                }else{

                minute = to_string(m);
                second = "00";
                }

        }else{
                this->hour = hour;
                this->minute = minute;
                s = stoi(second);
                s++;
                if(s < 10){
                    second = "0" + to_string(s);
                }else{
                  second = to_string(s);
                }

        }
}
