#include "driver.h"

driver ::driver() : driver("ali")
{
}
driver ::driver(string _name)
{
    name = _name;
}
void driver ::set_driver_name(string name_)
{
    name = name_;
}
string driver ::get_driver_name(void)
{
    return name;
}
