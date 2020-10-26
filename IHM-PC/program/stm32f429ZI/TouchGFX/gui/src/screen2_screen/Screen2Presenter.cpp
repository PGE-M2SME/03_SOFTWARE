#include <gui/screen2_screen/Screen2View.hpp>
#include <gui/screen2_screen/Screen2Presenter.hpp>

Screen2Presenter::Screen2Presenter(Screen2View& v)
    : view(v)
{

}

void Screen2Presenter::activate()
{

}

void Screen2Presenter::deactivate()
{

}

void Screen2Presenter::notifyCircleValueChanged(int newCircleValue) {
        	view.circleUpdateValue(newCircleValue);
        	if(newCircleValue == 100){
        		view.circleUpdateColor(0, 200, 100);
        	}
        	else if (newCircleValue == 0) view.circleUpdateColor(0, 138, 255);

      }
