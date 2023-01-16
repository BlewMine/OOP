//
// Created by Julian Lalicon on 2023-01-15.
//

#ifndef WS01_MOVIE_H
#define WS01_MOVIE_H

namespace sdds {

    struct Movie {
        char m_title[128];
        int m_year;
        char m_rating[6];
        int m_duration;
        char m_genres[10][11];
        float m_consumerRating;
    };

    bool loadMovies();

    bool hasGenre(const Movie *mvp, const char genre[]);

    void displayMovie(const Movie *mvp);

    void displayMoviesWithGenre(const char genre[]);
}

#endif //WS01_MOVIE_H
