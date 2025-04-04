#ifndef INCLUDES_VALIDATIONFUNCTION_VALIDATEUSERDECISION_H
#define INCLUDES_VALIDATIONFUNCTION_VALIDATEUSERDECISION_H
#include <iostream>
#include <array>

namespace valid_user_decision{
    bool validate_user_decision(std::array <std::string, 6>& arr_string, std::string user_input);
}



#endif