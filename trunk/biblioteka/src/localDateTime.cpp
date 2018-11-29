#include "local_date_time.h"

using namespace std;

local_date_time::local_date_time(int rentalDateTime){
    this->rentalDateTime=rentalDateTime;
}

int local_date_time::rentalDate(){
    return rentalDateTime;
}

int local_date_time::rentalTimeDuration(int returnDateTime) {
    return returnDateTime - rentalDateTime;
}