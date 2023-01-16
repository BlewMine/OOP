//
// Created by Julian Lalicon on 2023-01-15.
//

#ifndef WS01_FILE_H
#define WS01_FILE_H
namespace sdds {
    bool openFile(const char filename[]);

    void closeFile();

    bool readTitle(char title[]);

    bool readYear(int *year);

    bool readMovieRating(char rating[]);

    bool readDuration(int *duration);

    bool readGenres(char genres[][11]);

    bool readConsumerRating(float *rating);
}

#endif //WS01_FILE_H
