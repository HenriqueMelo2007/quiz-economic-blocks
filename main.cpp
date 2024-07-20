#include <iostream>
#include <array>
#include <vector>

using namespace std;

int total = 0;
int corrects = 0;

class Question
{
private:
  string statement;
  array<string, 3> options;
  int correctOption;

public:
  Question(const string &statement, const array<string, 3> &options, int correctOption)
      : statement(statement), options(options), correctOption(correctOption) {}

  void askAndGetResult()
  {
    int userAnswer;
    cout << statement << endl;
    for (int i = 0; i < 3; i++)
    {
      cout << i + 1 << ". " << options[i] << endl;
    }
    cout << "Your answer: ";
    cin >> userAnswer;

    if (userAnswer == correctOption)
    {
      corrects++;
    }
    total++;
  }
};

int main()
{

  vector<Question> questions = {
      Question("Which countries are members of NAFTA?",
               {"USA, Canada, Mexico", "USA, UK, Germany", "USA, China, Japan"},
               1),
      Question("What is the European Union?",
               {"A single country", "An economic and political union of countries", "A trade agreement between two countries"},
               2),
      Question("Where did the concept of economic blocs originate?",
               {"Europe", "Asia", "America"},
               1),
      Question("Which organization is credited with pioneering the concept of economic integration?",
               {"European Union", "League of Nations", "World Trade Organization"},
               3),
      Question("What was the first economic bloc ever created?",
               {"European Coal and Steel Community", "NAFTA", "ASEAN"},
               1),
      Question("What is a primary advantage of economic blocs?",
               {"Higher tariffs", "Isolation of economies", "Increased trade and investment"},
               3),
      Question("How do economic blocs help member countries?",
               {"By increasing trade barriers", "By reducing trade barriers", "By controlling national currencies"},
               2),
      Question("Which type of economic bloc allows for free movement of goods and services?",
               {"Single Market", "Customs Union", "Preferential Trade Agreement"},
               1),
      Question("What does a Customs Union involve?",
               {"Common external tariffs and free trade among members", "No trade barriers among members only", "Harmonized regulations across borders"},
               2),
      Question("Which type of bloc provides the most extensive integration?",
               {"Economic Union", "Free Trade Area", "Customs Union"},
               1),
      Question("What is the main feature of a Free Trade Area?",
               {"Elimination of tariffs among member countries", "Common tariffs for external countries", "Shared currency among members"},
               1),
      Question("How is a Preferential Trade Agreement different from other blocs?",
               {"It creates a single market for goods and services", "It eliminates all tariffs", "It provides preferential trade terms to certain countries"},
               3),
      Question("Which bloc typically includes shared regulations and common policies?",
               {"Economic Union", "Customs Union", "Free Trade Area"},
               2),
      Question("Which of the following is a major economic bloc in Africa?",
               {"African Union", "Mercosur", "NAFTA"},
               1),
      Question("Which bloc includes Australia and several Pacific Island nations?",
               {"Pacific Islands Forum", "African Union", "G7"},
               1),
      Question("Which economic bloc is known for its focus on economic integration in the Americas?",
               {"Mercosur", "African Union", "EU"},
               1),
      Question("Which bloc was formed to address trade issues in the Asia-Pacific region?",
               {"Asia-Pacific Economic Cooperation", "G20", "NAFTA"},
               1),
      Question("Which economic bloc is characterized by its single market and common currency?",
               {"European Union", "ASEAN", "Mercosur"},
               1),
      Question("Which bloc primarily focuses on trade and economic cooperation in the Middle East?",
               {"Gulf Cooperation Council", "EU", "NAFTA"},
               1)};
               

  cout << "*************** QUIZ ECONOMIC BLOCKS ***************" << endl;

  for (int i = 0; i < questions.size(); i++)
  {
    questions[i].askAndGetResult();
  }

  cout << "Your result: " << corrects << "/" << total << endl;

  cout << "Percentage: " << static_cast<float>(corrects) / total * 100 << "%" << endl;

  return 0;
}