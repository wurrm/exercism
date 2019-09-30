#if !defined(SPACE_AGE_H)
#define SPACE_AGE_H

namespace space_age {
    class space_age
    {
    private:
        unsigned long age_seconds;
        const double earth_year_length_seconds = 31557600;

        const double mercury_period = 0.2408467;
        const double venus_period = 0.61519726;
        const double mars_period = 1.8808158;
        const double jupiter_period = 11.862615;
        const double saturn_period = 29.447498;
        const double uranus_period = 84.016846;
        const double neptune_period = 164.79132;
    public:
        space_age(unsigned long age);
        unsigned long seconds() const;
        double on_earth() const;
        // All further calculations are based on the Earth age.
        double on_mercury() const;
        double on_venus() const;
        double on_mars() const;
        double on_jupiter() const;
        double on_saturn() const;
        double on_uranus() const;
        double on_neptune() const;
    };
}  // namespace space_age

#endif // SPACE_AGE_H
