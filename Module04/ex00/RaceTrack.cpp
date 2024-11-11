#include "RaceTrack.hpp"

RaceTrack::RaceTrack() : size(0), finishLine(0) {}


RaceTrack::RaceTrack(int size, int finishLine) : size(size), finishLine(finishLine) {}


RaceTrack::RaceTrack(const RaceTrack& other) : size(other.size), finishLine(other.finishLine) {}


RaceTrack& RaceTrack::operator=(const RaceTrack& other) {
    if (this != &other) {
        size = other.size;
        finishLine = other.finishLine;
    }
    return *this;
}

RaceTrack::~RaceTrack() {}


int RaceTrack::getSize() const 
{
    return size;
}

int RaceTrack::getFinishLine() const 
{
    return finishLine;
}


void RaceTrack::setSize(int newSize) 
{
    size = newSize;
}

void RaceTrack::setFinishLine(int newFinishLine) 
{
    finishLine = newFinishLine;
}
