#ifndef MODEL_HPP
#define MODEL_HPP

class ModelListener;

class Model
{
public:
    Model();

    void bind(ModelListener* listener)
    {
        modelListener = listener;
    }
    int getCurrentcircleValue() const { return currentCircleValue; }
    void tick();
protected:
    ModelListener* modelListener;
    int currentCircleValue;
};

#endif // MODEL_HPP
