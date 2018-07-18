#include "Pomoc.h"

System::Void Kalkulator::Pomoc::przyciskZamknij_Click(System::Object^  sender, System::EventArgs^  e)
{
    this->Close();
}

System::Void Kalkulator::Pomoc::Pomoc_Load(System::Object^  sender, System::EventArgs^  e)
{
    this->tekstInformacji->Text = "Kalkulator\nAutor: Rafa³ Nowak\nRok:2017\nAll Rights reserved";
}