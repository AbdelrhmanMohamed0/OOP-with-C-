#include "tier.h"
tiers::tiers() : tiers("good")
{
}
tiers::tiers(string _state)
{
    statues = _state;
}
void tiers::set_tire_state(string state_)
{
    statues = state_;
}
string tiers::get_tire_state(void)
{
    return statues;
}
