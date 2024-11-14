#pragma once

class RaceTrack 
{
    private:
        int size;
        int finishLine;

    public:
        RaceTrack();
        RaceTrack(int size, int finishLine);
        RaceTrack(const RaceTrack& other);
        RaceTrack& operator=(const RaceTrack& other);
        ~RaceTrack();

        // Getter e Setter
        int getSize() const;
        int getFinishLine() const;
        void setSize(int newSize);
        void setFinishLine(int newFinishLine);
};