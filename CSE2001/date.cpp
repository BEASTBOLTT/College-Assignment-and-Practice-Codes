#include <iostream>

class Date {
private:
    int day, month, year;

public:
    Date(int d, int m, int y) : day(d), month(m), year(y) {}

    bool operator<(const Date& other) const {
        if (year != other.year) return year < other.year;
        if (month != other.month) return month < other.month;
        return day < other.day;
    }

    Date& operator++() {
        if (++day > daysInMonth()) {
            day = 1;
            if (++month > 12) {
                month = 1;
                year++;
            }
        }
        return *this;
    }

    Date operator+(int days) const {
        Date newDate = *this;
        for (int i = 0; i < days; i++) {
            ++newDate;
        }
        return newDate;
    }

    friend std::ostream& operator<<(std::ostream& os, const Date& dt) {
        os << dt.day << "/" << dt.month << "/" << dt.year;
        return os;
    }

    int daysInMonth() const {
        if (month == 2) {
            if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
                return 29;
            } else {
                return 28;
            }
        } else if (month == 4 || month == 6 || month == 9 || month == 11) {
            return 30;
        } else {
            return 31;
        }
    }
};

int main() {
    int day, month, year;
    std::cout << "Enter day: ";
    std::cin >> day;
    std::cout << "Enter month: ";
    std::cin >> month;
    std::cout << "Enter year: ";
    std::cin >> year;

    Date dt(day, month, year);
    std::cout << "Date: " << dt << std::endl;

    Date dt2 = dt + 10;
    std::cout << "Date after adding 10 days: " << dt2 << std::endl;

    return 0;
}