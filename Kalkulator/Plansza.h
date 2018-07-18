#pragma once
#include "Pomoc.h"
#include "Windows.h"

namespace Kalkulator
{
    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;
    /// <summary>
    /// Summary for Plansza
    /// </summary>
    public ref class Plansza : public System::Windows::Forms::Form
    {
    public:
        Plansza(void)
        {
            InitializeComponent();
            //
            //TODO: Add the constructor code here
            //

            this->Plansza::Width = 299;
            this->Plansza::Height = 433;
        }
    protected:
        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        ~Plansza()
        {
            if (components)
            {
                delete components;
            }
        }
    private: System::Windows::Forms::MenuStrip^  pasekMenu;
    private: System::Windows::Forms::ToolStripMenuItem^  przyciskPlik;
    private: System::Windows::Forms::ToolStripMenuItem^  trybPrzypiecia;
    private: System::Windows::Forms::ToolStripMenuItem^  trybOkienkowy;
    private: System::Windows::Forms::ToolStripMenuItem^  plikZamknij;
    private: System::Windows::Forms::ToolStripMenuItem^  przyciskWidok;
    private: System::Windows::Forms::ToolStripMenuItem^  widokStandard;
    private: System::Windows::Forms::ToolStripMenuItem^  widokFinanse;
    private: System::Windows::Forms::ToolStripMenuItem^  widokGra;
    private: System::Windows::Forms::ToolStripMenuItem^  wyswietlPomoc;
    private: System::Windows::Forms::TextBox^  wyswietlacz;
    private: System::Windows::Forms::Button^  przycisk_1;
    private: System::Windows::Forms::Button^  przycisk_3;
    private: System::Windows::Forms::Button^  przycisk_2;
    private: System::Windows::Forms::Button^  przycisk_4;
    private: System::Windows::Forms::Button^  przycisk_5;
    private: System::Windows::Forms::Button^  przycisk_6;
    private: System::Windows::Forms::Button^  przycisk_9;
    private: System::Windows::Forms::Button^  przycisk_8;
    private: System::Windows::Forms::Button^  Przycisk_7;
    private: System::Windows::Forms::Button^  przycisk_0;
    private: System::Windows::Forms::Button^  przyciskPrzecinek;
    private: System::Windows::Forms::Button^  przyciskPlus;
    private: System::Windows::Forms::Button^  przyciskMinus;
    private: System::Windows::Forms::Button^  przyciskMnozenia;
    private: System::Windows::Forms::Button^  przycisk_C;
    private: System::Windows::Forms::Button^  przycisk_CE;
    private: System::Windows::Forms::Button^  przyciskDzielenia;
    private: System::Windows::Forms::Button^  przyciskProcent;
    private: System::Windows::Forms::Button^  przyciskRownaSie;
    private: System::Windows::Forms::Button^  netto_brutto;
    private: System::Windows::Forms::Button^  narzut;
    private: System::Windows::Forms::Button^  marza;
    private: System::Windows::Forms::Button^  brutto_netto;
    private: System::Windows::Forms::Button^  graMnozenie;
    private: System::Windows::Forms::Button^  graOdejmowanie;
    private: System::Windows::Forms::Button^  graDodawanie;
    private: System::Windows::Forms::PictureBox^  zdjZnakZapytania;
    private: System::Windows::Forms::ImageList^  listaZdjec;
    private: System::Windows::Forms::Button^  przyciskKwadrat;
    private: System::Windows::Forms::Button^  przyciskPierwiastek;
    private: System::Windows::Forms::TextBox^  rownanie_A;
    private: System::Windows::Forms::TextBox^  rownanie_x2;
    private: System::Windows::Forms::TextBox^  rownanie_B;
    private: System::Windows::Forms::TextBox^  rownanie_x;
    private: System::Windows::Forms::TextBox^  rownanie_C;
    private: System::Windows::Forms::Button^  rozwiazRownanie;
    private: System::Windows::Forms::ToolStripMenuItem^  widokRownanie;
    private: System::Windows::Forms::TextBox^  ekranPomocniczy;
    private: System::ComponentModel::IContainer^  components;
             /// <summary>
             /// Required designer variable.
             /// </summary>
#pragma region Windows Form Designer generated code
/// <summary>
/// Required method for Designer support - do not modify
/// the contents of this method with the code editor.
/// </summary>
             void InitializeComponent(void)
             {
                 this->components = (gcnew System::ComponentModel::Container());
                 System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Plansza::typeid));
                 this->pasekMenu = (gcnew System::Windows::Forms::MenuStrip());
                 this->przyciskPlik = (gcnew System::Windows::Forms::ToolStripMenuItem());
                 this->trybPrzypiecia = (gcnew System::Windows::Forms::ToolStripMenuItem());
                 this->trybOkienkowy = (gcnew System::Windows::Forms::ToolStripMenuItem());
                 this->plikZamknij = (gcnew System::Windows::Forms::ToolStripMenuItem());
                 this->przyciskWidok = (gcnew System::Windows::Forms::ToolStripMenuItem());
                 this->widokStandard = (gcnew System::Windows::Forms::ToolStripMenuItem());
                 this->widokFinanse = (gcnew System::Windows::Forms::ToolStripMenuItem());
                 this->widokGra = (gcnew System::Windows::Forms::ToolStripMenuItem());
                 this->widokRownanie = (gcnew System::Windows::Forms::ToolStripMenuItem());
                 this->wyswietlPomoc = (gcnew System::Windows::Forms::ToolStripMenuItem());
                 this->wyswietlacz = (gcnew System::Windows::Forms::TextBox());
                 this->przycisk_1 = (gcnew System::Windows::Forms::Button());
                 this->przycisk_3 = (gcnew System::Windows::Forms::Button());
                 this->przycisk_2 = (gcnew System::Windows::Forms::Button());
                 this->przycisk_4 = (gcnew System::Windows::Forms::Button());
                 this->przycisk_5 = (gcnew System::Windows::Forms::Button());
                 this->przycisk_6 = (gcnew System::Windows::Forms::Button());
                 this->przycisk_9 = (gcnew System::Windows::Forms::Button());
                 this->przycisk_8 = (gcnew System::Windows::Forms::Button());
                 this->Przycisk_7 = (gcnew System::Windows::Forms::Button());
                 this->przycisk_0 = (gcnew System::Windows::Forms::Button());
                 this->przyciskPrzecinek = (gcnew System::Windows::Forms::Button());
                 this->przyciskPlus = (gcnew System::Windows::Forms::Button());
                 this->przyciskMinus = (gcnew System::Windows::Forms::Button());
                 this->przyciskMnozenia = (gcnew System::Windows::Forms::Button());
                 this->przycisk_C = (gcnew System::Windows::Forms::Button());
                 this->przycisk_CE = (gcnew System::Windows::Forms::Button());
                 this->przyciskDzielenia = (gcnew System::Windows::Forms::Button());
                 this->przyciskProcent = (gcnew System::Windows::Forms::Button());
                 this->przyciskRownaSie = (gcnew System::Windows::Forms::Button());
                 this->netto_brutto = (gcnew System::Windows::Forms::Button());
                 this->narzut = (gcnew System::Windows::Forms::Button());
                 this->marza = (gcnew System::Windows::Forms::Button());
                 this->brutto_netto = (gcnew System::Windows::Forms::Button());
                 this->graMnozenie = (gcnew System::Windows::Forms::Button());
                 this->graOdejmowanie = (gcnew System::Windows::Forms::Button());
                 this->graDodawanie = (gcnew System::Windows::Forms::Button());
                 this->zdjZnakZapytania = (gcnew System::Windows::Forms::PictureBox());
                 this->listaZdjec = (gcnew System::Windows::Forms::ImageList(this->components));
                 this->przyciskKwadrat = (gcnew System::Windows::Forms::Button());
                 this->przyciskPierwiastek = (gcnew System::Windows::Forms::Button());
                 this->rownanie_A = (gcnew System::Windows::Forms::TextBox());
                 this->rownanie_x2 = (gcnew System::Windows::Forms::TextBox());
                 this->rownanie_B = (gcnew System::Windows::Forms::TextBox());
                 this->rownanie_x = (gcnew System::Windows::Forms::TextBox());
                 this->rownanie_C = (gcnew System::Windows::Forms::TextBox());
                 this->rozwiazRownanie = (gcnew System::Windows::Forms::Button());
                 this->ekranPomocniczy = (gcnew System::Windows::Forms::TextBox());
                 this->pasekMenu->SuspendLayout();
                 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->zdjZnakZapytania))->BeginInit();
                 this->SuspendLayout();
                 // 
                 // pasekMenu
                 // 
                 this->pasekMenu->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
                     this->przyciskPlik, this->przyciskWidok,
                         this->wyswietlPomoc
                 });
                 this->pasekMenu->Location = System::Drawing::Point(0, 0);
                 this->pasekMenu->Name = L"pasekMenu";
                 this->pasekMenu->Size = System::Drawing::Size(395, 24);
                 this->pasekMenu->TabIndex = 0;
                 this->pasekMenu->Text = L"menuStrip1";
                 // 
                 // przyciskPlik
                 // 
                 this->przyciskPlik->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
                     this->trybPrzypiecia,
                         this->trybOkienkowy, this->plikZamknij
                 });
                 this->przyciskPlik->ForeColor = System::Drawing::Color::Black;
                 this->przyciskPlik->Name = L"przyciskPlik";
                 this->przyciskPlik->Size = System::Drawing::Size(38, 20);
                 this->przyciskPlik->Text = L"Plik";
                 // 
                 // trybPrzypiecia
                 // 
                 this->trybPrzypiecia->Name = L"trybPrzypiecia";
                 this->trybPrzypiecia->Size = System::Drawing::Size(118, 22);
                 this->trybPrzypiecia->Text = L"Przypnij";
                 this->trybPrzypiecia->Click += gcnew System::EventHandler(this, &Plansza::trybPrzypiecia_Click);
                 // 
                 // trybOkienkowy
                 // 
                 this->trybOkienkowy->Name = L"trybOkienkowy";
                 this->trybOkienkowy->Size = System::Drawing::Size(118, 22);
                 this->trybOkienkowy->Text = L"Okienko";
                 this->trybOkienkowy->Click += gcnew System::EventHandler(this, &Plansza::trybOkienkowy_Click);
                 // 
                 // plikZamknij
                 // 
                 this->plikZamknij->Name = L"plikZamknij";
                 this->plikZamknij->Size = System::Drawing::Size(118, 22);
                 this->plikZamknij->Text = L"Zamknij";
                 this->plikZamknij->Click += gcnew System::EventHandler(this, &Plansza::plikZamknij_Click);
                 // 
                 // przyciskWidok
                 // 
                 this->przyciskWidok->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
                     this->widokStandard,
                         this->widokFinanse, this->widokGra, this->widokRownanie
                 });
                 this->przyciskWidok->ForeColor = System::Drawing::Color::Black;
                 this->przyciskWidok->Name = L"przyciskWidok";
                 this->przyciskWidok->Size = System::Drawing::Size(53, 20);
                 this->przyciskWidok->Text = L"Widok";
                 // 
                 // widokStandard
                 // 
                 this->widokStandard->Name = L"widokStandard";
                 this->widokStandard->Size = System::Drawing::Size(152, 22);
                 this->widokStandard->Text = L"Standard";
                 this->widokStandard->Click += gcnew System::EventHandler(this, &Plansza::widokStandard_Click);
                 // 
                 // widokFinanse
                 // 
                 this->widokFinanse->Name = L"widokFinanse";
                 this->widokFinanse->Size = System::Drawing::Size(152, 22);
                 this->widokFinanse->Text = L"Finanse";
                 this->widokFinanse->Click += gcnew System::EventHandler(this, &Plansza::widokFinanse_Click);
                 // 
                 // widokGra
                 // 
                 this->widokGra->Name = L"widokGra";
                 this->widokGra->Size = System::Drawing::Size(152, 22);
                 this->widokGra->Text = L"Gra";
                 this->widokGra->Click += gcnew System::EventHandler(this, &Plansza::widokGra_Click);
                 // 
                 // widokRownanie
                 // 
                 this->widokRownanie->Name = L"widokRownanie";
                 this->widokRownanie->Size = System::Drawing::Size(152, 22);
                 this->widokRownanie->Text = L"Równanie";
                 this->widokRownanie->Click += gcnew System::EventHandler(this, &Plansza::widokRownanie_Click);
                 // 
                 // wyswietlPomoc
                 // 
                 this->wyswietlPomoc->ForeColor = System::Drawing::Color::Black;
                 this->wyswietlPomoc->Name = L"wyswietlPomoc";
                 this->wyswietlPomoc->Size = System::Drawing::Size(57, 20);
                 this->wyswietlPomoc->Text = L"Pomoc";
                 this->wyswietlPomoc->Click += gcnew System::EventHandler(this, &Plansza::wyswietlPomoc_Click);
                 // 
                 // wyswietlacz
                 // 
                 this->wyswietlacz->BackColor = System::Drawing::Color::Black;
                 this->wyswietlacz->BorderStyle = System::Windows::Forms::BorderStyle::None;
                 this->wyswietlacz->Cursor = System::Windows::Forms::Cursors::IBeam;
                 this->wyswietlacz->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                     static_cast<System::Byte>(238)));
                 this->wyswietlacz->ForeColor = System::Drawing::Color::White;
                 this->wyswietlacz->Location = System::Drawing::Point(4, 56);
                 this->wyswietlacz->Name = L"wyswietlacz";
                 this->wyswietlacz->Size = System::Drawing::Size(274, 56);
                 this->wyswietlacz->TabIndex = 1;
                 this->wyswietlacz->Text = L"0";
                 this->wyswietlacz->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
                 // 
                 // przycisk_1
                 // 
                 this->przycisk_1->BackColor = System::Drawing::Color::DimGray;
                 this->przycisk_1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
                 this->przycisk_1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                     static_cast<System::Byte>(238)));
                 this->przycisk_1->ForeColor = System::Drawing::Color::White;
                 this->przycisk_1->Location = System::Drawing::Point(4, 280);
                 this->przycisk_1->Name = L"przycisk_1";
                 this->przycisk_1->Size = System::Drawing::Size(55, 55);
                 this->przycisk_1->TabIndex = 2;
                 this->przycisk_1->Text = L"1";
                 this->przycisk_1->UseVisualStyleBackColor = false;
                 this->przycisk_1->Click += gcnew System::EventHandler(this, &Plansza::przycisk_1_Click);
                 // 
                 // przycisk_3
                 // 
                 this->przycisk_3->BackColor = System::Drawing::Color::DimGray;
                 this->przycisk_3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
                 this->przycisk_3->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                     static_cast<System::Byte>(238)));
                 this->przycisk_3->ForeColor = System::Drawing::Color::White;
                 this->przycisk_3->Location = System::Drawing::Point(114, 280);
                 this->przycisk_3->Name = L"przycisk_3";
                 this->przycisk_3->Size = System::Drawing::Size(55, 55);
                 this->przycisk_3->TabIndex = 3;
                 this->przycisk_3->Text = L"3";
                 this->przycisk_3->UseVisualStyleBackColor = false;
                 this->przycisk_3->Click += gcnew System::EventHandler(this, &Plansza::przycisk_3_Click);
                 // 
                 // przycisk_2
                 // 
                 this->przycisk_2->BackColor = System::Drawing::Color::DimGray;
                 this->przycisk_2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
                 this->przycisk_2->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                     static_cast<System::Byte>(238)));
                 this->przycisk_2->ForeColor = System::Drawing::Color::White;
                 this->przycisk_2->Location = System::Drawing::Point(59, 280);
                 this->przycisk_2->Name = L"przycisk_2";
                 this->przycisk_2->Size = System::Drawing::Size(55, 55);
                 this->przycisk_2->TabIndex = 4;
                 this->przycisk_2->Text = L"2";
                 this->przycisk_2->UseVisualStyleBackColor = false;
                 this->przycisk_2->Click += gcnew System::EventHandler(this, &Plansza::przycisk_2_Click);
                 // 
                 // przycisk_4
                 // 
                 this->przycisk_4->BackColor = System::Drawing::Color::DimGray;
                 this->przycisk_4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
                 this->przycisk_4->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                     static_cast<System::Byte>(238)));
                 this->przycisk_4->ForeColor = System::Drawing::Color::White;
                 this->przycisk_4->Location = System::Drawing::Point(4, 225);
                 this->przycisk_4->Name = L"przycisk_4";
                 this->przycisk_4->Size = System::Drawing::Size(55, 55);
                 this->przycisk_4->TabIndex = 11;
                 this->przycisk_4->Text = L"4";
                 this->przycisk_4->UseVisualStyleBackColor = false;
                 this->przycisk_4->Click += gcnew System::EventHandler(this, &Plansza::przycisk_4_Click);
                 // 
                 // przycisk_5
                 // 
                 this->przycisk_5->BackColor = System::Drawing::Color::DimGray;
                 this->przycisk_5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
                 this->przycisk_5->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                     static_cast<System::Byte>(238)));
                 this->przycisk_5->ForeColor = System::Drawing::Color::White;
                 this->przycisk_5->Location = System::Drawing::Point(59, 225);
                 this->przycisk_5->Name = L"przycisk_5";
                 this->przycisk_5->Size = System::Drawing::Size(55, 55);
                 this->przycisk_5->TabIndex = 12;
                 this->przycisk_5->Text = L"5";
                 this->przycisk_5->UseVisualStyleBackColor = false;
                 this->przycisk_5->Click += gcnew System::EventHandler(this, &Plansza::przycisk_5_Click);
                 // 
                 // przycisk_6
                 // 
                 this->przycisk_6->BackColor = System::Drawing::Color::DimGray;
                 this->przycisk_6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
                 this->przycisk_6->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                     static_cast<System::Byte>(238)));
                 this->przycisk_6->ForeColor = System::Drawing::Color::White;
                 this->przycisk_6->Location = System::Drawing::Point(114, 225);
                 this->przycisk_6->Name = L"przycisk_6";
                 this->przycisk_6->Size = System::Drawing::Size(55, 55);
                 this->przycisk_6->TabIndex = 13;
                 this->przycisk_6->Text = L"6";
                 this->przycisk_6->UseVisualStyleBackColor = false;
                 this->przycisk_6->Click += gcnew System::EventHandler(this, &Plansza::przycisk_6_Click);
                 // 
                 // przycisk_9
                 // 
                 this->przycisk_9->BackColor = System::Drawing::Color::DimGray;
                 this->przycisk_9->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
                 this->przycisk_9->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                     static_cast<System::Byte>(238)));
                 this->przycisk_9->ForeColor = System::Drawing::Color::White;
                 this->przycisk_9->Location = System::Drawing::Point(114, 170);
                 this->przycisk_9->Name = L"przycisk_9";
                 this->przycisk_9->Size = System::Drawing::Size(55, 55);
                 this->przycisk_9->TabIndex = 14;
                 this->przycisk_9->Text = L"9";
                 this->przycisk_9->UseVisualStyleBackColor = false;
                 this->przycisk_9->Click += gcnew System::EventHandler(this, &Plansza::przycisk_9_Click);
                 // 
                 // przycisk_8
                 // 
                 this->przycisk_8->BackColor = System::Drawing::Color::DimGray;
                 this->przycisk_8->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
                 this->przycisk_8->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                     static_cast<System::Byte>(238)));
                 this->przycisk_8->ForeColor = System::Drawing::Color::White;
                 this->przycisk_8->Location = System::Drawing::Point(59, 170);
                 this->przycisk_8->Name = L"przycisk_8";
                 this->przycisk_8->Size = System::Drawing::Size(55, 55);
                 this->przycisk_8->TabIndex = 15;
                 this->przycisk_8->Text = L"8";
                 this->przycisk_8->UseVisualStyleBackColor = false;
                 this->przycisk_8->Click += gcnew System::EventHandler(this, &Plansza::przycisk_8_Click);
                 // 
                 // Przycisk_7
                 // 
                 this->Przycisk_7->BackColor = System::Drawing::Color::DimGray;
                 this->Przycisk_7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
                 this->Przycisk_7->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                     static_cast<System::Byte>(238)));
                 this->Przycisk_7->ForeColor = System::Drawing::Color::White;
                 this->Przycisk_7->Location = System::Drawing::Point(4, 170);
                 this->Przycisk_7->Name = L"Przycisk_7";
                 this->Przycisk_7->Size = System::Drawing::Size(55, 55);
                 this->Przycisk_7->TabIndex = 16;
                 this->Przycisk_7->Text = L"7";
                 this->Przycisk_7->UseVisualStyleBackColor = false;
                 this->Przycisk_7->Click += gcnew System::EventHandler(this, &Plansza::Przycisk_7_Click);
                 // 
                 // przycisk_0
                 // 
                 this->przycisk_0->BackColor = System::Drawing::Color::DimGray;
                 this->przycisk_0->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
                 this->przycisk_0->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                     static_cast<System::Byte>(238)));
                 this->przycisk_0->ForeColor = System::Drawing::Color::White;
                 this->przycisk_0->Location = System::Drawing::Point(4, 335);
                 this->przycisk_0->Name = L"przycisk_0";
                 this->przycisk_0->Size = System::Drawing::Size(110, 55);
                 this->przycisk_0->TabIndex = 17;
                 this->przycisk_0->Text = L"0";
                 this->przycisk_0->UseVisualStyleBackColor = false;
                 this->przycisk_0->Click += gcnew System::EventHandler(this, &Plansza::przycisk_0_Click);
                 // 
                 // przyciskPrzecinek
                 // 
                 this->przyciskPrzecinek->BackColor = System::Drawing::Color::DimGray;
                 this->przyciskPrzecinek->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
                 this->przyciskPrzecinek->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                     static_cast<System::Byte>(238)));
                 this->przyciskPrzecinek->ForeColor = System::Drawing::Color::White;
                 this->przyciskPrzecinek->Location = System::Drawing::Point(114, 335);
                 this->przyciskPrzecinek->Name = L"przyciskPrzecinek";
                 this->przyciskPrzecinek->Size = System::Drawing::Size(55, 55);
                 this->przyciskPrzecinek->TabIndex = 18;
                 this->przyciskPrzecinek->Text = L",";
                 this->przyciskPrzecinek->UseVisualStyleBackColor = false;
                 this->przyciskPrzecinek->Click += gcnew System::EventHandler(this, &Plansza::przyciskPrzecinek_Click);
                 // 
                 // przyciskPlus
                 // 
                 this->przyciskPlus->BackColor = System::Drawing::Color::OrangeRed;
                 this->przyciskPlus->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
                 this->przyciskPlus->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                     static_cast<System::Byte>(238)));
                 this->przyciskPlus->ForeColor = System::Drawing::Color::White;
                 this->przyciskPlus->Location = System::Drawing::Point(169, 280);
                 this->przyciskPlus->Name = L"przyciskPlus";
                 this->przyciskPlus->Size = System::Drawing::Size(55, 110);
                 this->przyciskPlus->TabIndex = 19;
                 this->przyciskPlus->Text = L"+";
                 this->przyciskPlus->UseVisualStyleBackColor = false;
                 this->przyciskPlus->Click += gcnew System::EventHandler(this, &Plansza::przyciskPlus_Click);
                 // 
                 // przyciskMinus
                 // 
                 this->przyciskMinus->BackColor = System::Drawing::Color::OrangeRed;
                 this->przyciskMinus->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
                 this->przyciskMinus->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                     static_cast<System::Byte>(238)));
                 this->przyciskMinus->ForeColor = System::Drawing::Color::White;
                 this->przyciskMinus->Location = System::Drawing::Point(169, 170);
                 this->przyciskMinus->Name = L"przyciskMinus";
                 this->przyciskMinus->Size = System::Drawing::Size(55, 55);
                 this->przyciskMinus->TabIndex = 20;
                 this->przyciskMinus->Text = L"-";
                 this->przyciskMinus->UseVisualStyleBackColor = false;
                 this->przyciskMinus->Click += gcnew System::EventHandler(this, &Plansza::przyciskMinus_Click);
                 // 
                 // przyciskMnozenia
                 // 
                 this->przyciskMnozenia->BackColor = System::Drawing::Color::OrangeRed;
                 this->przyciskMnozenia->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
                 this->przyciskMnozenia->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                     static_cast<System::Byte>(238)));
                 this->przyciskMnozenia->ForeColor = System::Drawing::Color::White;
                 this->przyciskMnozenia->Location = System::Drawing::Point(169, 225);
                 this->przyciskMnozenia->Name = L"przyciskMnozenia";
                 this->przyciskMnozenia->Size = System::Drawing::Size(55, 55);
                 this->przyciskMnozenia->TabIndex = 21;
                 this->przyciskMnozenia->Text = L"x";
                 this->przyciskMnozenia->UseVisualStyleBackColor = false;
                 this->przyciskMnozenia->Click += gcnew System::EventHandler(this, &Plansza::przyciskMnozenia_Click);
                 // 
                 // przycisk_C
                 // 
                 this->przycisk_C->BackColor = System::Drawing::Color::OrangeRed;
                 this->przycisk_C->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
                 this->przycisk_C->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                     static_cast<System::Byte>(238)));
                 this->przycisk_C->ForeColor = System::Drawing::Color::White;
                 this->przycisk_C->Location = System::Drawing::Point(4, 115);
                 this->przycisk_C->Name = L"przycisk_C";
                 this->przycisk_C->Size = System::Drawing::Size(110, 55);
                 this->przycisk_C->TabIndex = 22;
                 this->przycisk_C->Text = L"C";
                 this->przycisk_C->UseVisualStyleBackColor = false;
                 this->przycisk_C->Click += gcnew System::EventHandler(this, &Plansza::przycisk_C_Click);
                 // 
                 // przycisk_CE
                 // 
                 this->przycisk_CE->BackColor = System::Drawing::Color::OrangeRed;
                 this->przycisk_CE->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
                 this->przycisk_CE->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                     static_cast<System::Byte>(238)));
                 this->przycisk_CE->ForeColor = System::Drawing::Color::White;
                 this->przycisk_CE->Location = System::Drawing::Point(114, 115);
                 this->przycisk_CE->Name = L"przycisk_CE";
                 this->przycisk_CE->Size = System::Drawing::Size(55, 55);
                 this->przycisk_CE->TabIndex = 23;
                 this->przycisk_CE->Text = L"CE";
                 this->przycisk_CE->UseVisualStyleBackColor = false;
                 this->przycisk_CE->Click += gcnew System::EventHandler(this, &Plansza::przycisk_CE_Click);
                 // 
                 // przyciskDzielenia
                 // 
                 this->przyciskDzielenia->BackColor = System::Drawing::Color::OrangeRed;
                 this->przyciskDzielenia->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
                 this->przyciskDzielenia->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                     static_cast<System::Byte>(238)));
                 this->przyciskDzielenia->ForeColor = System::Drawing::Color::White;
                 this->przyciskDzielenia->Location = System::Drawing::Point(169, 115);
                 this->przyciskDzielenia->Name = L"przyciskDzielenia";
                 this->przyciskDzielenia->Size = System::Drawing::Size(55, 55);
                 this->przyciskDzielenia->TabIndex = 24;
                 this->przyciskDzielenia->Text = L"/";
                 this->przyciskDzielenia->UseVisualStyleBackColor = false;
                 this->przyciskDzielenia->Click += gcnew System::EventHandler(this, &Plansza::przyciskDzielenia_Click);
                 // 
                 // przyciskProcent
                 // 
                 this->przyciskProcent->BackColor = System::Drawing::Color::OrangeRed;
                 this->przyciskProcent->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
                 this->przyciskProcent->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                     static_cast<System::Byte>(238)));
                 this->przyciskProcent->ForeColor = System::Drawing::Color::White;
                 this->przyciskProcent->Location = System::Drawing::Point(224, 225);
                 this->przyciskProcent->Name = L"przyciskProcent";
                 this->przyciskProcent->Size = System::Drawing::Size(55, 55);
                 this->przyciskProcent->TabIndex = 27;
                 this->przyciskProcent->Text = L"%";
                 this->przyciskProcent->UseVisualStyleBackColor = false;
                 this->przyciskProcent->Click += gcnew System::EventHandler(this, &Plansza::przyciskProcent_Click);
                 // 
                 // przyciskRownaSie
                 // 
                 this->przyciskRownaSie->BackColor = System::Drawing::Color::OrangeRed;
                 this->przyciskRownaSie->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
                 this->przyciskRownaSie->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                     static_cast<System::Byte>(238)));
                 this->przyciskRownaSie->ForeColor = System::Drawing::Color::White;
                 this->przyciskRownaSie->Location = System::Drawing::Point(224, 280);
                 this->przyciskRownaSie->Name = L"przyciskRownaSie";
                 this->przyciskRownaSie->Size = System::Drawing::Size(55, 110);
                 this->przyciskRownaSie->TabIndex = 28;
                 this->przyciskRownaSie->Text = L"=";
                 this->przyciskRownaSie->UseVisualStyleBackColor = false;
                 this->przyciskRownaSie->Click += gcnew System::EventHandler(this, &Plansza::przyciskRownaSie_Click);
                 // 
                 // netto_brutto
                 // 
                 this->netto_brutto->BackColor = System::Drawing::Color::DarkOrange;
                 this->netto_brutto->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
                 this->netto_brutto->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                     static_cast<System::Byte>(238)));
                 this->netto_brutto->Location = System::Drawing::Point(282, 170);
                 this->netto_brutto->Name = L"netto_brutto";
                 this->netto_brutto->Size = System::Drawing::Size(110, 55);
                 this->netto_brutto->TabIndex = 29;
                 this->netto_brutto->Text = L"netto→brutto";
                 this->netto_brutto->UseVisualStyleBackColor = false;
                 this->netto_brutto->Click += gcnew System::EventHandler(this, &Plansza::netto_brutto_Click);
                 // 
                 // narzut
                 // 
                 this->narzut->BackColor = System::Drawing::Color::DarkOrange;
                 this->narzut->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
                 this->narzut->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                     static_cast<System::Byte>(238)));
                 this->narzut->Location = System::Drawing::Point(282, 335);
                 this->narzut->Name = L"narzut";
                 this->narzut->Size = System::Drawing::Size(110, 55);
                 this->narzut->TabIndex = 30;
                 this->narzut->Text = L"narzut";
                 this->narzut->UseVisualStyleBackColor = false;
                 this->narzut->Click += gcnew System::EventHandler(this, &Plansza::narzut_Click_Click);
                 // 
                 // marza
                 // 
                 this->marza->BackColor = System::Drawing::Color::DarkOrange;
                 this->marza->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
                 this->marza->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                     static_cast<System::Byte>(238)));
                 this->marza->Location = System::Drawing::Point(282, 280);
                 this->marza->Name = L"marza";
                 this->marza->Size = System::Drawing::Size(110, 55);
                 this->marza->TabIndex = 31;
                 this->marza->Text = L"marża";
                 this->marza->UseVisualStyleBackColor = false;
                 this->marza->Click += gcnew System::EventHandler(this, &Plansza::marza_Click);
                 // 
                 // brutto_netto
                 // 
                 this->brutto_netto->BackColor = System::Drawing::Color::DarkOrange;
                 this->brutto_netto->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
                 this->brutto_netto->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                     static_cast<System::Byte>(238)));
                 this->brutto_netto->Location = System::Drawing::Point(282, 225);
                 this->brutto_netto->Name = L"brutto_netto";
                 this->brutto_netto->Size = System::Drawing::Size(110, 55);
                 this->brutto_netto->TabIndex = 32;
                 this->brutto_netto->Text = L"brutto→netto";
                 this->brutto_netto->UseVisualStyleBackColor = false;
                 this->brutto_netto->Click += gcnew System::EventHandler(this, &Plansza::brutto_netto_Click);
                 // 
                 // graMnozenie
                 // 
                 this->graMnozenie->BackColor = System::Drawing::Color::DarkOrange;
                 this->graMnozenie->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
                 this->graMnozenie->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                     static_cast<System::Byte>(238)));
                 this->graMnozenie->Location = System::Drawing::Point(179, 582);
                 this->graMnozenie->Name = L"graMnozenie";
                 this->graMnozenie->Size = System::Drawing::Size(98, 43);
                 this->graMnozenie->TabIndex = 33;
                 this->graMnozenie->Text = L"mnożenie";
                 this->graMnozenie->UseVisualStyleBackColor = false;
                 this->graMnozenie->Click += gcnew System::EventHandler(this, &Plansza::graMnozenie_Click);
                 // 
                 // graOdejmowanie
                 // 
                 this->graOdejmowanie->BackColor = System::Drawing::Color::DarkOrange;
                 this->graOdejmowanie->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
                 this->graOdejmowanie->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                     static_cast<System::Byte>(238)));
                 this->graOdejmowanie->Location = System::Drawing::Point(179, 538);
                 this->graOdejmowanie->Name = L"graOdejmowanie";
                 this->graOdejmowanie->Size = System::Drawing::Size(98, 43);
                 this->graOdejmowanie->TabIndex = 34;
                 this->graOdejmowanie->Text = L"odejmowanie";
                 this->graOdejmowanie->UseVisualStyleBackColor = false;
                 this->graOdejmowanie->Click += gcnew System::EventHandler(this, &Plansza::graOdejmowanie_Click);
                 // 
                 // graDodawanie
                 // 
                 this->graDodawanie->BackColor = System::Drawing::Color::DarkOrange;
                 this->graDodawanie->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
                 this->graDodawanie->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                     static_cast<System::Byte>(238)));
                 this->graDodawanie->Location = System::Drawing::Point(179, 494);
                 this->graDodawanie->Name = L"graDodawanie";
                 this->graDodawanie->Size = System::Drawing::Size(98, 43);
                 this->graDodawanie->TabIndex = 35;
                 this->graDodawanie->Text = L"dodawanie";
                 this->graDodawanie->UseVisualStyleBackColor = false;
                 this->graDodawanie->Click += gcnew System::EventHandler(this, &Plansza::graDodawanie_Click);
                 // 
                 // zdjZnakZapytania
                 // 
                 this->zdjZnakZapytania->BackColor = System::Drawing::Color::Transparent;
                 this->zdjZnakZapytania->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"zdjZnakZapytania.Image")));
                 this->zdjZnakZapytania->Location = System::Drawing::Point(4, 495);
                 this->zdjZnakZapytania->Name = L"zdjZnakZapytania";
                 this->zdjZnakZapytania->Size = System::Drawing::Size(130, 130);
                 this->zdjZnakZapytania->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
                 this->zdjZnakZapytania->TabIndex = 36;
                 this->zdjZnakZapytania->TabStop = false;
                 // 
                 // listaZdjec
                 // 
                 this->listaZdjec->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"listaZdjec.ImageStream")));
                 this->listaZdjec->TransparentColor = System::Drawing::Color::Transparent;
                 this->listaZdjec->Images->SetKeyName(0, L"pytajnik.png");
                 this->listaZdjec->Images->SetKeyName(1, L"zle.png");
                 this->listaZdjec->Images->SetKeyName(2, L"dobrze.png");
                 // 
                 // przyciskKwadrat
                 // 
                 this->przyciskKwadrat->BackColor = System::Drawing::Color::OrangeRed;
                 this->przyciskKwadrat->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
                 this->przyciskKwadrat->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                     static_cast<System::Byte>(238)));
                 this->przyciskKwadrat->ForeColor = System::Drawing::Color::White;
                 this->przyciskKwadrat->Location = System::Drawing::Point(224, 170);
                 this->przyciskKwadrat->Name = L"przyciskKwadrat";
                 this->przyciskKwadrat->Size = System::Drawing::Size(55, 55);
                 this->przyciskKwadrat->TabIndex = 26;
                 this->przyciskKwadrat->Text = L"a²";
                 this->przyciskKwadrat->UseVisualStyleBackColor = false;
                 this->przyciskKwadrat->Click += gcnew System::EventHandler(this, &Plansza::przyciskKwadrat_Click);
                 // 
                 // przyciskPierwiastek
                 // 
                 this->przyciskPierwiastek->BackColor = System::Drawing::Color::OrangeRed;
                 this->przyciskPierwiastek->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
                 this->przyciskPierwiastek->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                     static_cast<System::Byte>(238)));
                 this->przyciskPierwiastek->ForeColor = System::Drawing::Color::White;
                 this->przyciskPierwiastek->Location = System::Drawing::Point(224, 115);
                 this->przyciskPierwiastek->Name = L"przyciskPierwiastek";
                 this->przyciskPierwiastek->Size = System::Drawing::Size(55, 55);
                 this->przyciskPierwiastek->TabIndex = 25;
                 this->przyciskPierwiastek->Text = L"√";
                 this->przyciskPierwiastek->UseVisualStyleBackColor = false;
                 this->przyciskPierwiastek->Click += gcnew System::EventHandler(this, &Plansza::przyciskPierwiastek_Click);
                 // 
                 // rownanie_A
                 // 
                 this->rownanie_A->BackColor = System::Drawing::Color::DarkOrange;
                 this->rownanie_A->Font = (gcnew System::Drawing::Font(L"Arial", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                     static_cast<System::Byte>(238)));
                 this->rownanie_A->ForeColor = System::Drawing::Color::White;
                 this->rownanie_A->Location = System::Drawing::Point(4, 396);
                 this->rownanie_A->Name = L"rownanie_A";
                 this->rownanie_A->Size = System::Drawing::Size(54, 50);
                 this->rownanie_A->TabIndex = 37;
                 this->rownanie_A->Text = L"A";
                 this->rownanie_A->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
                 // 
                 // rownanie_x2
                 // 
                 this->rownanie_x2->BackColor = System::Drawing::Color::DarkOrange;
                 this->rownanie_x2->Font = (gcnew System::Drawing::Font(L"Arial", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                     static_cast<System::Byte>(238)));
                 this->rownanie_x2->ForeColor = System::Drawing::Color::White;
                 this->rownanie_x2->Location = System::Drawing::Point(60, 396);
                 this->rownanie_x2->Name = L"rownanie_x2";
                 this->rownanie_x2->Size = System::Drawing::Size(53, 50);
                 this->rownanie_x2->TabIndex = 38;
                 this->rownanie_x2->Text = L"x²+";
                 this->rownanie_x2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
                 // 
                 // rownanie_B
                 // 
                 this->rownanie_B->BackColor = System::Drawing::Color::DarkOrange;
                 this->rownanie_B->Font = (gcnew System::Drawing::Font(L"Arial", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                     static_cast<System::Byte>(238)));
                 this->rownanie_B->ForeColor = System::Drawing::Color::White;
                 this->rownanie_B->Location = System::Drawing::Point(115, 396);
                 this->rownanie_B->Name = L"rownanie_B";
                 this->rownanie_B->Size = System::Drawing::Size(53, 50);
                 this->rownanie_B->TabIndex = 39;
                 this->rownanie_B->Text = L"B";
                 this->rownanie_B->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
                 // 
                 // rownanie_x
                 // 
                 this->rownanie_x->BackColor = System::Drawing::Color::DarkOrange;
                 this->rownanie_x->Font = (gcnew System::Drawing::Font(L"Arial", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                     static_cast<System::Byte>(238)));
                 this->rownanie_x->ForeColor = System::Drawing::Color::White;
                 this->rownanie_x->Location = System::Drawing::Point(170, 396);
                 this->rownanie_x->Name = L"rownanie_x";
                 this->rownanie_x->Size = System::Drawing::Size(53, 50);
                 this->rownanie_x->TabIndex = 40;
                 this->rownanie_x->Text = L"x+";
                 this->rownanie_x->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
                 // 
                 // rownanie_C
                 // 
                 this->rownanie_C->BackColor = System::Drawing::Color::DarkOrange;
                 this->rownanie_C->Font = (gcnew System::Drawing::Font(L"Arial", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                     static_cast<System::Byte>(238)));
                 this->rownanie_C->ForeColor = System::Drawing::Color::White;
                 this->rownanie_C->Location = System::Drawing::Point(225, 396);
                 this->rownanie_C->Name = L"rownanie_C";
                 this->rownanie_C->Size = System::Drawing::Size(53, 50);
                 this->rownanie_C->TabIndex = 41;
                 this->rownanie_C->Text = L"C";
                 this->rownanie_C->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
                 // 
                 // rozwiazRownanie
                 // 
                 this->rozwiazRownanie->BackColor = System::Drawing::Color::DarkOrange;
                 this->rozwiazRownanie->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
                 this->rozwiazRownanie->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                     static_cast<System::Byte>(238)));
                 this->rozwiazRownanie->Location = System::Drawing::Point(4, 447);
                 this->rozwiazRownanie->Name = L"rozwiazRownanie";
                 this->rozwiazRownanie->Size = System::Drawing::Size(275, 30);
                 this->rozwiazRownanie->TabIndex = 42;
                 this->rozwiazRownanie->Text = L"Rozwiąż";
                 this->rozwiazRownanie->UseVisualStyleBackColor = false;
                 this->rozwiazRownanie->Click += gcnew System::EventHandler(this, &Plansza::rozwiazRownanie_Click);
                 // 
                 // ekranPomocniczy
                 // 
                 this->ekranPomocniczy->BackColor = System::Drawing::Color::Black;
                 this->ekranPomocniczy->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
                 this->ekranPomocniczy->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                     static_cast<System::Byte>(238)));
                 this->ekranPomocniczy->ForeColor = System::Drawing::Color::White;
                 this->ekranPomocniczy->Location = System::Drawing::Point(4, 28);
                 this->ekranPomocniczy->Name = L"ekranPomocniczy";
                 this->ekranPomocniczy->Size = System::Drawing::Size(274, 26);
                 this->ekranPomocniczy->TabIndex = 43;
                 this->ekranPomocniczy->Text = L"...";
                 this->ekranPomocniczy->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
                 // 
                 // Plansza
                 // 
                 this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
                 this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
                 this->BackColor = System::Drawing::Color::Black;
                 this->ClientSize = System::Drawing::Size(395, 628);
                 this->Controls->Add(this->ekranPomocniczy);
                 this->Controls->Add(this->rozwiazRownanie);
                 this->Controls->Add(this->rownanie_C);
                 this->Controls->Add(this->rownanie_x);
                 this->Controls->Add(this->rownanie_B);
                 this->Controls->Add(this->rownanie_x2);
                 this->Controls->Add(this->rownanie_A);
                 this->Controls->Add(this->zdjZnakZapytania);
                 this->Controls->Add(this->graDodawanie);
                 this->Controls->Add(this->graOdejmowanie);
                 this->Controls->Add(this->graMnozenie);
                 this->Controls->Add(this->brutto_netto);
                 this->Controls->Add(this->marza);
                 this->Controls->Add(this->narzut);
                 this->Controls->Add(this->netto_brutto);
                 this->Controls->Add(this->przyciskRownaSie);
                 this->Controls->Add(this->przyciskProcent);
                 this->Controls->Add(this->przyciskKwadrat);
                 this->Controls->Add(this->przyciskPierwiastek);
                 this->Controls->Add(this->przyciskDzielenia);
                 this->Controls->Add(this->przycisk_CE);
                 this->Controls->Add(this->przycisk_C);
                 this->Controls->Add(this->przyciskMnozenia);
                 this->Controls->Add(this->przyciskMinus);
                 this->Controls->Add(this->przyciskPlus);
                 this->Controls->Add(this->przyciskPrzecinek);
                 this->Controls->Add(this->przycisk_0);
                 this->Controls->Add(this->Przycisk_7);
                 this->Controls->Add(this->przycisk_8);
                 this->Controls->Add(this->przycisk_9);
                 this->Controls->Add(this->przycisk_6);
                 this->Controls->Add(this->przycisk_5);
                 this->Controls->Add(this->przycisk_4);
                 this->Controls->Add(this->przycisk_2);
                 this->Controls->Add(this->przycisk_3);
                 this->Controls->Add(this->przycisk_1);
                 this->Controls->Add(this->wyswietlacz);
                 this->Controls->Add(this->pasekMenu);
                 this->ForeColor = System::Drawing::Color::White;
                 this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
                 this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
                 this->MainMenuStrip = this->pasekMenu;
                 this->MaximizeBox = false;
                 this->Name = L"Plansza";
                 this->Text = L"Kalkulator";
                 this->pasekMenu->ResumeLayout(false);
                 this->pasekMenu->PerformLayout();
                 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->zdjZnakZapytania))->EndInit();
                 this->ResumeLayout(false);
                 this->PerformLayout();

             }
#pragma endregion

    private: void wyswietlLiczbe(System::String^);

    private: System::Void wyswietlPomoc_Click(System::Object^  sender, System::EventArgs^  e);

    private: System::Void widokRownanie_Click(System::Object^  sender, System::EventArgs^  e);

    private: System::Void widokStandard_Click(System::Object^  sender, System::EventArgs^  e);

    private: System::Void widokFinanse_Click(System::Object^  sender, System::EventArgs^  e);

    private: System::Void widokGra_Click(System::Object^  sender, System::EventArgs^  e);

    private: void schowajWidokRownania(bool widok);

    private: void schowajWidokGry(bool przesun);

    private: System::Void trybPrzypiecia_Click(System::Object^  sender, System::EventArgs^  e);

    private: System::Void trybOkienkowy_Click(System::Object^  sender, System::EventArgs^  e);

    private: System::Void plikZamknij_Click(System::Object^  sender, System::EventArgs^  e);

    private: System::Void przycisk_1_Click(System::Object^  sender, System::EventArgs^  e);

    private: System::Void przycisk_2_Click(System::Object^  sender, System::EventArgs^  e);

    private: System::Void przycisk_3_Click(System::Object^  sender, System::EventArgs^  e);

    private: System::Void przycisk_4_Click(System::Object^  sender, System::EventArgs^  e);

    private: System::Void przycisk_5_Click(System::Object^  sender, System::EventArgs^  e);

    private: System::Void przycisk_6_Click(System::Object^  sender, System::EventArgs^  e);

    private: System::Void Przycisk_7_Click(System::Object^  sender, System::EventArgs^  e);

    private: System::Void przycisk_8_Click(System::Object^  sender, System::EventArgs^  e);

    private: System::Void przycisk_9_Click(System::Object^  sender, System::EventArgs^  e);

    private: System::Void przycisk_0_Click(System::Object^  sender, System::EventArgs^  e);

    private: System::Void przyciskPrzecinek_Click(System::Object^  sender, System::EventArgs^  e);

    private: System::Void przyciskPlus_Click(System::Object^  sender, System::EventArgs^  e);

    private: System::Void przyciskMnozenia_Click(System::Object^  sender, System::EventArgs^  e);

    private: System::Void przyciskMinus_Click(System::Object^  sender, System::EventArgs^  e);

    private: System::Void przyciskDzielenia_Click(System::Object^  sender, System::EventArgs^  e);

    private: System::Void przycisk_C_Click(System::Object^  sender, System::EventArgs^  e);

    private: System::Void przycisk_CE_Click(System::Object^  sender, System::EventArgs^  e);

    private: System::Void przyciskPierwiastek_Click(System::Object^  sender, System::EventArgs^  e);

    private: System::Void przyciskKwadrat_Click(System::Object^  sender, System::EventArgs^  e);

    private: System::Void przyciskProcent_Click(System::Object^  sender, System::EventArgs^  e);

    private: System::Void netto_brutto_Click(System::Object^  sender, System::EventArgs^  e);

    private: System::Void brutto_netto_Click(System::Object^  sender, System::EventArgs^  e);

    private: System::Void marza_Click(System::Object^  sender, System::EventArgs^  e);

    private: System::Void narzut_Click_Click(System::Object^  sender, System::EventArgs^  e);

    private: System::Void przyciskRownaSie_Click(System::Object^  sender, System::EventArgs^  e);

    private: System::Void graDodawanie_Click(System::Object^  sender, System::EventArgs^  e);

    private: System::Void graOdejmowanie_Click(System::Object^  sender, System::EventArgs^  e);

    private: System::Void graMnozenie_Click(System::Object^  sender, System::EventArgs^  e);

    private: void losowanieLiczb(int p1, int p2);

    private: System::Void rozwiazRownanie_Click(System::Object^  sender, System::EventArgs^  e);
    };
}


