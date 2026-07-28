// Fiqh Quiz Game

#include <cctype>
#include <iostream>

void UserChoiceManager(int choice_arg);
void QuizGenerator(std::string questions[], char answers_arg[]);

int main(void) {
  std::cout << "*** Fiqh Quiz Game ***\n";

  int choice;

  std::cout << "Choose difficulty:\n1. Easy\n2. Medium\n3. Hard\nYour choice: ";
  if (!(std::cin >> choice)) {
    std::cout << "Invalid Input!\n";
    return 1;
  }

  if (choice != 1 && choice != 2 && choice != 3) {
    std::cout << "Invalid Input! You can only choose -> [1 - 3]\n";
    return 1;
  }

  UserChoiceManager(choice);

  return 0;
}

void QuizGenerator(std::string questions[], char answers_arg[]) {
  char answer;
  int counter = 0;
  for (int i = 0; i < 5; i++) {
    std::cout << questions[i];
    std::cout << "Answer: ";
    std::cin >> answer;

    answer = toupper(answer);
    if (answer != answers_arg[i]) {
      std::cout << "Incorrect answer!\n";
      std::cout << "Points: " << counter << " / 5" << '\n';
      continue;
    }

    std::cout << "Correct! +1\n";
    counter++;
    std::cout << "Points: " << counter << " / 5" << '\n';
  }
}

void UserChoiceManager(int choice_arg) {
  if (choice_arg == 1) {
    std::string easy_questions[5] = {
        "1. Which of the following does NOT break wudu'?\nA. Passing wind\nB. "
        "Urinating\nC. Deficating\nD. Being with those who backbite others\n",
        "2. Which of the following is a PILLAR in prayer/salah?\nA. Takbiratul "
        "Ihram\nB. Reciting a surah after Al-Fatiha\nC. Reciting Dua "
        "Al-Istiftah\nD. Making sujud long\n",
        "3. After imam finishes reciting Surah Al-Fatiha in a loud rak'ah, "
        "what "
        "followers "
        "behind the imam should do?\nA. Say Ameen\nB. Stay silent\nC. Say "
        "Subhanallah\nD. Look around\n",
        "4. What does \"Bismillah\" mean?\nA. In the name of Allah\nB. May "
        "Allah "
        "be pleased with him\nC. Peace and blessings of Allah be upon "
        "him\nD. Praise be to Allah\n",
        "5. Which of the following is NOT among the pillars of Islam?\nA. "
        "Spreading "
        "the greeting of peace(Salaam)\nB. Establishing prayer\nC. Fasting the "
        "month of Ramadan\nD. Testimony of faith(The Shahadah)\n"};

    char answers[5] = {'D', 'A', 'A', 'A', 'A'};
    QuizGenerator(easy_questions, answers);
  } else if (choice_arg == 2) {
    std::string medium_questions[5] = {
        "1. Which type of water can generally be used for wudu?"
        "\nA.Pure rainwater.\nB.Fruit juice.\nC.Vinegar.\nD.Rose oil.\n",
        "2. Which of the following does not invalidate the fast?\n"
        "A.Eating intentionally.\nB.Drinking intentionally.\nC.Forgetfully "
        "eating.\nD"
        ".Intentional vomiting.\n",
        "3. Which situation allows tayammum?\nA. There is no water available, "
        "or using it would cause harm\nB. The water is cold.\nC. Wudu takes "
        "too long.\nD. Someone simply prefers tayammum.\n",
        "4. Where is the place of the intention for acts of worship?\nA. On "
        "the tongue only.\nB. In the heart.\nC. In writing.\nD. It is not "
        "required.\n",
        "5. If someone misses Jumu'ah without a valid excuse, what should they "
        "pray instead after Jumu'ah time has passed?\nA. Two rak'ahs.\nB. Four "
        "rak'ahs of Dhuhr.\nC. No prayer.\nD. One rak'ah.\n"};

    char answers[5] = {'A', 'C', 'A', 'B', 'B'};
    QuizGenerator(medium_questions, answers);
  } else {
    std::string hard_questions[5] = {
        "1. After performing tayammum due to lack of water, a person finds "
        "water before beginning the prayer. What should they do?\nA. Pray with "
        "tayammum.\nB. Perform wudu with the water.\nC. Delay the prayer until "
        "the next prayer time.\nD. Repeat tayammum.\n",
        "2. A person intentionally omits one of the pillars (arkan) of the "
        "prayer without a valid excuse. Which statement is correct?\nA. Sujud "
        "as-sahw fixes the prayer.\nB. The prayer is invalid.\nC.  Giving "
        "charity makes up for it.\nD. It only reduces the reward.\n",
        "3. Which principle explains why a prayer offered before its "
        "prescribed time is generally invalid?\nA. Prayer times are among the "
        "conditions for the validity of the prayer.\nB. Because the prayer is "
        "disliked.\nC. Because it lacks reward.\nD. Because only Friday prayer "
        "has fixed times.\n",
        "4. Which of the following is not one of the five legal rulings "
        "(al-ahkam al-khamsah)?\nA. Wajib (obligatory)\nB. Mandub "
        "(recommended)\nC. Mubah (permissible)\nD. Mutawatir (consistent)\n",
        "5. Which fiqh maxim is illustrated by the ruling that one who is "
        "certain "
        "of wudu is not affected by mere doubt?\nA. Hardship brings ease.\nB. "
        "Harm must be removed.\nC. Certainty is not removed by doubt.\nD. "
        "Customs are authoritative.\n"};

    char answers[5] = {'B', 'B', 'A', 'D', 'C'};
    QuizGenerator(hard_questions, answers);
  }
}
