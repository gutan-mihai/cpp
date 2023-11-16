#pragma once

#include <iostream>

using namespace std;

// Билет называют «счастливым», если в его номере сумма первых 3 цифр равна
// сумме последних 3 цифр. Подсчитайте количество тех «счастливых» билетов, в
// которых сумма первых 3 цифр равна 13. Номер билета может быть в интервале от
// 000000 до 999999.

class CountOfLuckyTickets {
public:
    void run() {
        int lucky_tickets_count = 0;
        for (int i = 0; i < 1000000; ++i) {
            string ticket = to_string(i);
            if (ticket.size() < 6) {
                add_zeros_in_front(ticket);
            }

            if (!is_lucky_ticket(ticket)) {
                continue;
            }

            if (sum_of_first_three(ticket) != 13) {
                continue;
            }

            ++lucky_tickets_count;
        }

        cout << "lucky tickets count: " << lucky_tickets_count << "\n";
    }

private:
    void add_zeros_in_front(string &ticket_number) {
        while (ticket_number.size() < 6) {
            ticket_number.insert(0, "0");
        }
    }

    bool is_lucky_ticket(const string &ticket_number) {
        return sum_of_first_three(ticket_number) == sum_of_last_three(ticket_number);
    }

    int sum_of_first_three(const string &ticket_number) {
        string first = ticket_number.substr(0, ticket_number.size() / 2);
        return accumulate(first.begin(), first.end(), 0, [](int total, char num) { return (total + (num - '0')); });
    }

    int sum_of_last_three(const string &ticket_number) {
        string back = ticket_number.substr(ticket_number.size() / 2);
        return accumulate(back.begin(), back.end(), 0, [](int total, char num) { return (total + (num - '0')); });
    }
};