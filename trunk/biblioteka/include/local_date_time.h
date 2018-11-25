#include <boost>
#include "boost/date_time/local_time/local_time.hpp"

typedef boost::local_time::time_zone_ptr TimeZone;
typedef boost::local_time::local_date_time LocalTime;
typedef boost::posix_time::ptime PTime;

class local_date_time{

public:
    TimeZone tzone(
            new posix_time_zone("UTC+1")
            );
    LocalTime rentalDateTime(TimeZone, PTime);
    LocalTime returnDateTime(TimeZone, PTime);

    local_date_time(rentalDateTime);
};