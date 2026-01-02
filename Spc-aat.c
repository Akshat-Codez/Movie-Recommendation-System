#include <stdio.h>
#include <string.h>

int main()
{
    char industry[20], genre[20];

    printf("===== Movie Recommendation System =====\n\n");

    printf("Choose Industry:\n");
    printf("Bollywood\nHollywood\nOther\n\n");
    printf("Enter industry: ");
    scanf("%s", industry);

    printf("\nAvailable Genres:\n");
    printf("Action, Comedy, Romance, Thriller, Drama\n");
    printf("Enter genre: ");
    scanf("%s", genre);

    printf("\nRecommended Movies:\n\n");


    if (strcmp(industry, "Bollywood") == 0)
    {
        if (strcmp(genre, "Action") == 0)
        {
            printf("1. War (IMDb: 6.5)\n");
            printf("2. Dhoom (IMDb: 6.6)\n");
            printf("3. Singham (IMDb: 6.8)\n");
            printf("4. Tiger Zinda Hai (IMDb: 5.9)\n");
            printf("5. Krrish (IMDb: 6.4)\n");
        }
        else if (strcmp(genre, "Comedy") == 0)
        {
            printf("1. Hera Pheri (IMDb: 8.2)\n");
            printf("2. No Problem (IMDb: 8.4)\n");
            printf("3. Golmaal (IMDb: 7.4)\n");
            printf("4. Dhamaal (IMDb: 7.5)\n");
            printf("5. Andaz Apna Apna (IMDb: 8.1)\n");
        }
        else if (strcmp(genre, "Romance") == 0)
        {
            printf("1. DDLJ (IMDb: 8.0)\n");
            printf("2. Kabir Singh (IMDb: 7.0)\n");
            printf("3. Aashiqui 2 (IMDb: 7.0)\n");
            printf("4. Jab We Met (IMDb: 7.9)\n");
            printf("5. Veer-Zaara (IMDb: 7.8)\n");
        }
        else if (strcmp(genre, "Thriller") == 0)
        {
            printf("1. Drishyam (IMDb: 8.2)\n");
            printf("2. Andhadhun (IMDb: 8.2)\n");
            printf("3. Talaash (IMDb: 7.2)\n");
            printf("4. Kahaani (IMDb: 8.1)\n");
            printf("5. Badla (IMDb: 7.8)\n");
        }
        else if (strcmp(genre, "Drama") == 0)
        {
            printf("1. Taare Zameen Par (IMDb: 8.3)\n");
            printf("2. Article 15 (IMDb: 8.1)\n");
            printf("3. Pink (IMDb: 8.1)\n");
            printf("4. Piku (IMDb: 7.6)\n");
            printf("5. Swades (IMDb: 8.2)\n");
        }
        else
            printf("Genre not available.\n");
    }





    else if (strcmp(industry, "Hollywood") == 0)
    {
        if (strcmp(genre, "Action") == 0)
        {
            printf("1. Avengers: Endgame (IMDb: 8.4)\n");
            printf("2. The Dark Knight (IMDb: 9.0)\n");
            printf("3. Inception (IMDb: 8.8)\n");
            printf("4. Mad Max: Fury Road (IMDb: 8.1)\n");
            printf("5. Gladiator (IMDb: 8.5)\n");
        }
        else if (strcmp(genre, "Comedy") == 0)
        {
            printf("1. The Hangover (IMDb: 7.7)\n");
            printf("2. Superbad (IMDb: 7.6)\n");
            printf("3. Home Alone (IMDb: 7.7)\n");
            printf("4. Deadpool (IMDb: 8.0)\n");
            printf("5. Free Guy (IMDb: 7.1)\n");
        }
        else if (strcmp(genre, "Romance") == 0)
        {
            printf("1. Titanic (IMDb: 7.9)\n");
            printf("2. La La Land (IMDb: 8.0)\n");
            printf("3. The Notebook (IMDb: 7.8)\n");
            printf("4. Pride & Prejudice (IMDb: 7.8)\n");
            printf("5. Before Sunrise (IMDb: 8.1)\n");
        }
        else if (strcmp(genre, "Thriller") == 0)
        {
            printf("1. Se7en (IMDb: 8.6)\n");
            printf("2. Gone Girl (IMDb: 8.1)\n");
            printf("3. Shutter Island (IMDb: 8.2)\n");
            printf("4. Prisoners (IMDb: 8.1)\n");
            printf("5. Zodiac (IMDb: 7.7)\n");
        }
        else if (strcmp(genre, "Drama") == 0)
        {
            printf("1. Forrest Gump (IMDb: 8.8)\n");
            printf("2. Shawshank Redemption (IMDb: 9.3)\n");
            printf("3. Fight Club (IMDb: 8.8)\n");
            printf("4. The Green Mile (IMDb: 8.6)\n");
            printf("5. Joker (IMDb: 8.4)\n");
        }
        else
            printf("Genre not available.\n");
    }


    else if (strcmp(industry, "Other") == 0)
    {
        printf("1. Parasite (Korea) – IMDb: 8.5\n");
        printf("2. Your Name (Japan) – IMDb: 8.4\n");
        printf("3. The Intouchables (France) – IMDb: 8.5\n");
        printf("4. Spirited Away (Japan) – IMDb: 8.6\n");
        printf("5. Oldboy (Korea) – IMDb: 8.4\n");
    }

    else
    {
        printf("Industry not available.\n");
    }

    return 0;
}
