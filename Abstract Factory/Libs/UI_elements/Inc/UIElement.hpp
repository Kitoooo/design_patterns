#ifndef UIELEMENT_HPP
#define UIELEMENT_HPP

class UIElement {
public:
    virtual ~UIElement(){};
    virtual void render() = 0;
};

#endif // UIELEMENT_HPP