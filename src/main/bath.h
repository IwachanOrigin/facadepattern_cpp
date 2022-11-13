
#ifndef BATH_H_
#define BATH_H_

namespace design_pattern
{

class Bath
{
public:
    explicit Bath() = default;
    virtual ~Bath() = default;

    void switchOn(int temp);
    void switchOff();
};

} // design_pattern

#endif // BATH_H_
