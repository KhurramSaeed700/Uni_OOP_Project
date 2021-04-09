//Hang Man Game

#include<iostream>
#include<vector>
#include<fstream>
#include<string>
#include<time.h>
using namespace std;

void printMessage(string message, bool printTop, bool printBottom) {
    if (printTop) {
        cout << "+--------------------------------+\n";
        cout << "|";
    }
    else {
        cout << "|";
    }
    bool front = true;
    for (int i = message.length(); i < 32; i++) {
        if (front) {
            message = " " + message;
        }
        else
        {
            message = message + " ";
        }
        front = !front;
    }
    cout << message.c_str();

    if (printBottom) {
        cout << "|" << endl;
        cout << "+--------------------------------+\n";
    }
    else {
        cout << "|" << endl;
    }

}

//hangman stages
void man0() {
    cout << "|                                |" << endl;
    cout << "|                                |" << endl;
    cout << "|                                |" << endl;
    cout << "|                                |" << endl;
    cout << "|                                |" << endl;
    cout << "|                                | " << endl;
    cout << "|                                |" << endl;
    cout << "|                                |" << endl;
    cout << "|                                | " << endl;
    cout << "|                                |" << endl;
    cout << "|                                |" << endl;
    cout << "|                                |" << endl;
    cout << "|                                |" << endl;
    cout << "|                                |" << endl;
    cout << "|                                |" << endl;
    cout << "|                                |" << endl;
    cout << "|                                |" << endl;
    cout << "|                                | " << endl;
}
void man1() {
    cout << "|                                |" << endl;
    cout << "|                                |" << endl;
    cout << "|                                |" << endl;
    cout << "|                                |" << endl;
    cout << "|                                |" << endl;
    cout << "|                      ____      | " << endl;
    cout << "|                     |    |     |" << endl;
    cout << "|                     |____|     |" << endl;
    cout << "|                                | " << endl;
    cout << "|                                |" << endl;
    cout << "|                                |" << endl;
    cout << "|                                |" << endl;
    cout << "|                                |" << endl;
    cout << "|                                |" << endl;
    cout << "|                                |" << endl;
    cout << "|                                |" << endl;
    cout << "|                                |" << endl;
    cout << "|                                | " << endl;
}
void man2() {
    cout << "|                                |" << endl;
    cout << "|                                |" << endl;
    cout << "|                                |" << endl;
    cout << "|                                |" << endl;
    cout << "|                                |" << endl;
    cout << "|                      ____      | " << endl;
    cout << "|                     |    |     |" << endl;
    cout << "|                     |____|     |" << endl;
    cout << "|                       ||       | " << endl;
    cout << "|                       ||       |" << endl;
    cout << "|                       ||       |" << endl;
    cout << "|                       ||       |" << endl;
    cout << "|                                |" << endl;
    cout << "|                                |" << endl;
    cout << "|                                |" << endl;
    cout << "|                                |" << endl;
    cout << "|                                |" << endl;
    cout << "|                                | " << endl;
}
void man3() {
    cout << "|                                |" << endl;
    cout << "|                                |" << endl;
    cout << "|                                |" << endl;
    cout << "|                                |" << endl;
    cout << "|                                |" << endl;
    cout << "|                      ____      | " << endl;
    cout << "|                     |    |     |" << endl;
    cout << "|                     |____|     |" << endl;
    cout << "|                       ||       | " << endl;
    cout << "|                      /||       |" << endl;
    cout << "|                     / ||       |" << endl;
    cout << "|                       ||       |" << endl;
    cout << "|                                |" << endl;
    cout << "|                                |" << endl;
    cout << "|                                |" << endl;
    cout << "|                                |" << endl;
    cout << "|                                |" << endl;
    cout << "|                                | " << endl;
}
void man4() {
    cout << "|                                |" << endl;
    cout << "|                                |" << endl;
    cout << "|                                |" << endl;
    cout << "|                                |" << endl;
    cout << "|                                |" << endl;
    cout << "|                      ____      | " << endl;
    cout << "|                     |    |     |" << endl;
    cout << "|                     |____|     |" << endl;
    cout << "|                       ||       | " << endl;
    cout << "|                      /||\\      |" << endl;
    cout << "|                     / || \\     |" << endl;
    cout << "|                       ||       |" << endl;
    cout << "|                                |" << endl;
    cout << "|                                |" << endl;
    cout << "|                                |" << endl;
    cout << "|                                |" << endl;
    cout << "|                                |" << endl;
    cout << "|                                | " << endl;
}
void man5() {
    cout << "|                                |" << endl;
    cout << "|                                |" << endl;
    cout << "|                                |" << endl;
    cout << "|                                |" << endl;
    cout << "|                                |" << endl;
    cout << "|                      ____      | " << endl;
    cout << "|                     |    |     |" << endl;
    cout << "|                     |____|     |" << endl;
    cout << "|                       ||       | " << endl;
    cout << "|                      /||\\      |" << endl;
    cout << "|                     / || \\     |" << endl;
    cout << "|                       ||       |" << endl;
    cout << "|                       /        |" << endl;
    cout << "|                      /         |" << endl;
    cout << "|                     /          |" << endl;
    cout << "|                                |" << endl;
    cout << "|                                |" << endl;
    cout << "|                                | " << endl;
}
void man6() {
    cout << "|                                |" << endl;
    cout << "|                                |" << endl;
    cout << "|                                |" << endl;
    cout << "|                                |" << endl;
    cout << "|                                |" << endl;
    cout << "|                      ____      | " << endl;
    cout << "|                     |    |     |" << endl;
    cout << "|                     |____|     |" << endl;
    cout << "|                       ||       | " << endl;
    cout << "|                      /||\\      |" << endl;
    cout << "|                     / || \\     |" << endl;
    cout << "|                       ||       |" << endl;
    cout << "|                       /\\       |" << endl;
    cout << "|                      /  \\      |" << endl;
    cout << "|                     /    \\     |" << endl;
    cout << "|                                |" << endl;
    cout << "|                                |" << endl;
    cout << "|                                | " << endl;
}
void man7() {
    cout << "|                                |" << endl;
    cout << "|                                |" << endl;
    cout << "|                                |" << endl;
    cout << "|                                |" << endl;
    cout << "|                                |" << endl;
    cout << "|                      ____      | " << endl;
    cout << "|                     |    |     |" << endl;
    cout << "|                     |____|     |" << endl;
    cout << "|                       ||       | " << endl;
    cout << "|                      /||\\      |" << endl;
    cout << "|                     / || \\     |" << endl;
    cout << "|                       ||       |" << endl;
    cout << "|                       /\\       |" << endl;
    cout << "|                      /  \\      |" << endl;
    cout << "|   __/ \\___          /    \\     |" << endl;
    cout << "|   |       |                    |" << endl;
    cout << "|   |_______|                    |" << endl;
    cout << "|                                | " << endl;
}
void man8() {
    cout << "|                                |" << endl;
    cout << "|      |                         |" << endl;
    cout << "|      ||                        |" << endl;
    cout << "|      ||                        |" << endl;
    cout << "|      ||                        |" << endl;
    cout << "|      ||              ____      | " << endl;
    cout << "|      ||             |    |     |" << endl;
    cout << "|      ||             |____|     |" << endl;
    cout << "|      ||               ||       | " << endl;
    cout << "|      ||              /||\\      |" << endl;
    cout << "|      ||             / || \\     |" << endl;
    cout << "|      ||               ||       |" << endl;
    cout << "|      ||               /\\       |" << endl;
    cout << "|      ||              /  \\      |" << endl;
    cout << "|   __/ \\___          /    \\     |" << endl;
    cout << "|   |       |                    |" << endl;
    cout << "|   |_______|                    |" << endl;
    cout << "|                                | " << endl;
}
void man9() {
    cout << "|       _________________        |" << endl;
    cout << "|      | _______________ |       |" << endl;
    cout << "|      ||                        |" << endl;
    cout << "|      ||                        |" << endl;
    cout << "|      ||                        |" << endl;
    cout << "|      ||              ____      | " << endl;
    cout << "|      ||             |    |     |" << endl;
    cout << "|      ||             |____|     |" << endl;
    cout << "|      ||               ||       | " << endl;
    cout << "|      ||              /||\\      |" << endl;
    cout << "|      ||             / || \\     |" << endl;
    cout << "|      ||               ||       |" << endl;
    cout << "|      ||               /\\       |" << endl;
    cout << "|      ||              /  \\      |" << endl;
    cout << "|   __/ \\___          /    \\     |" << endl;
    cout << "|   |       |                    |" << endl;
    cout << "|   |_______|                    |" << endl;
    cout << "|                                | " << endl;

}
void man10() {
    cout << "|       _________________        |" << endl;
    cout << "|      | _______________ |       |" << endl;
    cout << "|      ||               ||       |" << endl;
    cout << "|      ||               ||       |" << endl;
    cout << "|      ||               ||       |" << endl;
    cout << "|      ||              _||_      | " << endl;
    cout << "|      ||             |    |     |" << endl;
    cout << "|      ||             |____|     |" << endl;
    cout << "|      ||               ||       | " << endl;
    cout << "|      ||              /||\\      |" << endl;
    cout << "|      ||             / || \\     |" << endl;
    cout << "|      ||               ||       |" << endl;
    cout << "|      ||               /\\       |" << endl;
    cout << "|      ||              /  \\      |" << endl;
    cout << "|   __/ \\___          /    \\     |" << endl;
    cout << "|   |       |                    |" << endl;
    cout << "|   |_______|                    |" << endl;
    cout << "|                                | " << endl;

}


void drawHangman(int guessCount = 0) {
    if (guessCount == 1) {
        man1();
    }
    else if (guessCount == 2) {
        man2();
    }
    else if (guessCount == 3) {
        man3();
    }
    else if (guessCount == 4) {
        man4();
    }
    else if (guessCount == 5) {
        man5();
    }
    else if (guessCount == 6) {
        man6();
    }
    else if (guessCount == 7) {
        man7();
    }
    else if (guessCount == 8) {
        man8();
    }
    else if (guessCount == 9) {
        man9();
    }
    else if (guessCount == 10) {
        man10();
    }
    else {
        man0();
    }
}


void printLetters(string input, char from, char to) {

    string s;
    for (char i = from; i <= to; i++) {
        if (input.find(i) == string::npos) // if input string dose't contain letter then
        {
            s += i;
            s += " ";
        }
        else {
            s += "  ";

        }
    }
    printMessage(s,false,false);
}

void printAvalibleLetters(string input) {
    printMessage("Avalible Letters", true, true);
    printLetters(input, 'A', 'M');
    printLetters(input, 'N', 'Z');

}

bool printWordCheckWin(string word, string guessed) {
    bool won = true;
    string s;
    for (int i = 0; i < word.length(); i++) {
        if (guessed.find(word[i]) == string::npos) {
            won = false;
            s += "_ ";
        }
        else {
            s += word[i];
            s += " ";
        }
    }
    printMessage(s, false, true);
    return won;
}

string loadRandonWord(string path) {
    int lineCount = 0;
    string word;
    vector<string> v;
    ifstream reader(path);
    if (reader.is_open()) {
        while (std::getline(reader, word)) {
            v.push_back(word);
        }
        int randomLine = rand() % v.size();
        word = v.at(randomLine);
        reader.close();
    }
}

int main() {
    srand(time(0));
    string guesses = "KHURRAM";
    string wordToGuess;

    wordToGuess = loadRandonWord("words.txt");
    cout << "word: " << wordToGuess << endl;

    printMessage("HANG THIS MAN", true, true);
    drawHangman(10);
    printAvalibleLetters(guesses);

    printMessage("Guess Word",true,true);
    printWordCheckWin("ALEXAS", guesses);

    getchar();
    return 0;
}


