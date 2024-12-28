#ifndef ADVENTURECAMPING_H
#define ADVENTURECAMPING_H

#include <string>
#include <list>

class Sim {
public:
    // Costruttore
    Sim(std::string m = "happy", int e = 100)
        : mood(m), energy(e) {}

    // Getter e Setter per mood
    std::string getMood() const { return mood; }
    void setMood(const std::string& newMood) { mood = newMood; }

    // Getter e Setter per energy
    int getEnergy() const { return energy; }
    void setEnergy(int newEnergy) { energy = newEnergy; }

    void interactWithAnimal();
    void tellStory();
    void stargaze();

private:
    std::string mood;
    int energy;
    std::list<std::string> skills;
};

class WildAnimal {
public:
    void interactWithSim();
    void escape();

private:
    std::string type;   // Bear, Wolf, etc.
    std::string status; // Aggressive, Passive, etc.
};

class Item {
public:
    virtual void use() = 0;
protected:
    std::string name;
    std::string usage;
};

class Telescope : public Item {
public:
    void observe();
};

class Campstove : public Item {
public:
    void cook();
};

class Rockwall : public Item {
public:
    void climb();
};

class RandomEvent {
public:
    void triggerEvent();

private:
    std::string eventType;  // Rain, Animal encounter, etc.
    std::string description; // What happened
};

class Hike {
public:
    void startHike();
    void generateRandomEvent();

private:
    int duration;
    std::string difficulty;
    std::list<RandomEvent> events;
};

#endif
