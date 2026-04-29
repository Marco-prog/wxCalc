#pragma once
#include "mainFrame.h"  // la classe generata da wxFormBuilder
#include <wx/msgdlg.h>  // per wxMessageBox

class MyFrame : public mainFrame
{
public:
    MyFrame(wxWindow* parent);

private:
    void Somma(wxCommandEvent& event);
};
