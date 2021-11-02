#include<iostream>
using namespace std;
void Aries();
void Taurus();
void Gemini();
void Cancer();
void Leo();
void Virgo();
void Libra();
void Scorpio();
void Sagittarius();
void Capricon();
void Aquarious();
void Pisces();
int main()
{
    int Month, Day;
   
    cout << "Enter your Month: ";
    cin >> Month;
    cout << "\nEnter your Day: ";
    cin >> Day;
    if((Month==3 && Day >=21) || (Month ==4 && Day <= 19 ))
        Aries();
    else if((Month==4 && Day >=20) || (Month ==5 && Day <= 20 ))
        Taurus();
    else if((Month==5 && Day >=21) || (Month ==6 && Day <= 20 ))
        Gemini();
    else if((Month==6 && Day >=21) || (Month ==7 && Day <= 22 ))
        Cancer();
    else if((Month==7 && Day >=23) || (Month ==8 && Day <= 22 ))
        Leo();
    else if((Month==8 && Day >=23) || (Month ==9 && Day <= 22 ))
        Virgo();
    else if((Month==9 && Day >=23) || (Month ==10 && Day <= 22 ))
        Libra();
    else if((Month==10 && Day >=23) || (Month ==11 && Day <= 21 ))
        Scorpio();
    else if((Month==11 && Day >=22) || (Month ==12 && Day <= 21 ))
        Sagittarius();
    else if((Month==12 && Day >=22) || (Month ==1 && Day <= 19 ))
        Capricon();
    else if((Month==1 && Day >=20) || (Month ==2 && Day <= 18 ))
        Aquarious();
    else if((Month==2 && Day >=19) || (Month ==3 && Day <= 20 ))
        Pisces();

	system("pause>0");

    return 0;
}

void Aries(){
    cout << "\n\nAries" << endl ;
   	cout << "----------------------------------\n"<< endl;
   	cout << "Aries is the first of the twelve zodiac signs\nand is represented by the constellation, the ram. \nIf born under this sign, you're considered to be adven-\nturous, dynamic, ambitious and competitive. Aries are \nknown for their quickness and leadership qualities, as \nwell as a tendency to be impulsive (blame the fire \nelement) and blunt.";
    
}
void Taurus()
{
    cout << "Taurus" << endl ;
    cout << "----------------------------------\n"<< endl;
    cout << "Taurus is the second of the twelve zodiac signs\n and is represented by the constellation, Taurus.\n If born under this sign, you're considered to be ded-\nicated, dependable, focused and creative. Tauruses are\nknown for being intelligent and trustworthy, as well as\n stubborn (the sign is a bull, after all). Tauruses\n love to seek out pleasure and can be known to question authority.";
}
void Gemini()
{
    cout << "Gemini" << endl ;
    cout << "----------------------------------\n"<< endl;
    cout << " Gemini is the third of the twelve zodiac signs\n and is represented by the constellation Gemini,\n which is made up of the Dioscuri—the twins, Castor and\n Pollux. If born under this sign, you're considered to\n be energetic, expressive, intelligent and playful. \nGemini are known for their outgoing nature and varied \ninterests, but they have earned a (likely misplaced) reputation for being two-faced.";
}
void Cancer()
{
    cout << "Cancer" << endl ;
    cout << "----------------------------------\n"<< endl;
    cout << "Cancer is the fourth of the twelve zodiac signs\n and is represented by the constellation, Cancer,\n which is most often depicted as a crab. If born under\n this sign, you're considered to be bold, compassionate,\n protective and intuitive. Cancers are known for \ntheir care-giving nature, as well as a tendency to be \ndistant and passive-aggressive.";
}
void Leo()
{
    cout << "Leo" << endl ;
    cout << "----------------------------------\n"<< endl;
    cout << "Leo is the fifth of the twelve zodiac signs \nand is represented by the constellation, the lion. If\n born under this sign, you're considered to be vivaci\nous, outgoing and fiery. Leos are known for their warm \nnature and high self-esteem, but they can have a \ntendency to be proud or jealous.";
}
void Virgo()
{
    cout << "Virgo" << endl ;
    cout << "----------------------------------\n"<< endl;
    cout << "Virgo is the sixth of the twelve zodiac signs\n and is represented by the constellation, the maiden. \nIf born under this sign, you're considered to be pra\nctical, analytical and sophisticated. Virgos are known \nfor their kindness and attention to detail, but they\n can have a tendency to be shy and have unfairly high\n standards for themselves and their\n loved ones.";
}
void Libra()
{
    cout << "Libra" << endl ;
    cout << "----------------------------------\n"<< endl;
    cout << "Libra is the seventh of the twelve zodiac signs\n and is represented by the only inanimate constella-\ntion, the scales. If born under this sign, you're \nconsidered to be balanced, social and diplomatic. Libras \nare known for their selfless nature and companionship,\n but they can have a tendency to be too pragmatic \nand insecure.";
}
void Scorpio()
{
    cout << "Scorpio" << endl ;
    cout << "----------------------------------\n"<< endl;
    cout << "Scorpio is the eighth of the twelve zodiac signs\n and is represented by the constellation, the sco-\nrpion. If born under this sign, you're considered to\n be loyal, resourceful and focused. Scorpios are known \nfor their bravery and trailblazing nature, but they can \nappear prickly and closed off to strangers.";
}
void Sagittarius()
{
    cout << "Sagittarius" << endl ;
    cout << "----------------------------------\n"<< endl;
    cout << "Sagittarius is the ninth of the twelve zodiac signs\n and is represented by the constellation, the \narcher. If born under this sign, you're considered to \nbe optimistic, independent and intellectual. Sagittari-\nuses are known for being magnetic and generous, but they\n can have a tendency to be arrogant and too direct.";
}
void Capricon()
{
    cout << "Capricon" << endl ;
    cout << "----------------------------------\n"<< endl;
    cout << "Capricorn is the tenth of the twelve zodiac signs \nand is represented by the constellation, the sea\n goat. If born under this sign, you're considered to \nbe patient, hardworking and disciplined. Capricorns are\n known for their tenacity and preference for boundaries \nand rules, but they can have a tendency to be stub-\nborn and too focused on perfection.";
}
void Aquarious()
{
    cout << "Aquarious" << endl ;
    cout << "----------------------------------\n"<< endl;
    cout << "Aquarius is the eleventh of the twelve zodiac signs\n and is represented by the constellation, the \nwater bearer. If born under this sign, you're considered\n to be innovative, loyal and original. Aquariuses are\n known for their creativity and rebellious nature, but \nthey can have a tendency to be aloof with loved ones\n and uncompromising.";
}
void Pisces()
{
    cout << "Pisces" << endl ;
    cout << "----------------------------------\n"<< endl;
    cout << "Pisces is the final of the twelve zodiac signs and\n is represented by the constellation, the fishes.\n If born under this sign, you're considered to be \nintuitive, creative and empathetic. Pisces are known for\n their compassion and artistic nature, but they can have\n a tendency to be too sensitive or delusional.";
}
