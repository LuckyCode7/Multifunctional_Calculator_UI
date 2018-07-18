#pragma once

namespace Kalkulator {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    /// <summary>
    /// Summary for Pomoc
    /// </summary>
    public ref class Pomoc : public System::Windows::Forms::Form
    {
    public:
        Pomoc(void)
        {
            InitializeComponent();
            //
            //TODO: Add the constructor code here
            //
        }
    protected:
        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        ~Pomoc()
        {
            if (components)
            {
                delete components;
            }
        }
    private: System::Windows::Forms::Button^  przyciskZamknij;
    private: System::Windows::Forms::Label^  tekstInformacji;
    private: System::Windows::Forms::PictureBox^  zdjAutor;
             /// <summary>
             /// Required designer variable.
             /// </summary>
             System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
             /// <summary>
             /// Required method for Designer support - do not modify
             /// the contents of this method with the code editor.
             /// </summary>
             void InitializeComponent(void)
             {
                 System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Pomoc::typeid));
                 this->przyciskZamknij = (gcnew System::Windows::Forms::Button());
                 this->tekstInformacji = (gcnew System::Windows::Forms::Label());
                 this->zdjAutor = (gcnew System::Windows::Forms::PictureBox());
                 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->zdjAutor))->BeginInit();
                 this->SuspendLayout();
                 // 
                 // przyciskZamknij
                 // 
                 this->przyciskZamknij->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
                     static_cast<System::Int32>(static_cast<System::Byte>(255)));
                 this->przyciskZamknij->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
                 this->przyciskZamknij->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                     static_cast<System::Byte>(238)));
                 this->przyciskZamknij->Location = System::Drawing::Point(68, 203);
                 this->przyciskZamknij->Name = L"przyciskZamknij";
                 this->przyciskZamknij->Size = System::Drawing::Size(130, 35);
                 this->przyciskZamknij->TabIndex = 0;
                 this->przyciskZamknij->Text = L"Zamknij";
                 this->przyciskZamknij->UseVisualStyleBackColor = false;
                 this->przyciskZamknij->Click += gcnew System::EventHandler(this, &Pomoc::przyciskZamknij_Click);
                 // 
                 // tekstInformacji
                 // 
                 this->tekstInformacji->AutoSize = true;
                 this->tekstInformacji->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                     System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
                 this->tekstInformacji->ForeColor = System::Drawing::Color::White;
                 this->tekstInformacji->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
                 this->tekstInformacji->Location = System::Drawing::Point(65, 125);
                 this->tekstInformacji->Name = L"tekstInformacji";
                 this->tekstInformacji->Size = System::Drawing::Size(48, 18);
                 this->tekstInformacji->TabIndex = 1;
                 this->tekstInformacji->Text = L"label1";
                 this->tekstInformacji->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
                 // 
                 // zdjAutor
                 // 
                 this->zdjAutor->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
                 this->zdjAutor->Enabled = false;
                 this->zdjAutor->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"zdjAutor.Image")));
                 this->zdjAutor->Location = System::Drawing::Point(68, 3);
                 this->zdjAutor->Name = L"zdjAutor";
                 this->zdjAutor->Size = System::Drawing::Size(130, 115);
                 this->zdjAutor->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
                 this->zdjAutor->TabIndex = 2;
                 this->zdjAutor->TabStop = false;
                 // 
                 // Pomoc
                 // 
                 this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
                 this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
                 this->BackColor = System::Drawing::SystemColors::MenuHighlight;
                 this->ClientSize = System::Drawing::Size(267, 244);
                 this->Controls->Add(this->zdjAutor);
                 this->Controls->Add(this->tekstInformacji);
                 this->Controls->Add(this->przyciskZamknij);
                 this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
                 this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
                 this->MaximizeBox = false;
                 this->Name = L"Pomoc";
                 this->Text = L"Pomoc";
                 this->Load += gcnew System::EventHandler(this, &Pomoc::Pomoc_Load);
                 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->zdjAutor))->EndInit();
                 this->ResumeLayout(false);
                 this->PerformLayout();

             }
#pragma endregion
    private: System::Void przyciskZamknij_Click(System::Object^  sender, System::EventArgs^  e);

    private: System::Void Pomoc_Load(System::Object^  sender, System::EventArgs^  e);
    };
}
