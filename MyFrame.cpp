#include "MyFrame.h"

MyFrame::MyFrame(wxWindow* parent)
    : mainFrame(parent)  // chiama il costruttore della classe base
{
    // Bind dell'evento per il pulsante
    m_button4->Bind(wxEVT_BUTTON, &MyFrame::Somma, this);
}

void MyFrame::Somma(wxCommandEvent& event)
{
    long n1, n2;
    if (m_textCtrl1->GetValue().ToLong(&n1) &&
        m_textCtrl3->GetValue().ToLong(&n2))
    {
        long totale = n1 + n2;
        m_textCtrl4->SetValue(wxString::Format("%ld", totale));
    }
    else
    {
        wxMessageBox("Inserisci due numeri interi!", "Errore", wxOK | wxICON_ERROR);
    }
}
