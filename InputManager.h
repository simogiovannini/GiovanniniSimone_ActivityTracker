//
// Created by simone on 10/04/20.
//

#ifndef ACTIVITYTRACKER_INPUTMANAGER_H
#define ACTIVITYTRACKER_INPUTMANAGER_H


class InputManager {
public:
    static int getNumber(int min, int max);

    static std::string getString();

    static std::string getDate();

private:
    static bool checkFormatDate(std::string date);
};


#endif //ACTIVITYTRACKER_INPUTMANAGER_H
