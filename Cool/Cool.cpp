#include "stdafx.h"  //________________________________________ Cool.cpp
#include "Cool.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE , LPTSTR cmdLine, int cmdShow){
	Cool app;
	return app.BeginDialog(IDI_Cool, hInstance);
}

void Cool::Window_Open(Win::Event& e)
{
}

void Cool::btPregunta_Click(Win::Event& e)
{
	const double temp = tbxTemperatura.DoubleValue;
	const bool tempera = (temp >= 100);
	tbxAlarma.Text = Sys::Convert::ToString(tempera);
}

