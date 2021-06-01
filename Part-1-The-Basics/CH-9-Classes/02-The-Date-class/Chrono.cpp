#include "Chrono.h"
using namespace Chrono;

namespace Chrono {
    // member function definitions:

    Date::Date(int yy, Month mm, int dd)
         :y{yy}, m{mm}, d{dd}
    {
        if (!is_date(yy, mm, dd)) throw Invalid{};
    }

    const Date& default_date()
    {
        static Date dd {2001, Month::jan, 1};
        return dd;
    }

    // Date::Date()
    //      :y{2001}, m{Month::jan}, d{1}
    // {
    // }

    Date::Date()
         :y{default_date().year()},
          m{default_date().month()},
          d{default_date().day()}
    {    
    }

    void Date::add_day(int n)
    {
        // ...
    } 

    void Date::add_month(int n)
    {
        // ...
    }

    void Date::add_year(int n)
    {
        if (m == Month::feb && d == 29 && !leapyear(y+n)){     // beware of leap year
            m = Month::mar;                                    // use march 1 instead of february 29
            d = 1;
        }
        y+=n;
    }

    // helper functions:

    bool is_date(int y, Month m, int d)
    {
        // assume that y is valid

        if (d <= 0) return false;        // d must be positive
        if (m < Month::jan || Month::dec < m) return false;

        int days_in_month = 31;         // most months have 31 days

        switch (m){
            case Month::feb:
                days_in_month = (leapyear(y))?29:28;
                break;
            case Month::apr: case Month::jun: case Month::sep: case Month::nov:
                days_in_month = 30;
                break;
        }

        if (days_in_month<d) return false;

        return true;
    }

    bool leapyear(int y)
    {
        // ...
    }

    bool operator==(const Date&a, const Date& b)
    {
        return a.year()==b.year()
                && a.month()==b.month()
                && a.day()==b.day();
    }

    bool operator!=(const Date&a, const Date& b)
    {
        return !(a==b);
    }

    ostream& operator<<(ostream& os, const Date& d)
    {
        // error in printing d.month()
        return os << '('<<d.year()
                    <<',' << d.month() // <--
                    <<','<<d.day()<<')';
    }

    istream& operator>>(istream& is, Date& dd)
    {
        int y, m, d;
        char ch1, ch2, ch3, ch4;
        is>>ch1>>y>>ch2>>m>>ch3>>d>>ch4;

        if(!is) return is;
        if (ch1!='('|| ch2!=','|| ch3!=','|| ch4!=')'){
            is.clear(ios_base::failbit);
            return is;
        }

        dd = Date(y, Month(m), d);

        return is;
    }

    enum class Day{
        sunday, monday, tuesday, wednesday, thursday, friday, saturday 
    };

    Day day_of_week(const Date& d)
    {
        // ...
    }

    Day next_Sunday(const Date& d)
    {
        // ...
    }

    Date next_weekday(const Date& d)
    {
        // ...
    }
};

