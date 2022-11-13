
#ifndef TELEVISION_H_
#define TELEVISION_H_

namespace design_pattern
{

class Television
{
public:
    explicit Television() = default;
    virtual ~Television() = default;

    void tvOn(int ch, int vol);
    void tvOff();
};

} // design_pattern

#endif // TELEVISION_H_
