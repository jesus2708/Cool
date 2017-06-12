#pragma once  //______________________________________ Cool.h  
#include "Resource.h"
class Cool: public Win::Dialog
{
public:
	Cool()
	{
	}
	~Cool()
	{
	}
protected:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	Win::Label lb1;
	Win::Label lb2;
	Win::Textbox tbxTemperatura;
	Win::Textbox tbxAlarma;
	Win::Button btPregunta;
protected:
	Win::Gdi::Font fontArial009A;
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.cx=Sys::Convert::CentimetersToDlgUnitX(8.46667);
		dlgTemplate.cy=Sys::Convert::CentimetersToDlgUnitY(2.06375);
		dlgTemplate.style = WS_CAPTION | WS_POPUP | WS_SYSMENU | WS_VISIBLE | DS_CENTER | DS_MODALFRAME;
	}
	//_________________________________________________
	void InitializeGui()
	{
		this->Text = L"Cool";
		lb1.CreateX(NULL, L"Temperatura", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 0.37042, 0.26458, 2.06375, 0.60854, hWnd, 1000);
		lb2.CreateX(NULL, L"Alarma ON", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 0.34396, 1.27000, 2.06375, 0.60854, hWnd, 1001);
		tbxTemperatura.CreateX(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 3.30729, 0.26458, 2.22250, 0.60854, hWnd, 1002);
		tbxAlarma.CreateX(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 3.30729, 1.19063, 2.24896, 0.60854, hWnd, 1003);
		btPregunta.CreateX(NULL, L"Pregunta", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 6.13833, 0.55563, 2.14312, 0.68792, hWnd, 1004);
		fontArial009A.CreateX(L"Arial", 0.317500, false, false, false, false);
		lb1.Font = fontArial009A;
		lb2.Font = fontArial009A;
		tbxTemperatura.Font = fontArial009A;
		tbxAlarma.Font = fontArial009A;
		btPregunta.Font = fontArial009A;
	}
	//_________________________________________________
	void btPregunta_Click(Win::Event& e);
	void Window_Open(Win::Event& e);
	//_________________________________________________
	bool EventHandler(Win::Event& e)
	{
		if (btPregunta.IsEvent(e, BN_CLICKED)) {btPregunta_Click(e); return true;}
		return false;
	}
};
