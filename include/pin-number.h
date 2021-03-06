#ifndef PIN_H_
#define PIN_H_

#include "atm-machine-global.h"

#include <string>
#include <stdexcept>

BEGIN_ATM_MACHINE

/**
 * @brief Pin Number object. A valid pin number should be a four digit integer.
 */
class PinNumber
{
public:
    explicit PinNumber(const std::string &pin="0000");

    const std::string &toString() const;

private:
    std::string pin_;
};

END_ATM_MACHINE

#endif  // PIN_H_
