#include <gui/screen2_screen/Screen2View.hpp>

Screen2View::Screen2View()
{
	__background.setColor(touchgfx::Color::getColorFrom24BitRGB(100, 100, 100));
	 background.setShadeColor(touchgfx::Color::getColorFrom24BitRGB(100, 100, 100));
	 background.invalidate();
	 __background.invalidate();

}

void Screen2View::setupScreen()
{
    Screen2ViewBase::setupScreen();
}

void Screen2View::tearDownScreen()
{
    Screen2ViewBase::tearDownScreen();
}

void Screen2View::circleUpdateValue(int newCircleValue){
	circleProgress.setValue(newCircleValue);
}

void Screen2View::circleUpdateColor(int r, int g, int b){
	circleProgressPainter.setColor(touchgfx::Color::getColorFrom24BitRGB(r, g, b));
	circleProgress.invalidate();

}

void Screen2View::buttonClicked(){
	static bool state = 1;
	toggleButton1.forceState(state^=1);
	circleProgress.setVisible(state);
	TITLE.setVisible(state);
	if(state){
		circleUpdateValue(0);
		circleUpdateColor(0, 138, 255);
	}
	circleProgress.invalidate();
	TITLE.invalidate();
	toggleButton1.invalidate();
}
