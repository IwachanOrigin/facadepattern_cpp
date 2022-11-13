
#ifndef HOME_CTRL_FACADE_H_
#define HOME_CTRL_FACADE_H_

namespace design_pattern
{

class HomeCtrlFacade
{
public:
    explicit HomeCtrlFacade() = default;
    virtual ~HomeCtrlFacade() = default;

    void homeCtrlPreset();
};

} // design_pattern

#endif // HOME_CTRL_FACADE_H_
