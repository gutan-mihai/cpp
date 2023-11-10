#pragma once

#include <iostream>
#include <list>

using namespace std;

// Напишите программу, которая содержит текущую информацию о десяти заявках на авиабилеты.
// Каждая заявка должна иметь:
// - пункт назначения;
// - номер рейса;
// - ФИО пассажира;
// - желаемую дату вылета.

// Программа должна обеспечивать:
// - хранение всех заявок в виде списка;
// - добавление и удаление заявок;
// - вывод всех заявок.

struct AirTicket {
    string destination;
    string flight_number;
    string passenger_name;
    string departure_date;
}

class A {
public:
    void run() {
        list<AirTicket> air_tickets;
    }
}