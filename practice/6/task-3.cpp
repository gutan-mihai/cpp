#pragma once

#include <iostream>
#include <list>
#include <string> // для функции getline()

using namespace std;

// Напишите программу, которая содержит текущую информацию о десяти заявках на
// авиабилеты. Каждая заявка должна иметь:
// - пункт назначения;
// - номер рейса;
// - ФИО пассажира;
// - желаемую дату вылета.

// Программа должна обеспечивать:
// - хранение всех заявок в виде списка;
// - добавление и удаление заявок;
// - вывод всех заявок.

struct AirTicket {
    string name;
    string destination;
    string flight_number;
    string departure_date;
};

class AirTicketRequests {
public:
    void run() {
        cout << "Press `a` to add" << endl;
        cout << "Press `d` to delete" << endl;
        cout << "Press `s` to show" << endl;
        cout << "Everything else to exit" << endl;

        show_menu();
    }

private:
    list<AirTicket> air_tickets;

    void show_menu() {
        cout << "----------------------------------" << endl;
        cout << "Select action: " << endl;

        string button;
        getline(cin, button);

        if (button == "a") {
            add_ticket();
        } else if (button == "d") {
            delete_ticket();
        } else if (button == "s") {
            show_tickets();
        }
    }

    void add_ticket() {
        cout << "Enter name: ";
        string name;
        getline(cin, name);

        cout << "Enter destination: ";
        string destination;
        getline(cin, destination);

        cout << "Enter flight number: ";
        string flight_number;
        getline(cin, flight_number);

        cout << "Enter departure date: ";
        string departure_date;
        getline(cin, departure_date);

        AirTicket ticket;
        ticket.name = name;
        ticket.destination = destination;
        ticket.flight_number = flight_number;
        ticket.departure_date = departure_date;
        air_tickets.push_back(ticket);

        show_menu();
    }

    void delete_ticket() {
        cout << "Enter passenger name to delete: ";
        string name;
        getline(cin, name);
        air_tickets.remove_if(
            [&](const AirTicket &ticket) { return ticket.name == name; } //
        );

        show_menu();
    }

    void show_tickets() {
        cout << "Name\tDestination\tFlight Number\tDeparture Date" << endl;
        for_each(                                      //
            air_tickets.begin(),                       //
            air_tickets.end(),                         //
            [](const AirTicket &ticket) {              //
                cout << ticket.name << "\t"            //
                     << ticket.destination << "\t\t"   //
                     << ticket.flight_number << "\t\t" //
                     << ticket.departure_date << "\t"  //
                     << endl;                          //
            }                                          //
        );

        show_menu();
    }
};