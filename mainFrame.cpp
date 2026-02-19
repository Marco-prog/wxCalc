///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 4.2.1-0-g80c4cb6)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "mainFrame.h"

///////////////////////////////////////////////////////////////////////////

mainFrame::mainFrame( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer1;
	bSizer1 = new wxBoxSizer( wxVERTICAL );

	m_staticInserimento = new wxStaticText( this, wxID_ANY, _("N1"), wxPoint( -1,-1 ), wxDefaultSize, 0 );
	m_staticInserimento->Wrap( -1 );
	bSizer1->Add( m_staticInserimento, 0, wxALL, 5 );

	m_textN1 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer1->Add( m_textN1, 0, wxALL, 5 );

	m_staticN2 = new wxStaticText( this, wxID_ANY, _("N2"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticN2->Wrap( -1 );
	bSizer1->Add( m_staticN2, 0, wxALL, 5 );

	m_textN2 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer1->Add( m_textN2, 0, wxALL, 5 );

	m_staticTotale = new wxStaticText( this, wxID_ANY, _("Totale"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTotale->Wrap( -1 );
	bSizer1->Add( m_staticTotale, 0, wxALL, 5 );

	m_textTotale = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer1->Add( m_textTotale, 0, wxALL, 5 );

	m_buttonSomma = new wxButton( this, wxID_ANY, _("Somma"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer1->Add( m_buttonSomma, 0, wxALL, 5 );


	this->SetSizer( bSizer1 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	m_buttonSomma->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( mainFrame::Somma ), NULL, this );
}

mainFrame::~mainFrame()
{
}
