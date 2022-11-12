
#ifndef LIGHTING_H_
#define LIGHTING_H_

namespace design_pattern
{

class Lighting
{
public:
    explicit Lighting() = default;
    virtual ~Lighting() = default;

    void lightOn(int room);
    void lightOff(int room);
};

}

#endif // LIGHTING_H_
