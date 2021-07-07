#include "generator.h"

Generator::Generator()
{

}

void Generator::generate(std::string filename,int gen)
{
    std::ofstream out("../prData/" + filename, std::ios::out | std::ios::app);

    switch (gen)
    {
    case 0: {
        std::string line;
        std::ifstream Fsurname("../prData/personal/surname.txt");
        std::ifstream Fname("../prData/personal/name.txt");
        std::ifstream Fpatronymic("../prData/personal/patronymic.txt");

        std::vector<std::string> surnames;
        std::vector<std::string> names;
        std::vector<std::string> patronymic;
        if (Fsurname.is_open())
        {
            while (getline(Fsurname, line))
            {
                surnames.push_back(line);
            }
        }
        Fsurname.close();

        if (Fname.is_open())
        {
            while (getline(Fname, line))
            {
                names.push_back(line);
            }
        }
        Fname.close();


        if (Fpatronymic.is_open())
        {
            while (getline(Fpatronymic, line))
            {
                patronymic.push_back(line);
            }
        }
        Fpatronymic.close();


        int r1 = rand() % surnames.size();
        int r2 = rand() % names.size();
        int r3 = rand() % patronymic.size();
        std::string str = surnames[r1] + " " + names[r2] + " " + patronymic[r3];


        out << str;
        break; }



    case 1: {
        std::string line;
        std::ifstream Fcountry("../prData/Geographic/country.txt");
        std::ifstream Fcity("../prData/Geographic/city.txt");
        std::ifstream Fstreet("../prData/Geographic/street.txt");
        std::ifstream Fhome("../prData/Geographic/home.txt");
        std::vector<std::string> countries;
        std::vector<std::string> cities;
        std::vector<std::string> streets;
        std::vector<std::string> homes;

        if (Fcountry.is_open())
        {
            while (getline(Fcountry, line))
            {
                countries.push_back(line);
            }
        }
        Fcountry.close();

        if (Fcity.is_open())
        {
            while (getline(Fcity, line))
            {
                cities.push_back(line);
            }
        }
        Fcity.close();


        if (Fstreet.is_open())
        {
            while (getline(Fstreet, line))
            {
                streets.push_back(line);
            }
        }
        Fstreet.close();


        if (Fhome.is_open())
        {
            while (getline(Fhome, line))
            {
                homes.push_back(line);
            }
        }
        Fhome.close();

        int r1 = rand() % countries.size();
        int r2 = rand() % cities.size();
        int r3 = rand() % streets.size();
        int r4 = rand() % homes.size();
        std::string str = countries[r1] + "," + cities[r2] + "," + streets[r3] + "," + homes[r4];
        out << str;
        break; }
    case 2: {
        int profit = rand() % 100; // реальные данные
        double rentability = (rand() % 100) / 100.0; // от 0 до 1 точность до 100
        double gain = (rand() % 10000) / 10000.0; // от 0 до 1 с точностью до 10.000
        std::string str = std::to_string(profit) + " " + std::to_string(rentability) + " " + std::to_string(gain);
        out << str;
        break; }

    case 3: {
        std::string line;
        std::ifstream Fname("../prData/organization/name.txt");
        std::ifstream Flocation("../prData/organization/location.txt");
        std::ifstream Ffounder("../prData/organization/founder.txt");

        std::vector<std::string> names;
        std::vector<std::string> locationes;
        std::vector<std::string> founders;
        if (Fname.is_open())
        {
            while (getline(Fname, line))
            {
                names.push_back(line);
            }
        }
        Fname.close();

        if (Flocation.is_open())
        {
            while (getline(Flocation, line))
            {
                locationes.push_back(line);
            }
        }
        Flocation.close();


        if (Ffounder.is_open())
        {
            while (getline(Ffounder, line))
            {
                founders.push_back(line);
            }
        }
        Ffounder.close();


        int r1 = rand() % names.size();
        int r2 = rand() % locationes.size();
        int r3 = rand() % founders.size();
        std::string str = names[r1] + " ;\t" + locationes[r2] + ";\t" + founders[r3];

        out << str;
        break; }
    }
    out << "\n";

}
