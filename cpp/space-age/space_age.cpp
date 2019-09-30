#include "space_age.h"

namespace space_age {
    space_age::space_age(unsigned long age)
    {
        age_seconds = age;
    }

    unsigned long space_age::seconds() const
    {
        return age_seconds;
    }

    double space_age::on_earth() const
    {
        return (double)(seconds() / earth_year_length_seconds);
    }

    double space_age::on_mercury() const
    {
        return on_earth() / mercury_period;
    }

    double space_age::on_venus() const
    {
        return on_earth() / venus_period;
    }

    double space_age::on_mars() const
    {
        return on_earth() / mars_period;
    }

    double space_age::on_jupiter() const
    {
        return on_earth() / jupiter_period;
    }

    double space_age::on_saturn() const
    {
        return on_earth() / saturn_period;
    }

    double space_age::on_uranus() const
    {
        return on_earth() / uranus_period;
    }

    double space_age::on_neptune() const
    {
        return on_earth() / neptune_period;
    }
}  // namespace space_age
