
#ifndef AIRCONDITIONER_H_
#define AIRCONDITIONER_H_

namespace design_pattern
{

class AirConditioner
{
public:
    explicit AirConditioner() = default;
    virtual ~AirConditioner() = default;

    void airConOn(int sts, int temp);
    void airConOff();
};

} // design_pattern

#endif // AIRCONDITIONER_H_
