#ifndef DISPLAYELEMENT_HPP
#define DISPLAYELEMENT_HPP

class DisplayElement {
public:
    virtual void display() = 0;
    virtual ~DisplayElement() = default;
};

#endif
