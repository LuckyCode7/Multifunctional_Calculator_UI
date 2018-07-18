#include "Plansza.h"
#include <cmath>

namespace zmienne
{
    double pierwszaLiczba, drugaLiczba, wynik, odp, delta, x1, x2, A, B, C;
    char operacja;
    bool statusWyswietlacza = false;
}

void Kalkulator::Plansza::wyswietlLiczbe(System::String^ liczba)
{
    if (this->wyswietlacz->Text == "0" || zmienne::statusWyswietlacza)
    {
        this->wyswietlacz->Text = liczba;
    }
    else
    {
        this->wyswietlacz->Text += liczba;
    }
    zmienne::statusWyswietlacza = false;
}

System::Void Kalkulator::Plansza::wyswietlPomoc_Click(System::Object^  sender, System::EventArgs^  e)
{
    Pomoc^ ja = gcnew Pomoc();
    ja->Show();
}

System::Void Kalkulator::Plansza::widokRownanie_Click(System::Object^  sender, System::EventArgs^  e)
{
    this->Plansza::Width = 298;
    this->Plansza::Height = 520;
    this->wyswietlacz->Text = "0";
    this->ekranPomocniczy->Text = "...";
    schowajWidokRownania(true);
    schowajWidokGry(false);
}

System::Void Kalkulator::Plansza::widokStandard_Click(System::Object^  sender, System::EventArgs^  e)
{
    this->Plansza::Width = 299;
    this->Plansza::Height = 433;
    this->wyswietlacz->Text = "0";
    this->ekranPomocniczy->Text = "...";
    schowajWidokGry(false);
}

System::Void Kalkulator::Plansza::widokFinanse_Click(System::Object^  sender, System::EventArgs^  e)
{
    this->Plansza::Width = 411;
    this->Plansza::Height = 432;
    this->wyswietlacz->Text = "0";
    this->ekranPomocniczy->Text = "...";
    schowajWidokGry(false);
}

System::Void Kalkulator::Plansza::widokGra_Click(System::Object^  sender, System::EventArgs^  e)
{
    this->Plansza::Width = 298;
    this->Plansza::Height = 570;
    this->wyswietlacz->Text = "Zagramy?";
    this->ekranPomocniczy->Text = "...";
    schowajWidokRownania(false);
    schowajWidokGry(true);
}

void Kalkulator::Plansza::schowajWidokRownania(bool widok)
{
    if (widok)
    {
        this->rownanie_A->Visible = true;
        this->rownanie_B->Visible = true;
        this->rownanie_C->Visible = true;
        this->rozwiazRownanie->Visible = true;
        this->rownanie_x2->Visible = true;
        this->rownanie_x->Visible = true;
    }
    else
    {
        this->rownanie_A->Visible = false;
        this->rownanie_B->Visible = false;
        this->rownanie_C->Visible = false;
        this->rozwiazRownanie->Visible = false;
        this->rownanie_x2->Visible = false;
        this->rownanie_x->Visible = false;
    }
}

void Kalkulator::Plansza::schowajWidokGry(bool przesun)
{
    if (przesun)
    {
        this->zdjZnakZapytania->Location = System::Drawing::Point(4, 396);
        this->graDodawanie->Location = System::Drawing::Point(180, 397);
        this->graOdejmowanie->Location = System::Drawing::Point(180, 440);
        this->graMnozenie->Location = System::Drawing::Point(180, 483);
    }
    else
    {
        this->zdjZnakZapytania->Location = System::Drawing::Point(4, 495);
        this->graDodawanie->Location = System::Drawing::Point(179, 494);
        this->graOdejmowanie->Location = System::Drawing::Point(179, 538);
        this->graMnozenie->Location = System::Drawing::Point(179, 582);
    }
}

System::Void Kalkulator::Plansza::trybPrzypiecia_Click(System::Object^  sender, System::EventArgs^  e)
{
    this->Plansza::FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
    TopMost = true;
}

System::Void Kalkulator::Plansza::trybOkienkowy_Click(System::Object^  sender, System::EventArgs^  e)
{
    this->Plansza::FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
}

System::Void Kalkulator::Plansza::plikZamknij_Click(System::Object^  sender, System::EventArgs^  e)
{
    if (MessageBox::Show("Czy wy³¹czyæ kalkulator?", "Kalkulator", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
    {
        this->Plansza::Width = 301;
        this->Plansza::Height = 407;
        Application::Exit();
    }
}

System::Void Kalkulator::Plansza::przycisk_1_Click(System::Object^  sender, System::EventArgs^  e) { this->wyswietlLiczbe("1"); }

System::Void Kalkulator::Plansza::przycisk_2_Click(System::Object^  sender, System::EventArgs^  e) { this->wyswietlLiczbe("2"); }

System::Void Kalkulator::Plansza::przycisk_3_Click(System::Object^  sender, System::EventArgs^  e) { this->wyswietlLiczbe("3"); }

System::Void Kalkulator::Plansza::przycisk_4_Click(System::Object^  sender, System::EventArgs^  e) { this->wyswietlLiczbe("4"); }

System::Void Kalkulator::Plansza::przycisk_5_Click(System::Object^  sender, System::EventArgs^  e) { this->wyswietlLiczbe("5"); }

System::Void Kalkulator::Plansza::przycisk_6_Click(System::Object^  sender, System::EventArgs^  e) { this->wyswietlLiczbe("6"); }

System::Void Kalkulator::Plansza::Przycisk_7_Click(System::Object^  sender, System::EventArgs^  e) { this->wyswietlLiczbe("7"); }

System::Void Kalkulator::Plansza::przycisk_8_Click(System::Object^  sender, System::EventArgs^  e) { this->wyswietlLiczbe("8"); }

System::Void Kalkulator::Plansza::przycisk_9_Click(System::Object^  sender, System::EventArgs^  e) { this->wyswietlLiczbe("9"); }

System::Void Kalkulator::Plansza::przycisk_0_Click(System::Object^  sender, System::EventArgs^  e) { this->wyswietlLiczbe("0"); }

System::Void Kalkulator::Plansza::przyciskPrzecinek_Click(System::Object^  sender, System::EventArgs^  e) { this->wyswietlLiczbe(","); }

System::Void Kalkulator::Plansza::przyciskPlus_Click(System::Object^  sender, System::EventArgs^  e)
{
    this->ekranPomocniczy->Text = wyswietlacz->Text + " +";
    zmienne::pierwszaLiczba = Convert::ToDouble(wyswietlacz->Text);
    zmienne::operacja = '+';
    zmienne::statusWyswietlacza = true;
}

System::Void Kalkulator::Plansza::przyciskMnozenia_Click(System::Object^  sender, System::EventArgs^  e)
{
    this->ekranPomocniczy->Text = wyswietlacz->Text + " *";
    zmienne::pierwszaLiczba = Convert::ToDouble(wyswietlacz->Text);
    zmienne::operacja = '*';
    zmienne::statusWyswietlacza = true;
}

System::Void Kalkulator::Plansza::przyciskMinus_Click(System::Object^  sender, System::EventArgs^  e)
{
    this->ekranPomocniczy->Text = wyswietlacz->Text + " -";
    zmienne::pierwszaLiczba = Convert::ToDouble(wyswietlacz->Text);
    zmienne::operacja = '-';
    zmienne::statusWyswietlacza = true;
}

System::Void Kalkulator::Plansza::przyciskDzielenia_Click(System::Object^  sender, System::EventArgs^  e)
{
    this->ekranPomocniczy->Text = wyswietlacz->Text + " /";
    zmienne::pierwszaLiczba = Convert::ToDouble(wyswietlacz->Text);
    zmienne::operacja = '/';
    zmienne::statusWyswietlacza = true;
}

System::Void Kalkulator::Plansza::przycisk_C_Click(System::Object^  sender, System::EventArgs^  e)
{
    this->wyswietlacz->Text = "0";
    this->ekranPomocniczy->Text = "...";
    zmienne::pierwszaLiczba = 0;
    zmienne::drugaLiczba = 0;
    zmienne::statusWyswietlacza = false;
}

System::Void Kalkulator::Plansza::przycisk_CE_Click(System::Object^  sender, System::EventArgs^  e)
{
    this->wyswietlacz->Text = "0";
}

System::Void Kalkulator::Plansza::przyciskPierwiastek_Click(System::Object^  sender, System::EventArgs^  e)
{
    this->ekranPomocniczy->Text = "sqrt " + "(" + wyswietlacz->Text + ")";
    zmienne::pierwszaLiczba = Convert::ToDouble(wyswietlacz->Text);
    zmienne::wynik = Math::Sqrt(zmienne::pierwszaLiczba);
    this->wyswietlacz->Text = Convert::ToString(zmienne::wynik);
    zmienne::statusWyswietlacza = true;
}

System::Void Kalkulator::Plansza::przyciskKwadrat_Click(System::Object^  sender, System::EventArgs^  e)
{
    this->ekranPomocniczy->Text = wyswietlacz->Text + "^2";
    zmienne::pierwszaLiczba = Convert::ToDouble(wyswietlacz->Text);
    zmienne::wynik = Math::Pow(zmienne::pierwszaLiczba, 2);
    this->wyswietlacz->Text = Convert::ToString(zmienne::wynik);
    zmienne::statusWyswietlacza = true;
}

System::Void Kalkulator::Plansza::przyciskProcent_Click(System::Object^  sender, System::EventArgs^  e)
{
    this->ekranPomocniczy->Text = wyswietlacz->Text + "% z ";
    zmienne::pierwszaLiczba = Convert::ToDouble(wyswietlacz->Text);
    zmienne::statusWyswietlacza = true;
    zmienne::operacja = 'p';
}

System::Void Kalkulator::Plansza::netto_brutto_Click(System::Object^  sender, System::EventArgs^  e)
{
    this->ekranPomocniczy->Text = "Zamiana netto na brutto";
    zmienne::pierwszaLiczba = Convert::ToDouble(wyswietlacz->Text);
    zmienne::statusWyswietlacza = true;
    zmienne::operacja = 'n';
}

System::Void Kalkulator::Plansza::brutto_netto_Click(System::Object^  sender, System::EventArgs^  e)
{
    this->ekranPomocniczy->Text = "Zamiana brutto na netto";
    zmienne::pierwszaLiczba = Convert::ToDouble(wyswietlacz->Text);
    zmienne::statusWyswietlacza = true;
    zmienne::operacja = 'b';
}

System::Void Kalkulator::Plansza::marza_Click(System::Object^  sender, System::EventArgs^  e)
{
    this->ekranPomocniczy->Text = "Mar¿a";
    zmienne::pierwszaLiczba = Convert::ToDouble(wyswietlacz->Text);
    zmienne::statusWyswietlacza = true;
    zmienne::operacja = 'm';
}

System::Void Kalkulator::Plansza::narzut_Click_Click(System::Object^  sender, System::EventArgs^  e)
{
    this->ekranPomocniczy->Text = "Narzut";
    zmienne::pierwszaLiczba = Convert::ToDouble(wyswietlacz->Text);
    zmienne::statusWyswietlacza = true;
    zmienne::operacja = 'x';
}

System::Void Kalkulator::Plansza::przyciskRownaSie_Click(System::Object^  sender, System::EventArgs^  e)
{
    zmienne::drugaLiczba = Convert::ToDouble(this->wyswietlacz->Text);
    switch (zmienne::operacja)
    {
    case '+':
        zmienne::wynik = zmienne::pierwszaLiczba + zmienne::drugaLiczba;
        this->ekranPomocniczy->Text = Convert::ToString(zmienne::pierwszaLiczba) + " + " + Convert::ToString(zmienne::drugaLiczba) + " =";
        break;
    case '-':
        zmienne::wynik = zmienne::pierwszaLiczba - zmienne::drugaLiczba;
        this->ekranPomocniczy->Text = Convert::ToString(zmienne::pierwszaLiczba) + " - " + Convert::ToString(zmienne::drugaLiczba) + " =";
        break;
    case '*':
        zmienne::wynik = zmienne::pierwszaLiczba * zmienne::drugaLiczba;
        this->ekranPomocniczy->Text = Convert::ToString(zmienne::pierwszaLiczba) + " * " + Convert::ToString(zmienne::drugaLiczba) + " =";
        break;
    case 'p':
        this->ekranPomocniczy->Text = Convert::ToString(zmienne::pierwszaLiczba) + "% z " + Convert::ToString(zmienne::drugaLiczba) + " =";
        zmienne::wynik = (zmienne::pierwszaLiczba / 100) * zmienne::drugaLiczba;
        break;
    case 'n':
        zmienne::wynik = zmienne::pierwszaLiczba * (1 + (zmienne::drugaLiczba / 100));
        break;
    case 'b':
        zmienne::wynik = zmienne::pierwszaLiczba / (1 + (zmienne::drugaLiczba / 100));
        break;
    case 'm':
        zmienne::wynik = ((zmienne::drugaLiczba - zmienne::pierwszaLiczba) / zmienne::drugaLiczba) * 100;
        break;
    case 'x':
        zmienne::wynik = ((zmienne::drugaLiczba - zmienne::pierwszaLiczba) / zmienne::pierwszaLiczba) * 100;
        break;
    case 'd':
        if (zmienne::drugaLiczba == zmienne::odp)
        {
            this->wyswietlacz->Text = "Brawo!";
            this->zdjZnakZapytania->Image = this->listaZdjec->Images[2];
        }
        else
        {
            this->wyswietlacz->Text = "Oszala³eœ?";
            this->zdjZnakZapytania->Image = this->listaZdjec->Images[1];
        }
        break;
    case 'o':
        if (zmienne::drugaLiczba == zmienne::odp)
        {
            this->wyswietlacz->Text = "Brawo!";
            this->zdjZnakZapytania->Image = this->listaZdjec->Images[2];
        }
        else
        {
            this->wyswietlacz->Text = "Oszala³eœ?";
            this->zdjZnakZapytania->Image = this->listaZdjec->Images[1];
        }
        break;
    case 'k':
        if (zmienne::drugaLiczba == zmienne::odp)
        {
            this->wyswietlacz->Text = "Brawo!";
            this->zdjZnakZapytania->Image = this->listaZdjec->Images[2];
        }
        else
        {
            this->wyswietlacz->Text = "Oszala³eœ?";
            this->zdjZnakZapytania->Image = this->listaZdjec->Images[1];
        }
        break;
    case '/':
        if (zmienne::drugaLiczba == 0)
        {
            MessageBox::Show("Dzielenie przez zero jest niewykonywalne !", "Uwaga", MessageBoxButtons::OK, MessageBoxIcon::Error);
            zmienne::pierwszaLiczba = 0;
            zmienne::wynik = 0;
        }
        else
            zmienne::wynik = zmienne::pierwszaLiczba / zmienne::drugaLiczba;
        break;
    }
    zmienne::statusWyswietlacza = true;
    if (zmienne::operacja != 'd' && zmienne::operacja != 'o' && zmienne::operacja != 'k')
    {
        this->wyswietlacz->Text = Convert::ToString(zmienne::wynik);
    }
}

System::Void Kalkulator::Plansza::graDodawanie_Click(System::Object^  sender, System::EventArgs^  e)
{
    losowanieLiczb(1, 100);
    zmienne::odp = zmienne::pierwszaLiczba + zmienne::drugaLiczba;
    this->wyswietlacz->Text = zmienne::pierwszaLiczba + "+" + zmienne::drugaLiczba + "= ?";
    zmienne::statusWyswietlacza = true;
    zmienne::operacja = 'd';
    this->zdjZnakZapytania->Image = this->listaZdjec->Images[0];
}

System::Void Kalkulator::Plansza::graOdejmowanie_Click(System::Object^  sender, System::EventArgs^  e)
{
    do losowanieLiczb(1, 100);
    while (zmienne::pierwszaLiczba <= zmienne::drugaLiczba);
    zmienne::odp = zmienne::pierwszaLiczba - zmienne::drugaLiczba;
    this->wyswietlacz->Text = zmienne::pierwszaLiczba + "-" + zmienne::drugaLiczba + "= ?";
    zmienne::statusWyswietlacza = true;
    zmienne::operacja = 'o';
    this->zdjZnakZapytania->Image = this->listaZdjec->Images[0];
}

System::Void Kalkulator::Plansza::graMnozenie_Click(System::Object^  sender, System::EventArgs^  e)
{
    losowanieLiczb(1, 12);
    zmienne::odp = zmienne::pierwszaLiczba * zmienne::drugaLiczba;
    this->wyswietlacz->Text = zmienne::pierwszaLiczba + "*" + zmienne::drugaLiczba + "= ?";
    zmienne::statusWyswietlacza = true;
    zmienne::operacja = 'k';
    this->zdjZnakZapytania->Image = this->listaZdjec->Images[0];
}

void Kalkulator::Plansza::losowanieLiczb(int p1, int p2)
{
    Random^losuj = gcnew Random;
    zmienne::pierwszaLiczba = losuj->Next(p1, p2);
    zmienne::drugaLiczba = losuj->Next(p1, p2);
}

System::Void Kalkulator::Plansza::rozwiazRownanie_Click(System::Object^  sender, System::EventArgs^  e)
{
    if ((this->rownanie_A->Text != "A") && (this->rownanie_B->Text != "B") && (this->rownanie_C->Text != "C"))
    {
        zmienne::A = Convert::ToDouble(this->rownanie_A->Text);
        zmienne::B = Convert::ToDouble(this->rownanie_B->Text);
        zmienne::C = Convert::ToDouble(this->rownanie_C->Text);
        zmienne::delta = (zmienne::B*zmienne::B) - (4 * zmienne::A*zmienne::C);
        if (zmienne::delta > 0)
        {
            zmienne::x1 = (-zmienne::B - Math::Sqrt(zmienne::delta)) / (2 * zmienne::A);
            zmienne::x2 = (-zmienne::B + Math::Sqrt(zmienne::delta)) / (2 * zmienne::A);
            this->wyswietlacz->Text = "x1=" + round(zmienne::x1) + "," + "x2=" + round(zmienne::x2);
            zmienne::statusWyswietlacza = true;
        }
        if (zmienne::delta == 0)
        {
            zmienne::x1 = -zmienne::B / (2 * zmienne::A);
            this->wyswietlacz->Text = "x=" + round(zmienne::x1);
            zmienne::statusWyswietlacza = true;
        }
        if (zmienne::delta < 0)
        {
            this->wyswietlacz->Text = "Brak x1 i x2";
        }
    }
}


