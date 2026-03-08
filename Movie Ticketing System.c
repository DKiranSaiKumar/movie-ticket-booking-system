#include <stdio.h>

int main() 
{
    int city, theatre, movies, timing, people, ai;
    char name[50];
    for (ai = 1; ai<= 3; ++ai)
    {
    
    printf("\n***********************");
    printf("\n Welcome to MOVIETICKS\nEnter your name: ");
    scanf("%s", name); 
    
    printf("\n Welcome %s", name);
    
    printf("\nChoose a region:\n 1. Hyderabad\n 2. Mumbai\n 3. Delhi-NCR\n 4. Bengaluru\n 5. Ahmedabad\n 6. Chandigarh\n 7. Chennai\n 8. Kochi");
    printf("\nRegion: ");
    scanf("%d", &city);  
    
    
    switch(city) 
    {
        case 1: 
            printf("\nYour location is updated to Hyderabad");
            printf("\nSelect the available theatres:\n1. AAA Cinemas, Ameerpet\n2. AMB Cinemas, Gachibowli\n3. Arjun 70mm, Kukatpally\n4. Cinepolis CCPL Mall, Malkajgiri\n5. MovieMax: AMR, ECIL");
            printf("\nEnter the number for your selected theatre: ");
            scanf("%d", &theatre);  
            switch(theatre)
            {
                case 1: 
                    printf("Entering into AAA Cinemas, Ameerpet");
                    printf("\n Available and Recommended Movies:\n1. Kalki 2898 AD\n2. Salaar: Part-1 Ceasefire\n3. Amaran\n4. KA\n5. Lucky Bhaskar\n6. RRR\n7. KGF Chapter-2\n8. Vettaiyan : The Hunter\n");
                    scanf("\n %d", &movies);
                    switch(movies)
                    {
                        case 1: printf("\nYou wished to watch Kalki 2898 AD\n"); 
                                printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Kalki 2898 AD \n No.of Tickets: %d\n Price per ticket: 395 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*395);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Kalki 2898 AD \n No.of Tickets: %d\n Price per ticket: 395 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*395);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Kalki 2898 AD \n No.of Tickets: %d\n Price per ticket: 395 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*395);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Kalki 2898 AD \n No.of Tickets: %d\n Price per ticket: 395 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*395);
                                            break; 
                                }
                        break;
                        case 2: printf("\nYou wished to watch Salaar: Part-1 Ceasefire\n"); 
                                printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Salaar: Part-1 Ceasefire \n No.of Tickets: %d\n Price per ticket: 195 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*195);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Salaar: Part-1 Ceasefire \n No.of Tickets: %d\n Price per ticket: 195 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*195);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Salaar: Part-1 Ceasefire \n No.of Tickets: %d\n Price per ticket: 195 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*195);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Salaar: Part-1 Ceasefire \n No.of Tickets: %d\n Price per ticket: 195 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*195);
                                            break; 
                                }
                        break;
                        case 3: printf("\nYou wished to watch Amaran\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Amaran \n No.of Tickets: %d\n Price per ticket: 215 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*215);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Amaran \n No.of Tickets: %d\n Price per ticket: 215 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*215);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Amaran \n No.of Tickets: %d\n Price per ticket: 215 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*215);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Amaran \n No.of Tickets: %d\n Price per ticket: 215 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*215);
                                            break; 
                                }
                        break;
                        case 4: printf("\nYou wished to watch KA\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: KA \n No.of Tickets: %d\n Price per ticket: 215 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*215);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: KA \n No.of Tickets: %d\n Price per ticket: 215 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*215);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: KA \n No.of Tickets: %d\n Price per ticket: 215 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*215);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: KA \n No.of Tickets: %d\n Price per ticket: 215 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*215);
                                            break; 
                                }
                        break;
                        case 5: printf("\nYou wished to watch Lucky Bhaskar\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Lucky Bhaskar \n No.of Tickets: %d\n Price per ticket: 215 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*215);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Lucky Bhaskar \n No.of Tickets: %d\n Price per ticket: 215 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*215);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Lucky Bhaskar \n No.of Tickets: %d\n Price per ticket: 215 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*215);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Lucky Bhaskar \n No.of Tickets: %d\n Price per ticket: 215 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*215);
                                            break; 
                                }
                        break;
                        case 6: printf("\nYou wished to watch RRR\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: RRR \n No.of Tickets: %d\n Price per ticket: 215 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*215);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: RRR \n No.of Tickets: %d\n Price per ticket: 215 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*215);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: RRR \n No.of Tickets: %d\n Price per ticket: 215 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*215);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: RRR \n No.of Tickets: %d\n Price per ticket: 215 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*215);
                                            break; 
                                }
                        break;
                        case 7: printf("\nYou wished to watch KGF Chapter-2\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: KGF Chapter-2 \n No.of Tickets: %d\n Price per ticket: 215 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*215);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: KGF Chapter-2 \n No.of Tickets: %d\n Price per ticket: 215 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*215);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: KGF Chapter-2 \n No.of Tickets: %d\n Price per ticket: 215 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*215);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: KGF Chapter-2 \n No.of Tickets: %d\n Price per ticket: 215 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*215);
                                            break; 
                                }
                        break;
                        case 8: printf("\nYou wished to watch Vettaiyan : The Hunter\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Vettaiyan : The Hunter \n No.of Tickets: %d\n Price per ticket: 215 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*215);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Vettaiyan : The Hunter \n No.of Tickets: %d\n Price per ticket: 215 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*215);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Vettaiyan : The Hunter \n No.of Tickets: %d\n Price per ticket: 215 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*215);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Vettaiyan : The Hunter \n No.of Tickets: %d\n Price per ticket: 215 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*215);
                                            break; 
                                }
                        break;
                        default: printf("\nInvalid movie selection.\n"); break;
                    }
                    break;
                    
                case 2: 
                    printf("Entering into AMB Cinemas, Gachibowli");
                    printf("\n Available and Recommended Movies:\n1. Kalki 2898 AD\n2. Salaar: Part-1 Ceasefire\n3. Amaran\n4. KA\n5. Lucky Bhaskar");
                    scanf("\n %d", &movies);
                    switch(movies)
                    {
                        case 1: printf("\nYou wished to watch Kalki 2898 AD\n"); 
                                printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Kalki 2898 AD \n No.of Tickets: %d\n Price per ticket: 395 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*395);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Kalki 2898 AD \n No.of Tickets: %d\n Price per ticket: 395 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*395);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Kalki 2898 AD \n No.of Tickets: %d\n Price per ticket: 395 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*395);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Kalki 2898 AD \n No.of Tickets: %d\n Price per ticket: 395 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*395);
                                            break; 
                                }
                        break;
                        case 2: printf("\nYou wished to watch Salaar: Part-1 Ceasefire\n"); 
                                printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Salaar: Part-1 Ceasefire \n No.of Tickets: %d\n Price per ticket: 195 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*195);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Salaar: Part-1 Ceasefire \n No.of Tickets: %d\n Price per ticket: 195 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*195);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Salaar: Part-1 Ceasefire \n No.of Tickets: %d\n Price per ticket: 195 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*195);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Salaar: Part-1 Ceasefire \n No.of Tickets: %d\n Price per ticket: 195 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*195);
                                            break; 
                                }
                        break;
                        case 3: printf("\nYou wished to watch Amaran\n"); 
                                printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Amaran \n No.of Tickets: %d\n Price per ticket: 215 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*215);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Amaran \n No.of Tickets: %d\n Price per ticket: 215 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*215);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Amaran \n No.of Tickets: %d\n Price per ticket: 215 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*215);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Amaran \n No.of Tickets: %d\n Price per ticket: 215 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*215);
                                            break; 
                                }
                        break;
                        case 4: printf("\nYou wished to watch KA\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: KA \n No.of Tickets: %d\n Price per ticket: 215 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*215);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: KA \n No.of Tickets: %d\n Price per ticket: 215 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*215);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: KA \n No.of Tickets: %d\n Price per ticket: 215 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*215);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: KA \n No.of Tickets: %d\n Price per ticket: 215 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*215);
                                            break; 
                                }
                        break;
                        case 5: printf("\nYou wished to watch Lucky Bhaskar\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Lucky Bhaskar \n No.of Tickets: %d\n Price per ticket: 215 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*215);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Lucky Bhaskar \n No.of Tickets: %d\n Price per ticket: 215 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*215);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Lucky Bhaskar \n No.of Tickets: %d\n Price per ticket: 215 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*215);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Lucky Bhaskar \n No.of Tickets: %d\n Price per ticket: 215 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*215);
                                            break; 
                                }
                        break;
                        default: printf("\nInvalid movie selection.\n"); break;
                    }
                    break;
                case 3: 
                    printf("Entering into Arjun 70mm, Kukatpally");
                    printf("\n Available and Recommended Movies:\n1. Kalki 2898 AD\n2. Salaar: Part-1 Ceasefire\n3. Amaran\n4. KA\n5. Lucky Bhaskar");
                    scanf("%d", &movies);
                    switch(movies)
                    {
                        case 1: printf("\nYou wished to watch Kalki 2898 AD\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Kalki 2898 AD \n No.of Tickets: %d\n Price per ticket: 395 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*395);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Kalki 2898 AD \n No.of Tickets: %d\n Price per ticket: 395 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*395);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Kalki 2898 AD \n No.of Tickets: %d\n Price per ticket: 395 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*395);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Kalki 2898 AD \n No.of Tickets: %d\n Price per ticket: 395 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*395);
                                            break; 
                                }
                        break;
                        case 2: printf("\nYou wished to watch Salaar: Part-1 Ceasefire\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Salaar: Part-1 Ceasefire \n No.of Tickets: %d\n Price per ticket: 195 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*195);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Salaar: Part-1 Ceasefire \n No.of Tickets: %d\n Price per ticket: 195 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*195);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Salaar: Part-1 Ceasefire \n No.of Tickets: %d\n Price per ticket: 195 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*195);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Salaar: Part-1 Ceasefire \n No.of Tickets: %d\n Price per ticket: 195 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*195);
                                            break; 
                                }
                        break;
                        case 3: printf("\nYou wished to watch Amaran\n"); 
                       printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Amaran \n No.of Tickets: %d\n Price per ticket: 215 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*215);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Amaran \n No.of Tickets: %d\n Price per ticket: 215 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*215);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Amaran \n No.of Tickets: %d\n Price per ticket: 215 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*215);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Amaran \n No.of Tickets: %d\n Price per ticket: 215 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*215);
                                            break; 
                                }
                        break;
                        case 4: printf("\nYou wished to watch KA\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: KA \n No.of Tickets: %d\n Price per ticket: 215 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*215);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: KA \n No.of Tickets: %d\n Price per ticket: 215 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*215);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: KA \n No.of Tickets: %d\n Price per ticket: 215 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*215);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: KA \n No.of Tickets: %d\n Price per ticket: 215 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*215);
                                            break; 
                                }
                        break;
                        case 5: printf("\nYou wished to watch Lucky Bhaskar\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Lucky Bhaskar \n No.of Tickets: %d\n Price per ticket: 215 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*215);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Lucky Bhaskar \n No.of Tickets: %d\n Price per ticket: 215 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*215);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Lucky Bhaskar \n No.of Tickets: %d\n Price per ticket: 215 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*215);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Lucky Bhaskar \n No.of Tickets: %d\n Price per ticket: 215 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*215);
                                            break; 
                                }
                        break;
                        default: printf("\nInvalid movie selection.\n"); break;
                    }
                    break;
                case 4: 
                    printf("Entering into Cinepolis CCPL Mall, Malkajgiri");
                    printf("\n Available and Recommended Movies:\n1. Kalki 2898 AD\n2. Salaar: Part-1 Ceasefire\n3. Amaran\n4. KA\n5. Lucky Bhaskar");
                    scanf("%d", &movies);
                    switch(movies)
                    {
                        case 1: printf("\nYou wished to watch Kalki 2898 AD\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Kalki 2898 AD \n No.of Tickets: %d\n Price per ticket: 395 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*395);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Kalki 2898 AD \n No.of Tickets: %d\n Price per ticket: 395 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*395);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Kalki 2898 AD \n No.of Tickets: %d\n Price per ticket: 395 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*395);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Kalki 2898 AD \n No.of Tickets: %d\n Price per ticket: 395 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*395);
                                            break; 
                                }
                        break;
                        case 2: printf("\nYou wished to watch Salaar: Part-1 Ceasefire\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Salaar: Part-1 Ceasefire \n No.of Tickets: %d\n Price per ticket: 195 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*195);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Salaar: Part-1 Ceasefire \n No.of Tickets: %d\n Price per ticket: 195 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*195);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Salaar: Part-1 Ceasefire \n No.of Tickets: %d\n Price per ticket: 195 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*195);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Salaar: Part-1 Ceasefire \n No.of Tickets: %d\n Price per ticket: 195 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*195);
                                            break; 
                                }
                        break;
                        case 3: printf("\nYou wished to watch Amaran\n"); 
                       printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Amaran \n No.of Tickets: %d\n Price per ticket: 215 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*215);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Amaran \n No.of Tickets: %d\n Price per ticket: 215 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*215);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Amaran \n No.of Tickets: %d\n Price per ticket: 215 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*215);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Amaran \n No.of Tickets: %d\n Price per ticket: 215 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*215);
                                            break; 
                                }
                        break;
                        case 4: printf("\nYou wished to watch KA\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: KA \n No.of Tickets: %d\n Price per ticket: 215 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*215);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: KA \n No.of Tickets: %d\n Price per ticket: 215 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*215);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: KA \n No.of Tickets: %d\n Price per ticket: 215 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*215);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: KA \n No.of Tickets: %d\n Price per ticket: 215 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*215);
                                            break; 
                                }
                        break;
                        case 5: printf("\nYou wished to watch Lucky Bhaskar\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Lucky Bhaskar \n No.of Tickets: %d\n Price per ticket: 215 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*215);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Lucky Bhaskar \n No.of Tickets: %d\n Price per ticket: 215 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*215);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Lucky Bhaskar \n No.of Tickets: %d\n Price per ticket: 215 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*215);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Lucky Bhaskar \n No.of Tickets: %d\n Price per ticket: 215 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*215);
                                            break; 
                                }
                        break;
                        default: printf("\nInvalid movie selection.\n"); break;
                    }
                    break;
                case 5: 
                    printf("Entering into MovieMax: AMR, ECIL");
                    printf("\n Available and Recommended Movies:\n1. Kalki 2898 AD\n2. Salaar: Part-1 Ceasefire\n3. Amaran\n4. KA\n5. Lucky Bhaskar");
                    scanf("%d", &movies);
                    switch(movies)
                    {
                        case 1: printf("\nYou wished to watch Kalki 2898 AD\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Kalki 2898 AD \n No.of Tickets: %d\n Price per ticket: 395 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*395);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Kalki 2898 AD \n No.of Tickets: %d\n Price per ticket: 395 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*395);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Kalki 2898 AD \n No.of Tickets: %d\n Price per ticket: 395 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*395);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Kalki 2898 AD \n No.of Tickets: %d\n Price per ticket: 395 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*395);
                                            break; 
                                }
                        break;
                        case 2: printf("\nYou wished to watch Salaar: Part-1 Ceasefire\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Salaar: Part-1 Ceasefire \n No.of Tickets: %d\n Price per ticket: 195 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*195);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Salaar: Part-1 Ceasefire \n No.of Tickets: %d\n Price per ticket: 195 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*195);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Salaar: Part-1 Ceasefire \n No.of Tickets: %d\n Price per ticket: 195 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*195);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Salaar: Part-1 Ceasefire \n No.of Tickets: %d\n Price per ticket: 195 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*195);
                                            break; 
                                }
                        break;
                        case 3: printf("\nYou wished to watch Amaran\n"); 
                       printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Amaran \n No.of Tickets: %d\n Price per ticket: 215 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*215);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Amaran \n No.of Tickets: %d\n Price per ticket: 215 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*215);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Amaran \n No.of Tickets: %d\n Price per ticket: 215 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*215);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Amaran \n No.of Tickets: %d\n Price per ticket: 215 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*215);
                                            break; 
                                }
                        break;
                        case 4: printf("\nYou wished to watch KA\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: KA \n No.of Tickets: %d\n Price per ticket: 215 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*215);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: KA \n No.of Tickets: %d\n Price per ticket: 215 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*215);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: KA \n No.of Tickets: %d\n Price per ticket: 215 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*215);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: KA \n No.of Tickets: %d\n Price per ticket: 215 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*215);
                                            break; 
                                }
                        break;
                        case 5: printf("\nYou wished to watch Lucky Bhaskar\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Lucky Bhaskar \n No.of Tickets: %d\n Price per ticket: 215 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*215);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Lucky Bhaskar \n No.of Tickets: %d\n Price per ticket: 215 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*215);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Lucky Bhaskar \n No.of Tickets: %d\n Price per ticket: 215 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*215);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Lucky Bhaskar \n No.of Tickets: %d\n Price per ticket: 215 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*215);
                                            break; 
                                }
                        break;
                        default: printf("\nInvalid movie selection.\n"); break;
                    }
                    break;
                default: printf("\nInvalid theatre selection in Hyderabad.\n"); break;
            }
            break;

        case 2: 
            printf("\nYour location is updated to Mumbai");
            printf("\nSelect the available theatres:\n1. INOX, Andheri\n2. PVR Cinemas, Juhu\n3. Carnival Cinemas, Malad\n4. Cinepolis, Lower Parel\n5. Cineworld, Goregaon");
            printf("\nEnter the number for your selected theatre: ");
            scanf("%d", &theatre);  
            switch(theatre)
            {
                case 1:
                    printf("You are entering INOX, Andheri");
                    printf("\nAvailable and Recommended Movies:\n1. Tu Jhoothi Main Makkar (2023)\n2. Laal Singh Chaddha (2022)\n3. Shamshera (2022)\n4. Vikram Vedha (2022)\n5. Samrat Prithviraj (2022)");
                    scanf("%d", &movies);
                    switch(movies)
                    {
                        case 1: printf("\nYou wished to watch Tu Jhoothi Main Makkar (2023)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Tu Jhoothi Main Makkar\n No.of Tickets: %d\n Price per ticket: 205 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*205);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Tu Jhoothi Main Makkar \n No.of Tickets: %d\n Price per ticket: 205 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*205);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Tu Jhoothi Main Makkar \n No.of Tickets: %d\n Price per ticket: 205 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*205);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Tu Jhoothi Main Makkar \n No.of Tickets: %d\n Price per ticket: 205 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*205);
                                            break; 
                                }
                        break;
                        case 2: printf("\nYou wished to watch Laal Singh Chaddha (2022)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Laal Singh Chaddha\n No.of Tickets: %d\n Price per ticket: 250 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*250);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Laal Singh Chaddha \n No.of Tickets: %d\n Price per ticket: 250 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*250);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Laal Singh Chaddha \n No.of Tickets: %d\n Price per ticket: 250 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*250);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Laal Singh Chaddha \n No.of Tickets: %d\n Price per ticket: 250 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*250);
                                            break; 
                                }
                        break;
                        case 3: printf("\nYou wished to watch Shamshera (2022)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Shamshera \n No.of Tickets: %d\n Price per ticket: 250 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*250);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Shamshera \n No.of Tickets: %d\n Price per ticket: 250 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*250);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Shamshera \n No.of Tickets: %d\n Price per ticket: 250 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*250);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Shamshera \n No.of Tickets: %d\n Price per ticket: 250 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*250);
                                            break; 
                                }
                        break;
                        case 4: printf("\nYou wished to watch Vikram Vedha (2022)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Vikram Vedha\n No.of Tickets: %d\n Price per ticket: 310 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*310);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Vikram Vedha \n No.of Tickets: %d\n Price per ticket: 310 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*310);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Vikram Vedha \n No.of Tickets: %d\n Price per ticket: 310 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*310);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Vikram Vedha \n No.of Tickets: %d\n Price per ticket: 310 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*310);
                                            break; 
                                }
                        break;
                        case 5: printf("\nYou wished to watch Samrat Prithviraj (2022)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Samrat Prithviraj \n No.of Tickets: %d\n Price per ticket: 250 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*205);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Samrat Prithviraj \n No.of Tickets: %d\n Price per ticket: 250 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*250);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Samrat Prithviraj \n No.of Tickets: %d\n Price per ticket: 250 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*250);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Samrat Prithviraj \n No.of Tickets: %d\n Price per ticket: 250 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*250);
                                            break; 
                                }
                        break;
                        default: printf("\nInvalid movie selection.\n"); break;
                    }
                    break;
                case 2: 
                    printf("You are entering PVR Cinemas, Juhu");
                    printf("\nAvailable and Recommended Movies:\n1. Bawaal (2023)\n2. Teri Meri Kahani (2023)\n3. Gully Boy 2 (2023)\n4. Dhoom 4 (2024)\n5. Don 3 (2024)");
                    scanf("%d", &movies);
                    switch(movies)
                    {
                        case 1: printf("\nYou wished to watch Bawaal (2023)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Bawaal \n No.of Tickets: %d\n Price per ticket: 300 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*300);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Bawaal \n No.of Tickets: %d\n Price per ticket: 300 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*300);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Bawaal \n No.of Tickets: %d\n Price per ticket: 300 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*300);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Bawaal \n No.of Tickets: %d\n Price per ticket: 300 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*300);
                                            break; 
                                }
                        break;
                        case 2: printf("\nYou wished to watch Teri Meri Kahani (2023)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Teri Meri Kahani \n No.of Tickets: %d\n Price per ticket: 300 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*300);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Teri Meri Kahani \n No.of Tickets: %d\n Price per ticket: 300 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*300);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Teri Meri Kahani \n No.of Tickets: %d\n Price per ticket: 300 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*300);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Teri Meri Kahani \n No.of Tickets: %d\n Price per ticket: 300 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*300);
                                            break; 
                                }
                        break;
                        case 3: printf("\nYou wished to watch Gully Boy 2 (2023)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Gully Boy 2 \n No.of Tickets: %d\n Price per ticket: 300 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*300);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Gully Boy 2 \n No.of Tickets: %d\n Price per ticket: 300 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*300);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Gully Boy 2 \n No.of Tickets: %d\n Price per ticket: 300 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*300);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Gully Boy 2 \n No.of Tickets: %d\n Price per ticket: 300 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*300);
                                            break; 
                                }
                        break;
                        case 4: printf("\nYou wished to watch Dhoom 4 (2024)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Dhoom 4 \n No.of Tickets: %d\n Price per ticket: 300 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*300);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Dhoom 4 \n No.of Tickets: %d\n Price per ticket: 300 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*300);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Dhoom 4 \n No.of Tickets: %d\n Price per ticket: 300 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*300);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Dhoom 4 \n No.of Tickets: %d\n Price per ticket: 300 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*300);
                                            break; 
                                }
                        break;
                        case 5: printf("\nYou wished to watch Don 3 (2024)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Don 3 \n No.of Tickets: %d\n Price per ticket: 300 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*300);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Don 3 \n No.of Tickets: %d\n Price per ticket: 300 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*300);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Don 3 \n No.of Tickets: %d\n Price per ticket: 300 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*300);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Don 3 \n No.of Tickets: %d\n Price per ticket: 300 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*300);
                                            break; 
                                }
                        break;
                        default: printf("\nInvalid movie selection.\n"); break;
                    }
                    break;
                case 3: 
                    printf("You are entering Carnival Cinemas, Malad");
                    printf("\nAvailable and Recommended Movies:\n1. Animal (2023)\n2. Bhediya (2022)\n3. Bhool Bhulaiyaa 2 (2022)\n4. Doctor G (2022)\n5. Atrangi Re (2021)");
                    scanf("%d", &movies);
                    switch(movies)
                    {
                        case 1: printf("\nYou wished to watch Animal (2023)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Animal \n No.of Tickets: %d\n Price per ticket: 320 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*320);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Animal \n No.of Tickets: %d\n Price per ticket: 320 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*320);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Animal \n No.of Tickets: %d\n Price per ticket: 320 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*320);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Animal \n No.of Tickets: %d\n Price per ticket: 320 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*320);
                                            break; 
                                }
                        break;
                        case 2: printf("\nYou wished to watch Bhediya (2022)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Bhediya \n No.of Tickets: %d\n Price per ticket: 320 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*320);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Bhediya \n No.of Tickets: %d\n Price per ticket: 320 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*320);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Bhediya \n No.of Tickets: %d\n Price per ticket: 320 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*320);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Bhediya \n No.of Tickets: %d\n Price per ticket: 320 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*320);
                                            break; 
                                }
                        break;
                        case 3: printf("\nYou wished to watch Bhool Bhulaiyaa 2 (2022)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Bhool Bhulaiyaa 2\n No.of Tickets: %d\n Price per ticket: 325 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*325);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Bhool Bhulaiyaa 2 \n No.of Tickets: %d\n Price per ticket: 325 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*325);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Bhool Bhulaiyaa 2 \n No.of Tickets: %d\n Price per ticket: 325 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*325);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Bhool Bhulaiyaa 2 \n No.of Tickets: %d\n Price per ticket: 325 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*325);
                                            break; 
                                }
                        break;
                        case 4: printf("\nYou wished to watch Doctor G (2022)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Doctor G \n No.of Tickets: %d\n Price per ticket: 310 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*310);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Doctor G \n No.of Tickets: %d\n Price per ticket: 310 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*310);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Doctor G \n No.of Tickets: %d\n Price per ticket: 310 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*310);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Doctor G \n No.of Tickets: %d\n Price per ticket: 310 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*310);
                                            break; 
                                }
                        break;
                        case 5: printf("\nYou wished to watch Atrangi Re (2021)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Atrangi Re\n No.of Tickets: %d\n Price per ticket: 320 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*320);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Atrangi Re \n No.of Tickets: %d\n Price per ticket: 320 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*320);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Atrangi Re \n No.of Tickets: %d\n Price per ticket: 320 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*320);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Atrangi Re \n No.of Tickets: %d\n Price per ticket: 320 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*320);
                                            break; 
                                }
                        break;
                        default: printf("\nInvalid movie selection.\n"); break;
                    }
                    break;
                case 4: 
                    printf("You are entering Cinepolis, Lower Parel");
                    printf("\nAvailable and Recommended Movies:\n1. Gangubai Kathiawadi (2022)\n2. Kabir Singh (2022)\n3. Bajirao Mastani (2022)\n4. Dangal (2016)\n5. Badhaai Do (2022)");
                    scanf("%d", &movies);
                    switch(movies)
                    {
                        case 1: printf("\nYou wished to watch Gangubai Kathiawadi (2022)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Gangubai Kathiawadi \n No.of Tickets: %d\n Price per ticket: 270 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*270);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Gangubai Kathiawadi \n No.of Tickets: %d\n Price per ticket: 270 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*270);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Gangubai Kathiawadi \n No.of Tickets: %d\n Price per ticket: 270 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*270);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Gangubai Kathiawadi \n No.of Tickets: %d\n Price per ticket: 270 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*270);
                                            break; 
                                }
                        break;
                        case 2: printf("\nYou wished to watch Kabir Singh (2022)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Kabir Singh \n No.of Tickets: %d\n Price per ticket: 320 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*320);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Kabir Singh \n No.of Tickets: %d\n Price per ticket: 320 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*320);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Kabir Singh \n No.of Tickets: %d\n Price per ticket: 320 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*320);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Kabir Singh \n No.of Tickets: %d\n Price per ticket: 320 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*320);
                                            break; 
                                }
                        break;
                        case 3: printf("\nYou wished to watch Bajirao Mastani (2022)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Bajirao Mastani \n No.of Tickets: %d\n Price per ticket: 325 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*325);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Bajirao Mastani \n No.of Tickets: %d\n Price per ticket: 325 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*325);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Bajirao Mastani \n No.of Tickets: %d\n Price per ticket: 325 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*325);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Bajirao Mastani \n No.of Tickets: %d\n Price per ticket: 325 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*325);
                                            break; 
                                }
                        break;
                        case 4: printf("\nYou wished to watch Dangal (2016)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Dangal \n No.of Tickets: %d\n Price per ticket: 320 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*320);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Dangal \n No.of Tickets: %d\n Price per ticket: 320 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*320);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Dangal \n No.of Tickets: %d\n Price per ticket: 320 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*320);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Dangal \n No.of Tickets: %d\n Price per ticket: 320 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*320);
                                            break; 
                                }
                        break;
                        case 5: printf("\nYou wished to watch Badhaai Do (2022)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Badhaai Do \n No.of Tickets: %d\n Price per ticket: 320 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*320);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Badhaai Do \n No.of Tickets: %d\n Price per ticket: 320 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*320);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Badhaai Do \n No.of Tickets: %d\n Price per ticket: 320 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*320);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Badhaai Do \n No.of Tickets: %d\n Price per ticket: 320 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*320);
                                            break; 
                                }
                        break;
                        default: printf("\nInvalid movie selection.\n"); break;
                    }
                    break;
                case 5: 
                    printf("You are entering Cineworld, Goregaon");
                    printf("\nAvailable and Recommended Movies:\n1. Koi Mil Gaya (2023)\n2. Lagaan (2022)\n3. Dil Chahta Hai (2023)\n4. Zindagi Na Milegi Dobara (2022)\n5. Gully Boy (2022)");
                    scanf("%d", &movies);
                    switch(movies)
                    {
                        case 1: printf("\nYou wished to watch Koi Mil Gaya (2023)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Koi Mil Gaya \n No.of Tickets: %d\n Price per ticket: 320 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*320);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Koi Mil Gaya \n No.of Tickets: %d\n Price per ticket: 320 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*320);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Koi Mil Gaya \n No.of Tickets: %d\n Price per ticket: 320 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*320);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Koi Mil Gaya \n No.of Tickets: %d\n Price per ticket: 320 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*320);
                                            break; 
                                }
                        break;
                        case 2: printf("\nYou wished to watch Lagaan (2022)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Lagaan \n No.of Tickets: %d\n Price per ticket: 320 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*320);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Lagaan \n No.of Tickets: %d\n Price per ticket: 320 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*320);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Lagaan \n No.of Tickets: %d\n Price per ticket: 320 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*320);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Lagaan \n No.of Tickets: %d\n Price per ticket: 320 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*320);
                                            break; 
                                }
                        break;
                        case 3: printf("\nYou wished to watch Dil Chahta Hai (2023)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Dil Chahta Hai \n No.of Tickets: %d\n Price per ticket: 320 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*320);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Dil Chahta Hai \n No.of Tickets: %d\n Price per ticket: 320 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*320);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Dil Chahta Hai \n No.of Tickets: %d\n Price per ticket: 320 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*320);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Dil Chahta Hai \n No.of Tickets: %d\n Price per ticket: 320 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*320);
                                            break; 
                                }
                        break;
                        case 4: printf("\nYou wished to watch Zindagi Na Milegi Dobara (2022)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Zindagi Na Milegi Dobara  \n No.of Tickets: %d\n Price per ticket: 320 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*320);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Zindagi Na Milegi Dobara  \n No.of Tickets: %d\n Price per ticket: 320 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*320);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Zindagi Na Milegi Dobara  \n No.of Tickets: %d\n Price per ticket: 320 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*320);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Zindagi Na Milegi Dobara  \n No.of Tickets: %d\n Price per ticket: 320 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*320);
                                            break; 
                                }
                        break;
                        case 5: printf("\nYou wished to watch Gully Boy (2022)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Gully Boy \n No.of Tickets: %d\n Price per ticket: 320 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*320);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Gully Boy \n No.of Tickets: %d\n Price per ticket: 320 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*320);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Gully Boy \n No.of Tickets: %d\n Price per ticket: 320 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*320);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Gully Boy \n No.of Tickets: %d\n Price per ticket: 320 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*320);
                                            break; 
                                }
                        break;
                        default: printf("\nInvalid movie selection.\n"); break;
                    }
                    break;
                default: printf("\nInvalid theatre selection in Mumbai.\n"); break;
            }
            break;

        case 3: 
            printf("Your location is updated to Delhi-NCR");
            printf("\nSelect the available theatres:\n1. PVR Cinemas, Connaught Place\n2. INOX, Saket\n3. Ambience Mall, Gurugram\n4. Wave Cinemas, Noida\n5. DT Cinemas, Rohini");
            printf("\nEnter the number for your selected theatre: ");
            scanf("%d", &theatre);  
            
            switch(theatre)
            {
                case 1: 
                    printf("You are entering PVR Cinemas, Connaught Place");
                    printf("\nAvailable and Recommended Movies:\n1. Tu Jhoothi Main Makkar (2023)\n2. Bawaal (2023)\n3. Gully Boy 2 (2023)\n4. Rocky Aur Rani Ki Prem Kahani (2023)\n5. Don 3 (2024)");
                    scanf("%d", &movies);
                    switch(movies)
                    {
                        case 1: printf("\nYou wished to watch Tu Jhoothi Main Makkar (2023)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Tu Jhoothi Main Makkar\n No.of Tickets: %d\n Price per ticket: 205 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*205);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Tu Jhoothi Main Makkar \n No.of Tickets: %d\n Price per ticket: 205 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*205);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Tu Jhoothi Main Makkar \n No.of Tickets: %d\n Price per ticket: 205 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*205);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Tu Jhoothi Main Makkar \n No.of Tickets: %d\n Price per ticket: 205 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*205);
                                            break; 
                                }
                        break;
                        case 2: printf("\nYou wished to watch Bawaal (2023)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Bawaal \n No.of Tickets: %d\n Price per ticket: 300 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*300);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Bawaal \n No.of Tickets: %d\n Price per ticket: 300 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*300);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Bawaal \n No.of Tickets: %d\n Price per ticket: 300 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*300);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Bawaal \n No.of Tickets: %d\n Price per ticket: 300 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*300);
                                            break; 
                                }
                        break;
                        case 3: printf("\nYou wished to watch Gully Boy 2 (2023)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Gully Boy 2 \n No.of Tickets: %d\n Price per ticket: 300 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*300);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Gully Boy 2 \n No.of Tickets: %d\n Price per ticket: 300 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*300);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Gully Boy 2 \n No.of Tickets: %d\n Price per ticket: 300 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*300);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Gully Boy 2 \n No.of Tickets: %d\n Price per ticket: 300 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*300);
                                            break; 
                                }
                        break;
                        case 4: printf("\nYou wished to watch Rocky Aur Rani Ki Prem Kahani (2023)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Rocky Aur Rani Ki Prem Kahani \n No.of Tickets: %d\n Price per ticket: 290 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*290);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Rocky Aur Rani Ki Prem Kahani \n No.of Tickets: %d\n Price per ticket: 290 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*290);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Rocky Aur Rani Ki Prem Kahani \n No.of Tickets: %d\n Price per ticket: 290 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*290);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Rocky Aur Rani Ki Prem Kahani \n No.of Tickets: %d\n Price per ticket: 290 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*290);
                                            break; 
                                }
                        break;
                        case 5: printf("\nYou wished to watch Don 3 (2024)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Don 3 \n No.of Tickets: %d\n Price per ticket: 300 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*300);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Don 3 \n No.of Tickets: %d\n Price per ticket: 300 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*300);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Don 3 \n No.of Tickets: %d\n Price per ticket: 300 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*300);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Don 3 \n No.of Tickets: %d\n Price per ticket: 300 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*300);
                                            break; 
                                }
                        break;
                        default: printf("\nInvalid movie selection.\n"); break;
                    }
                    break;
                case 2: 
                    printf("You are entering INOX, Saket");
                    printf("\nAvailable and Recommended Movies:\n1. Shamshera (2022)\n2. Bhool Bhulaiyaa 2 (2022)\n3. Laal Singh Chaddha (2022)\n4. Vikram Vedha (2022)\n5. Samrat Prithviraj (2022)");
                    scanf("%d", &movies);
                    switch(movies)
                    {
                        case 1: printf("\nYou wished to watch Shamshera (2022)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Shamshera \n No.of Tickets: %d\n Price per ticket: 250 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*250);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Shamshera \n No.of Tickets: %d\n Price per ticket: 250 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*250);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Shamshera \n No.of Tickets: %d\n Price per ticket: 250 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*250);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Shamshera \n No.of Tickets: %d\n Price per ticket: 250 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*250);
                                            break; 
                                }
                        break;
                        case 2: printf("\nYou wished to watch Bhool Bhulaiyaa 2 (2022)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Bhool Bhulaiyaa 2\n No.of Tickets: %d\n Price per ticket: 325 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*325);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Bhool Bhulaiyaa 2 \n No.of Tickets: %d\n Price per ticket: 325 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*325);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Bhool Bhulaiyaa 2 \n No.of Tickets: %d\n Price per ticket: 325 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*325);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Bhool Bhulaiyaa 2 \n No.of Tickets: %d\n Price per ticket: 325 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*325);
                                            break; 
                                }
                        break;
                        case 3: printf("\nYou wished to watch Laal Singh Chaddha (2022)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Laal Singh Chaddha\n No.of Tickets: %d\n Price per ticket: 250 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*250);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Laal Singh Chaddha \n No.of Tickets: %d\n Price per ticket: 250 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*250);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Laal Singh Chaddha \n No.of Tickets: %d\n Price per ticket: 250 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*250);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Laal Singh Chaddha \n No.of Tickets: %d\n Price per ticket: 250 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*250);
                                            break; 
                                }
                        break;
                        case 4: printf("\nYou wished to watch Vikram Vedha (2022)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Vikram Vedha\n No.of Tickets: %d\n Price per ticket: 310 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*310);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Vikram Vedha \n No.of Tickets: %d\n Price per ticket: 310 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*310);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Vikram Vedha \n No.of Tickets: %d\n Price per ticket: 310 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*310);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Vikram Vedha \n No.of Tickets: %d\n Price per ticket: 310 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*310);
                                            break; 
                                }
                        break;
                        case 5: printf("\nYou wished to watch Samrat Prithviraj (2022)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Samrat Prithviraj \n No.of Tickets: %d\n Price per ticket: 250 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*205);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Samrat Prithviraj \n No.of Tickets: %d\n Price per ticket: 250 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*250);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Samrat Prithviraj \n No.of Tickets: %d\n Price per ticket: 250 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*250);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Samrat Prithviraj \n No.of Tickets: %d\n Price per ticket: 250 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*250);
                                            break; 
                                }
                        break;
                        default: printf("\nInvalid movie selection.\n"); break;
                    }
                    break;
                case 3: 
                    printf("You are entering Ambience Mall, Gurugram");
                    printf("\nAvailable and Recommended Movies:\n1. Bhediya (2022)\n2. Doctor G (2022)\n3. Gangubai Kathiawadi (2022)\n4. Kabir Singh (2022)\n5. Atrangi Re (2021)");
                    scanf("%d", &movies);
                    switch(movies)  
                    {
                        case 1: printf("\nYou wished to watch Bhediya (2022)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Bhediya \n No.of Tickets: %d\n Price per ticket: 320 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*320);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Bhediya \n No.of Tickets: %d\n Price per ticket: 320 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*320);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Bhediya \n No.of Tickets: %d\n Price per ticket: 320 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*320);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Bhediya \n No.of Tickets: %d\n Price per ticket: 320 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*320);
                                            break; 
                                }
                        break;
                        case 2: printf("\nYou wished to watch Doctor G (2022)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Doctor G \n No.of Tickets: %d\n Price per ticket: 310 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*310);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Doctor G \n No.of Tickets: %d\n Price per ticket: 310 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*310);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Doctor G \n No.of Tickets: %d\n Price per ticket: 310 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*310);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Doctor G \n No.of Tickets: %d\n Price per ticket: 310 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*310);
                                            break; 
                                }
                        break;
                        case 3: printf("\nYou wished to watch Gangubai Kathiawadi (2022)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Gangubai Kathiawadi \n No.of Tickets: %d\n Price per ticket: 270 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*270);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Gangubai Kathiawadi \n No.of Tickets: %d\n Price per ticket: 270 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*270);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Gangubai Kathiawadi \n No.of Tickets: %d\n Price per ticket: 270 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*270);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Gangubai Kathiawadi \n No.of Tickets: %d\n Price per ticket: 270 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*270);
                                            break; 
                                }
                        break;
                        case 4: printf("\nYou wished to watch Kabir Singh (2022)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Kabir Singh \n No.of Tickets: %d\n Price per ticket: 320 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*320);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Kabir Singh \n No.of Tickets: %d\n Price per ticket: 320 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*320);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Kabir Singh \n No.of Tickets: %d\n Price per ticket: 320 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*320);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Kabir Singh \n No.of Tickets: %d\n Price per ticket: 320 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*320);
                                            break; 
                                }
                        break;
                        case 5: printf("\nYou wished to watch Atrangi Re (2021)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Atrangi Re\n No.of Tickets: %d\n Price per ticket: 320 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*320);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Atrangi Re \n No.of Tickets: %d\n Price per ticket: 320 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*320);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Atrangi Re \n No.of Tickets: %d\n Price per ticket: 320 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*320);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Atrangi Re \n No.of Tickets: %d\n Price per ticket: 320 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*320);
                                            break; 
                                }
                        break;
                        default: printf("\nInvalid movie selection.\n"); break;
                    }
                    break;
                case 4: 
                    printf("You are entering Wave Cinemas, Noida");
                    printf("\nAvailable and Recommended Movies:\n1. Badhaai Do (2022)\n2. Koi Mil Gaya (2023)\n3. Lagaan (2022)\n4. Zindagi Na Milegi Dobara (2022)\n5. Dil Chahta Hai (2023)");
                    scanf("%d", &movies);
                    switch(movies)
                    {
                        case 1: printf("\nYou wished to watch Badhaai Do (2022)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Badhaai Do \n No.of Tickets: %d\n Price per ticket: 320 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*320);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Badhaai Do \n No.of Tickets: %d\n Price per ticket: 320 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*320);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Badhaai Do \n No.of Tickets: %d\n Price per ticket: 320 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*320);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Badhaai Do \n No.of Tickets: %d\n Price per ticket: 320 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*320);
                                            break; 
                                }
                        break;
                        case 2: printf("\nYou wished to watch Koi Mil Gaya (2023)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Koi Mil Gaya \n No.of Tickets: %d\n Price per ticket: 320 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*320);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Koi Mil Gaya \n No.of Tickets: %d\n Price per ticket: 320 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*320);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Koi Mil Gaya \n No.of Tickets: %d\n Price per ticket: 320 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*320);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Koi Mil Gaya \n No.of Tickets: %d\n Price per ticket: 320 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*320);
                                            break; 
                                }
                        break;
                        case 3: printf("\nYou wished to watch Lagaan (2022)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Lagaan \n No.of Tickets: %d\n Price per ticket: 320 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*320);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Lagaan \n No.of Tickets: %d\n Price per ticket: 320 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*320);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Lagaan \n No.of Tickets: %d\n Price per ticket: 320 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*320);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Lagaan \n No.of Tickets: %d\n Price per ticket: 320 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*320);
                                            break; 
                                }
                        break;
                        case 4: printf("\nYou wished to watch Zindagi Na Milegi Dobara (2022)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Zindagi Na Milegi Dobara  \n No.of Tickets: %d\n Price per ticket: 320 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*320);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Zindagi Na Milegi Dobara  \n No.of Tickets: %d\n Price per ticket: 320 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*320);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Zindagi Na Milegi Dobara  \n No.of Tickets: %d\n Price per ticket: 320 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*320);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Zindagi Na Milegi Dobara  \n No.of Tickets: %d\n Price per ticket: 320 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*320);
                                            break; 
                                }
                        break;
                        case 5: printf("\nYou wished to watch Dil Chahta Hai (2023)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Dil Chahta Hai \n No.of Tickets: %d\n Price per ticket: 320 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*320);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Dil Chahta Hai \n No.of Tickets: %d\n Price per ticket: 320 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*320);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Dil Chahta Hai \n No.of Tickets: %d\n Price per ticket: 320 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*320);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Dil Chahta Hai \n No.of Tickets: %d\n Price per ticket: 320 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*320);
                                            break; 
                                }
                        break;
                        default: printf("\nInvalid movie selection.\n"); break;
                    }
                    break; 
                case 5: 
                    printf("You are entering DT Cinemas, Rohini");
                    printf("\nAvailable and Recommended Movies:\n1. KGF: Chapter 2 (Hindi) (2022)\n2. RRR (Hindi) (2022)\n3. Jawan (2023)\n4. Pathaan (2023)\n5. Teri Meri Kahani (2023)");
                    scanf("%d", &movies);
                    switch(movies)
                    {
                        case 1: printf("\nYou wished to watch KGF: Chapter 2 (Hindi) (2022)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: KGF: Chapter 2 (Hindi) \n No.of Tickets: %d\n Price per ticket: 350 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*350);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: KGF: Chapter 2 (Hindi) \n No.of Tickets: %d\n Price per ticket: 350 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*350);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: KGF: Chapter 2 (Hindi) \n No.of Tickets: %d\n Price per ticket: 350 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*350);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: KGF: Chapter 2 (Hindi) \n No.of Tickets: %d\n Price per ticket: 350 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*350);
                                            break; 
                                }
                        break;
                        case 2: printf("\nYou wished to watch RRR (Hindi) (2022)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: RRR (Hindi) \n No.of Tickets: %d\n Price per ticket: 350 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*350);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: RRR (Hindi) \n No.of Tickets: %d\n Price per ticket: 350 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*350);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: RRR (Hindi) \n No.of Tickets: %d\n Price per ticket: 350 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*350);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: RRR (Hindi) \n No.of Tickets: %d\n Price per ticket: 350 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*350);
                                            break; 
                                }
                        break;
                        case 3: printf("\nYou wished to watch Jawan (2023)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Jawan \n No.of Tickets: %d\n Price per ticket: 320 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*320);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Jawan \n No.of Tickets: %d\n Price per ticket: 320 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*320);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Jawan \n No.of Tickets: %d\n Price per ticket: 320 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*320);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Jawan \n No.of Tickets: %d\n Price per ticket: 320 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*320);
                                            break; 
                                }
                        break;
                        case 4: printf("\nYou wished to watch Pathaan (2023)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Pathaan \n No.of Tickets: %d\n Price per ticket: 320 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*320);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Pathaan \n No.of Tickets: %d\n Price per ticket: 320 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*320);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Pathaan \n No.of Tickets: %d\n Price per ticket: 320 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*320);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Pathaan \n No.of Tickets: %d\n Price per ticket: 320 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*320);
                                            break; 
                                }
                        break;
                        case 5: printf("\nYou wished to watch Teri Meri Kahani (2023)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Teri Meri Kahani \n No.of Tickets: %d\n Price per ticket: 300 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*300);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Teri Meri Kahani \n No.of Tickets: %d\n Price per ticket: 300 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*300);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Teri Meri Kahani \n No.of Tickets: %d\n Price per ticket: 300 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*300);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Teri Meri Kahani \n No.of Tickets: %d\n Price per ticket: 300 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*300);
                                            break; 
                                }
                        break;
                        default: printf("\nInvalid movie selection.\n"); break;
                    }
                    break;
                default: printf("\nInvalid theatre selection in Delhi-NCR.\n"); break;
            }
            break;

        case 4: 
            printf("Your location is updated to Bengaluru");
            printf("\nSelect the available theatres:\n1. PVR Cinemas, Koramangala\n2. INOX, MG Road\n3. Cinepolis, Orion Mall\n4. Rajakumari Cinema, Malleshwaram\n5. Fun Cinemas, Whitefield");
            printf("\nEnter the number for your selected theatre: ");
            scanf("%d", &theatre);  
            
            switch(theatre)
            {
                case 1: 
                    printf("You are entering PVR Cinemas, Koramangala");
                    printf("\nAvailable and Recommended Movies:\n1. K.G.F: Chapter 2 (2022)\n2. Kantara (2022)\n3. James (2022)\n4. The Villain (2022)\n5. Vijay Raghavan (2023)");
                    scanf("%d", &movies);
                    switch(movies)
                    {
                        case 1: printf("\nYou wished to watch K.G.F: Chapter 2 (2022)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: KGF: Chapter 2 (Kannada) \n No.of Tickets: %d\n Price per ticket: 350 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*350);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: KGF: Chapter 2 (Kannada) \n No.of Tickets: %d\n Price per ticket: 350 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*350);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: KGF: Chapter 2 (Kannada) \n No.of Tickets: %d\n Price per ticket: 350 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*350);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: KGF: Chapter 2 (Kannada) \n No.of Tickets: %d\n Price per ticket: 350 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*350);
                                            break; 
                                }
                        break;
                        case 2: printf("\nYou wished to watch Kantara (2022)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Kantara \n No.of Tickets: %d\n Price per ticket: 200 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*200);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Kantara \n No.of Tickets: %d\n Price per ticket: 200 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*200);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Kantara \n No.of Tickets: %d\n Price per ticket: 200 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*200);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Kantara \n No.of Tickets: %d\n Price per ticket: 200 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*200);
                                            break; 
                                }
                        break;
                        case 3: printf("\nYou wished to watch James (2022)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: James \n No.of Tickets: %d\n Price per ticket: 250 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*250);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: James \n No.of Tickets: %d\n Price per ticket: 250 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*250);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: James \n No.of Tickets: %d\n Price per ticket: 250 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*250);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: James \n No.of Tickets: %d\n Price per ticket: 250 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*250);
                                            break; 
                                }
                        break;
                        case 4: printf("\nYou wished to watch The Villain (2022)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: The Villain \n No.of Tickets: %d\n Price per ticket: 200 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*200);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: The Villain \n No.of Tickets: %d\n Price per ticket: 200 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*200);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: The Villain \n No.of Tickets: %d\n Price per ticket: 200 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*200);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: The Villain \n No.of Tickets: %d\n Price per ticket: 200 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*200);
                                            break; 
                                }
                        break;
                        case 5: printf("\nYou wished to watch Vijay Raghavan (2023)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Vijay Raghavan \n No.of Tickets: %d\n Price per ticket: 200 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*200);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Vijay Raghavan \n No.of Tickets: %d\n Price per ticket: 200 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*200);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Vijay Raghavan \n No.of Tickets: %d\n Price per ticket: 200 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*200);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Vijay Raghavan \n No.of Tickets: %d\n Price per ticket: 200 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*200);
                                            break; 
                                }
                        break;
                        default: printf("\nInvalid movie selection.\n"); break;
                    }
                    break;
                case 2: 
                    printf("You are entering INOX, MG Road");
                    printf("\nAvailable and Recommended Movies:\n1. Salaar (2023)\n2. Yashoda (2022)\n3. The Soldier (2023)\n4. Vikrant Rona (2022)\n5. Raana (2023)");
                    scanf("%d", &movies);
                    switch(movies)
                    {
                        case 1: printf("\nYou wished to watch Salaar (2023)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Salaar: Part-1 Ceasefire (Kannada) \n No.of Tickets: %d\n Price per ticket: 275 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*275);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Salaar: Part-1 Ceasefire (Kannada) \n No.of Tickets: %d\n Price per ticket: 275 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*275);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Salaar: Part-1 Ceasefire (Kannada) \n No.of Tickets: %d\n Price per ticket: 275 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*275);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Salaar: Part-1 Ceasefire (Kannada) \n No.of Tickets: %d\n Price per ticket: 275 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*275);
                                            break; 
                                }
                        break;
                        case 2: printf("\nYou wished to watch Yashoda (2022)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Yashoda \n No.of Tickets: %d\n Price per ticket: 200 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*200);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Yashoda \n No.of Tickets: %d\n Price per ticket: 200 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*200);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Yashoda \n No.of Tickets: %d\n Price per ticket: 200 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*200);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Yashoda \n No.of Tickets: %d\n Price per ticket: 200 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*200);
                                            break; 
                                }
                        break;
                        case 3: printf("\nYou wished to watch The Soldier (2023)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: The Soldier \n No.of Tickets: %d\n Price per ticket: 200 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*200);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: The Soldier \n No.of Tickets: %d\n Price per ticket: 200 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*200);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: The Soldier \n No.of Tickets: %d\n Price per ticket: 200 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*200);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: The Soldier \n No.of Tickets: %d\n Price per ticket: 200 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*200);
                                            break; 
                                }
                        break;
                        case 4: printf("\nYou wished to watch Vikrant Rona (2022)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Vikranth Rona \n No.of Tickets: %d\n Price per ticket: 275 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*275);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Vikranth Rona \n No.of Tickets: %d\n Price per ticket: 275 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*275);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Vikranth Rona \n No.of Tickets: %d\n Price per ticket: 275 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*275);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Vikranth Rona \n No.of Tickets: %d\n Price per ticket: 275 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*275);
                                            break; 
                                }
                        break;
                        case 5: printf("\nYou wished to watch Raana (2023)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Raana \n No.of Tickets: %d\n Price per ticket: 200 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*200);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Raana \n No.of Tickets: %d\n Price per ticket: 200 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*200);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Raana \n No.of Tickets: %d\n Price per ticket: 200 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*200);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Raana \n No.of Tickets: %d\n Price per ticket: 200 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*200);
                                            break; 
                                }
                        break;
                        default: printf("\nInvalid movie selection.\n"); break;
                    }
                    break;
                case 3: 
                    printf("You are entering Cinepolis, Orion Mall");
                    printf("\nAvailable and Recommended Movies:\n1. RRR (2022)\n2. Garuda Gamana Vrishabha Vahana (2022)\n3. Bhajarangi 2 (2022)\n4. Kshamiyona (2022)\n5. Master (2022)");
                    scanf("%d", &movies);
                    switch(movies)  
                    {
                        case 1: printf("\nYou wished to watch RRR (2022)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: RRR (Kannada) \n No.of Tickets: %d\n Price per ticket: 350 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*350);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: RRR (Kannada) \n No.of Tickets: %d\n Price per ticket: 350 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*350);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: RRR (Kannada) \n No.of Tickets: %d\n Price per ticket: 350 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*350);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: RRR (Kannada) \n No.of Tickets: %d\n Price per ticket: 350 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*350);
                                            break; 
                                }
                        break;
                        case 2: printf("\nYou wished to watch Garuda Gamana Vrishabha Vahana (2022)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Garuda Gamana Vrishabha Vahana \n No.of Tickets: %d\n Price per ticket: 200 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*200);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Garuda Gamana Vrishabha Vahana \n No.of Tickets: %d\n Price per ticket: 200 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*200);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Garuda Gamana Vrishabha Vahana \n No.of Tickets: %d\n Price per ticket: 200 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*200);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Garuda Gamana Vrishabha Vahana \n No.of Tickets: %d\n Price per ticket: 200 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*200);
                                            break; 
                                }
                        break;
                        case 3: printf("\nYou wished to watch Bhajarangi 2 (2022)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Bhajarangi 2 \n No.of Tickets: %d\n Price per ticket: 215 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*215);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Bhajarangi 2 \n No.of Tickets: %d\n Price per ticket: 215 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*215);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Bhajarangi 2 \n No.of Tickets: %d\n Price per ticket: 215 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*215);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Bhajarangi 2 \n No.of Tickets: %d\n Price per ticket: 215 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*215);
                                            break; 
                                }
                        break;
                        case 4: printf("\nYou wished to watch Kshamiyona (2022)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Kshamiyona \n No.of Tickets: %d\n Price per ticket: 200 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*200);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Kshamiyona \n No.of Tickets: %d\n Price per ticket: 200 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*200);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Kshamiyona \n No.of Tickets: %d\n Price per ticket: 200 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*200);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Kshamiyona \n No.of Tickets: %d\n Price per ticket: 200 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*200);
                                            break; 
                                }
                        break;
                        case 5: printf("\nYou wished to watch Master (2022)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Master (Kannada Dubbed Version) \n No.of Tickets: %d\n Price per ticket: 200 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*200);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Master (Kannada Dubbed Version) \n No.of Tickets: %d\n Price per ticket: 200 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*200);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Master (Kannada Dubbed Version) \n No.of Tickets: %d\n Price per ticket: 200 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*200);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Master (Kannada Dubbed Version) \n No.of Tickets: %d\n Price per ticket: 200 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*200);
                                            break; 
                                }
                        break;
                        default: printf("\nInvalid movie selection.\n"); break;
                    }
                    break;
                case 4: 
                    printf("You are entering Rajakumari Cinema, Malleshwaram");
                    printf("\nAvailable and Recommended Movies:\n1. Naanu Mathtu Gunda (2022)\n2. Avatar 2 (2023)\n3. Kirik Party (2022)\n4. KGF (2022)\n5. Maduve Mane (2023)");
                    scanf("%d", &movies);
                    switch(movies)
                    {
                        case 1: printf("\nYou wished to watch Naanu Mathtu Gunda (2022)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Naanu Mathtu Gunda \n No.of Tickets: %d\n Price per ticket: 200 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*200);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Naanu Mathtu Gunda \n No.of Tickets: %d\n Price per ticket: 200 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*200);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Naanu Mathtu Gunda \n No.of Tickets: %d\n Price per ticket: 200 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*200);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Naanu Mathtu Gunda \n No.of Tickets: %d\n Price per ticket: 200 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*200);
                                            break; 
                                }
                        
                        break;
                        case 2: printf("\nYou wished to watch Avatar 2 (2023)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Avatar 2 \n No.of Tickets: %d\n Price per ticket: 250 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*250);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Avatar 2 \n No.of Tickets: %d\n Price per ticket: 250 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*250);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Avatar 2 \n No.of Tickets: %d\n Price per ticket: 250 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*250);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Avatar 2 \n No.of Tickets: %d\n Price per ticket: 250 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*250);
                                            break; 
                                }
                        break;
                        case 3: printf("\nYou wished to watch Kirik Party (2022)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Kirik Party \n No.of Tickets: %d\n Price per ticket: 200 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*200);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Kirik Party \n No.of Tickets: %d\n Price per ticket: 200 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*200);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Kirik Party \n No.of Tickets: %d\n Price per ticket: 200 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*200);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Kirik Party \n No.of Tickets: %d\n Price per ticket: 200 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*200);
                                            break; 
                                }
                        break;
                        case 4: printf("\nYou wished to watch KGF (2022)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: KGF: Chapter 2 (Kannada) \n No.of Tickets: %d\n Price per ticket: 350 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*350);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: KGF: Chapter 2 (Kannada) \n No.of Tickets: %d\n Price per ticket: 350 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*350);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: KGF: Chapter 2 (Kannada) \n No.of Tickets: %d\n Price per ticket: 350 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*350);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: KGF: Chapter 2 (Kannada) \n No.of Tickets: %d\n Price per ticket: 350 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*350);
                                            break; 
                                }
                        break;
                        case 5: printf("\nYou wished to watch Maduve Mane (2023)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Maduve Mane \n No.of Tickets: %d\n Price per ticket: 220 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*220);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Maduve Mane \n No.of Tickets: %d\n Price per ticket: 220 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*220);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Maduve Mane \n No.of Tickets: %d\n Price per ticket: 220 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*220);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Maduve Mane \n No.of Tickets: %d\n Price per ticket: 220 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*220);
                                            break; 
                                }
                        break;
                        default: printf("\nInvalid movie selection.\n"); break;
                    }
                    break;
                case 5: 
                    printf("You are entering Fun Cinemas, Whitefield");
                    printf("\nAvailable and Recommended Movies:\n1. Love Mocktail 2 (2023)\n2. Prithviraj (2022)\n3. Bairagee (2023)\n4. Avane Srimannarayana (2022)\n5. Kavaludaari (2022)");
                    scanf("%d", &movies);
                    switch(movies)
                    { 
                        case 1: printf("\nYou wished to watch Love Mocktail 2 (2023)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Love Mocktail 2 \n No.of Tickets: %d\n Price per ticket: 200 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*200);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Love Mocktail 2 \n No.of Tickets: %d\n Price per ticket: 200 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*200);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Love Mocktail 2 \n No.of Tickets: %d\n Price per ticket: 200 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*200);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Love Mocktail 2 \n No.of Tickets: %d\n Price per ticket: 200 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*200);
                                            break; 
                                }
                        break;
                        case 2: printf("\nYou wished to watch Prithviraj (2022)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Prithviraj \n No.of Tickets: %d\n Price per ticket: 200 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*200);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Prithviraj \n No.of Tickets: %d\n Price per ticket: 200 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*200);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Prithviraj \n No.of Tickets: %d\n Price per ticket: 200 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*200);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Prithviraj \n No.of Tickets: %d\n Price per ticket: 200 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*200);
                                            break; 
                                }
                        break;
                        case 3: printf("\nYou wished to watch Bairagee (2023)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Bairagee \n No.of Tickets: %d\n Price per ticket: 200 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*200);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Bairagee \n No.of Tickets: %d\n Price per ticket: 200 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*200);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Bairagee \n No.of Tickets: %d\n Price per ticket: 200 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*200);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Bairagee \n No.of Tickets: %d\n Price per ticket: 200 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*200);
                                            break; 
                                }
                        break;
                        case 4: printf("\nYou wished to watch Avane Srimannarayana (2022)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Avane Srimannarayana \n No.of Tickets: %d\n Price per ticket: 210 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*210);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Avane Srimannarayana \n No.of Tickets: %d\n Price per ticket: 210 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*210);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Avane Srimannarayana \n No.of Tickets: %d\n Price per ticket: 210 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*210);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Avane Srimannarayana \n No.of Tickets: %d\n Price per ticket: 210 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*210);
                                            break; 
                                }
                        break;
                        case 5: printf("\nYou wished to watch Kavaludaari (2022)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Kavaludaari \n No.of Tickets: %d\n Price per ticket: 200 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*200);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Kavaludaari \n No.of Tickets: %d\n Price per ticket: 200 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*200);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Kavaludaari \n No.of Tickets: %d\n Price per ticket: 200 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*200);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Kavaludaari \n No.of Tickets: %d\n Price per ticket: 200 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*200);
                                            break; 
                                }
                        break;
                        default: printf("\nInvalid movie selection.\n"); break;
                    }
                    break;
                default: printf("\nInvalid theatre selection in Bengaluru.\n"); break;
            }
            break;

        case 5: 
            printf("Your location is updated to Ahmedabad");
            printf("\nSelect the available theatres:\n1. PVR Cinemas, Sardar Vallabhbhai Patel Stadium\n2. INOX, CG Road\n3. Cinepolis, Ahmedabad One Mall\n4. City Gold, Ashram Road\n5. Movietime, Navrangpura");
            printf("\nEnter the number for your selected theatre: ");
            scanf("%d", &theatre);  
            
            switch(theatre)
            {
                case 1: 
                    printf("You are entering PVR Cinemas, Sardar Vallabhbhai Patel Stadium");
                    printf("\nAvailable and Recommended Movies:\n1. Chhello Show (2022)\n2. Dhunki (2023)\n3. Lagna Pahavi (2023)\n4. The Last Show (2022)\n5. Gharwa Vichaar (2023)");
                    scanf("%d", &movies);
                    switch(movies)
                    {
                        case 1: printf("\nYou wished to watch Chhello Show (2022)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Chhello Show \n No.of Tickets: %d\n Price per ticket: 200 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*200);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Chhello Show \n No.of Tickets: %d\n Price per ticket: 200 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*200);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Chhello Show \n No.of Tickets: %d\n Price per ticket: 200 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*200);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Chhello Show \n No.of Tickets: %d\n Price per ticket: 200 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*200);
                                            break; 
                                }
                        break;
                        case 2: printf("\nYou wished to watch Dunki (2023)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Dunki \n No.of Tickets: %d\n Price per ticket: 250 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*250);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Dunki \n No.of Tickets: %d\n Price per ticket: 250 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*250);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Dunki \n No.of Tickets: %d\n Price per ticket: 250 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*250);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Dunki \n No.of Tickets: %d\n Price per ticket: 250 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*250);
                                            break; 
                                }
                        break;
                        case 3: printf("\nYou wished to watch Lagna Pahavi (2023)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Lagna Pahavi \n No.of Tickets: %d\n Price per ticket: 200 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*200);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Lagna Pahavi \n No.of Tickets: %d\n Price per ticket: 200 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*200);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Lagna Pahavi \n No.of Tickets: %d\n Price per ticket: 200 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*200);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Lagna Pahavi \n No.of Tickets: %d\n Price per ticket: 200 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*200);
                                            break; 
                                }
                        break;
                        case 4: printf("\nYou wished to watch The Last Show (2022)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: The Last Show \n No.of Tickets: %d\n Price per ticket: 175 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*175);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: The Last Show \n No.of Tickets: %d\n Price per ticket: 175 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*175);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: The Last Show \n No.of Tickets: %d\n Price per ticket: 175 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*175);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: The Last Show \n No.of Tickets: %d\n Price per ticket: 175 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*175);
                                            break; 
                                }
                        break;
                        case 5: printf("\nYou wished to watch Gharwa Vichaar (2023)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Gharwa Vichaar \n No.of Tickets: %d\n Price per ticket: 175 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*175);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Gharwa Vichaar \n No.of Tickets: %d\n Price per ticket: 175 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*175);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Gharwa Vichaar \n No.of Tickets: %d\n Price per ticket: 175 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*175);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Gharwa Vichaar \n No.of Tickets: %d\n Price per ticket: 175 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*175);
                                            break; 
                                }
                        break;
                        default: printf("\nInvalid movie selection.\n"); break;
                    }
                    break;
                case 2: 
                    printf("You are entering INOX, CG Road");
                    printf("\nAvailable and Recommended Movies:\n1. Aarti Suffering (2023)\n2. Nadi Vahate (2023)\n3. 3Dev (2022)\n4. Lal Kaptaan (2022)\n5. The Grey Story (2023)");
                    scanf("%d", &movies);
                    switch(movies)
                    {
                        case 1: printf("\nYou wished to watch Aarti Suffering (2023)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Aarti Suffering \n No.of Tickets: %d\n Price per ticket: 200 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*200);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Aarti Suffering \n No.of Tickets: %d\n Price per ticket: 200 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*200);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Aarti Suffering \n No.of Tickets: %d\n Price per ticket: 200 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*200);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Aarti Suffering \n No.of Tickets: %d\n Price per ticket: 200 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*200);
                                            break; 
                                }
                        break;
                        case 2: printf("\nYou wished to watch Nadi Vahate (2023)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Nadi Vahate \n No.of Tickets: %d\n Price per ticket: 215 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*215);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Nadi Vahate \n No.of Tickets: %d\n Price per ticket: 215 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*215);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Nadi Vahate \n No.of Tickets: %d\n Price per ticket: 215 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*215);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Nadi Vahate \n No.of Tickets: %d\n Price per ticket: 215 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*215);
                                            break; 
                                }
                        break;
                        case 3: printf("\nYou wished to watch 3Dev (2022)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: 3Dev \n No.of Tickets: %d\n Price per ticket: 200 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*200);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: 3Dev \n No.of Tickets: %d\n Price per ticket: 200 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*200);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: 3Dev \n No.of Tickets: %d\n Price per ticket: 200 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*200);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: 3Dev \n No.of Tickets: %d\n Price per ticket: 200 (in rupees) \n The Total Cost: %d \n Timings: 9:30 pm", people, people*200);
                                            break; 
                                }
                        break;
                        case 4: printf("\nYou wished to watch Lal Kaptaan (2022)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Lal Kaptaan \n No.of Tickets: %d\n Price per ticket: 210 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*210);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Lal Kaptaan \n No.of Tickets: %d\n Price per ticket: 210 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*210);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Lal Kaptaan \n No.of Tickets: %d\n Price per ticket: 210 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*210);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Lal Kaptaan \n No.of Tickets: %d\n Price per ticket: 210 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*210);
                                            break; 
                                }
                        break;
                        case 5: printf("\nYou wished to watch The Grey Story (2023)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: The Grey Story \n No.of Tickets: %d\n Price per ticket: 225 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*225);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: The Grey Story \n No.of Tickets: %d\n Price per ticket: 225 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*225);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: The Grey Story \n No.of Tickets: %d\n Price per ticket: 225 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*225);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: The Grey Story \n No.of Tickets: %d\n Price per ticket: 225 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*225);
                                            break; 
                                }
                        break;
                        default: printf("\nInvalid movie selection.\n"); break;
                    }
                    break;
                case 3: 
                    printf("You are entering Cinepolis, Ahmedabad One Mall");
                    printf("\nAvailable and Recommended Movies:\n1. Koi Aap Sa (2022)\n2. Bhaar (2023)\n3. Prem Ratan Dhan Payo (2022)\n4. Samay Kaisa Hota Hai (2023)\n5. Viraat (2023)");
                    scanf("%d", &movies);
                    switch(movies)    
                    {
                        case 1: printf("\nYou wished to watch Koi Aap Sa (2022)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Koi Aap Sa \n No.of Tickets: %d\n Price per ticket: 200 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*200);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Koi Aap Sa \n No.of Tickets: %d\n Price per ticket: 200 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*200);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Koi Aap Sa \n No.of Tickets: %d\n Price per ticket: 200 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*200);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Koi Aap Sa \n No.of Tickets: %d\n Price per ticket: 200 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*200);
                                            break; 
                                }
                        break;
                        case 2: printf("\nYou wished to watch Bhaar (2023)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Bhaar \n No.of Tickets: %d\n Price per ticket: 210 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*210);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Bhaar \n No.of Tickets: %d\n Price per ticket: 210 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*210);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Bhaar \n No.of Tickets: %d\n Price per ticket: 210 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*210);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Bhaar \n No.of Tickets: %d\n Price per ticket: 210 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*210);
                                            break; 
                                }
                        break;
                        case 3: printf("\nYou wished to watch Prem Ratan Dhan Payo \n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Prem Ratan Dhan Payo \n No.of Tickets: %d\n Price per ticket: 200 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*200);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Prem Ratan Dhan Payo \n No.of Tickets: %d\n Price per ticket: 200 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*200);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Prem Ratan Dhan Payo \n No.of Tickets: %d\n Price per ticket: 200 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*200);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Prem Ratan Dhan Payo \n No.of Tickets: %d\n Price per ticket: 200 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*200);
                                            break; 
                                }
                        break;
                        case 4: printf("\nYou wished to watch Samay Kaisa Hota Hai (2023)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Samay Kaisa Hota Hai \n No.of Tickets: %d\n Price per ticket: 215 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*215);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Samay Kaisa Hota Hai \n No.of Tickets: %d\n Price per ticket: 215 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*215);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Samay Kaisa Hota Hai \n No.of Tickets: %d\n Price per ticket: 215 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*215);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Samay Kaisa Hota Hai \n No.of Tickets: %d\n Price per ticket: 215(in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*215);
                                            break; 
                                }
                        break;
                        case 5: printf("\nYou wished to watch Viraat (2023)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Viraat \n No.of Tickets: %d\n Price per ticket: 200 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*200);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Viraat \n No.of Tickets: %d\n Price per ticket: 200 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*200);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Viraat \n No.of Tickets: %d\n Price per ticket: 200 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*200);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Viraat \n No.of Tickets: %d\n Price per ticket: 200 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*200);
                                            break; 
                                }
                        break;
                        default: printf("\nInvalid movie selection.\n"); break;
                    }
                    break;
                case 4: 
                    printf("You are entering City Gold, Ashram Road");
                    printf("\nAvailable and Recommended Movies:\n1. Shubh Mangal Zyada Saavdhan (2022)\n2. Rang De Basanti (2023)\n3. Toofan (2023)\n4. Kashyap (2023)\n5. Chhedi (2022)");
                    scanf("%d", &movies);
                    switch(movies)
                    {
                        case 1: printf("\nYou wished to watch Shubh Mangal Zyada Saavdhan (2022)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Shubh Mangal Zyada Saavdhan \n No.of Tickets: %d\n Price per ticket: 225 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*225);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Shubh Mangal Zyada Saavdhan \n No.of Tickets: %d\n Price per ticket: 225 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*225);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Shubh Mangal Zyada Saavdhan \n No.of Tickets: %d\n Price per ticket: 225(in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*225);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Shubh Mangal Zyada Saavdhan \n No.of Tickets: %d\n Price per ticket: 225 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*225);
                                            break; 
                                }
                        break;
                        case 2: printf("\nYou wished to watch Rang De Basanti (2023)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Rang De Basanti \n No.of Tickets: %d\n Price per ticket: 150 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*150);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Rang De Basanti  \n No.of Tickets: %d\n Price per ticket: 150 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*150);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Rang De Basanti  \n No.of Tickets: %d\n Price per ticket: 150 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*150);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Rang De Basanti  \n No.of Tickets: %d\n Price per ticket: 150 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*150);
                                            break; 
                                }
                        break;
                        case 3: printf("\nYou wished to watch Toofan (2023)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Toofan \n No.of Tickets: %d\n Price per ticket: 200 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*200);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Toofan \n No.of Tickets: %d\n Price per ticket: 200 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*200);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Toofan \n No.of Tickets: %d\n Price per ticket: 200 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*200);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Toofan \n No.of Tickets: %d\n Price per ticket: 200 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*200);
                                            break; 
                                }
                        break;
                        case 4: printf("\nYou wished to watch Kashyap (2023)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Kashyap \n No.of Tickets: %d\n Price per ticket: 225 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*225);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Kashyap \n No.of Tickets: %d\n Price per ticket: 225 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*225);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Kashyap \n No.of Tickets: %d\n Price per ticket: 225 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*225);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Kashyap \n No.of Tickets: %d\n Price per ticket: 225 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*225);
                                            break; 
                                }
                        break;
                        case 5: printf("\nYou wished to watch Chhedi (2022)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Chhedi \n No.of Tickets: %d\n Price per ticket: 175 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*175);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Chhedi \n No.of Tickets: %d\n Price per ticket: 175 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*175);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Chhedi \n No.of Tickets: %d\n Price per ticket: 175 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*175);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Chhedi \n No.of Tickets: %d\n Price per ticket: 175 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*175);
                                            break; 
                                }
                        break;
                        default: printf("\nInvalid movie selection.\n"); break;
                    }
                    break;
                case 5: 
                    printf("You are entering Movietime, Navrangpura");
                    printf("\nAvailable and Recommended Movies:\n1. Kaajal (2023)\n2. Mehendi Rachnewali (2023)\n3. Raksha Bandhan (2022)\n4. Tera Dhan (2022)\n5. Vachalo (2023)");
                    scanf("%d", &movies);
                    switch(movies)
                    {
                        case 1: printf("\nYou wished to watch Kaajal (2023)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Kaajal \n No.of Tickets: %d\n Price per ticket: 190 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*190);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Kaajal \n No.of Tickets: %d\n Price per ticket: 190 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*190);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Kaajal \n No.of Tickets: %d\n Price per ticket: 190 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*190);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Kaajal \n No.of Tickets: %d\n Price per ticket: 190 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*190);
                                            break; 
                                }
                        break;
                        case 2: printf("\nYou wished to watch Mehendi Rachnewali (2023)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Mehendi Rachnewali \n No.of Tickets: %d\n Price per ticket: 200 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*200);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Mehendi Rachnewali \n No.of Tickets: %d\n Price per ticket: 200 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*200);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Mehendi Rachnewali \n No.of Tickets: %d\n Price per ticket: 200 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*200);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Mehendi Rachnewali \n No.of Tickets: %d\n Price per ticket: 200 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*200);
                                            break; 
                                }
                        break;
                        case 3: printf("\nYou wished to watch Raksha Bandhan (2022)\n");
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Raksha Bandhan \n No.of Tickets: %d\n Price per ticket: 225 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*225);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Raksha Bandhan \n No.of Tickets: %d\n Price per ticket: 225 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*225);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Raksha Bandhan \n No.of Tickets: %d\n Price per ticket: 225 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*225);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Raksha Bandhan \n No.of Tickets: %d\n Price per ticket: 225 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*225);
                                            break; 
                                } 
                        break;
                        case 4: printf("\nYou wished to watch Tera Dhan (2022)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Tera Dhan \n No.of Tickets: %d\n Price per ticket: 210 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*210);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Tera Dhan \n No.of Tickets: %d\n Price per ticket: 210 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*210);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Tera Dhan \n No.of Tickets: %d\n Price per ticket: 210 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*210);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Tera Dhan \n No.of Tickets: %d\n Price per ticket: 210 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*210);
                                            break; 
                                }
                        break;
                        case 5: printf("\n You wished to watch Vachalo (2023)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Vachalo \n No.of Tickets: %d\n Price per ticket: 220 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*220);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Vachalo \n No.of Tickets: %d\n Price per ticket: 220 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*220);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Vachalo \n No.of Tickets: %d\n Price per ticket: 220 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*220);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Vachalo \n No.of Tickets: %d\n Price per ticket: 220 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*220);
                                            break; 
                                }
                        break;
                        default: printf("\nInvalid movie selection.\n"); 
                        break;
                    }
                    break;
                default: printf("\nInvalid theatre selection in Ahmedabad.\n"); break;
            }
            break;

        case 6: 
            printf("\nYour location is updated to Chandigarh");
            printf("\nSelect the available theatres:\n1. PVR Cinemas, Elante Mall\n2. INOX, Chandigarh Haat\n3. Fun Cinemas, Sector 17\n4. Cinepolis, Chandigarh\n5. DT Cinemas, Chandigarh");
            printf("\nEnter the number for your selected theatre: ");
            scanf("%d", &theatre);  
            
            switch(theatre)
            {
                case 1: 
                    printf("You are entering PVR Cinemas, Elante Mall");
                    printf("\nAvailable and Recommended Movies:\n1. Carry On Jatta 3 (2023)\n2. Shadaa (2022)\n3. Kokka (2023)\n4. Jodi (2023)\n5. Choriyan (2023)");
                    scanf("%d", &movies);
                    switch(movies)
                    {
                        case 1: printf("\nYou wished to watch Carry On Jatta 3 (2023)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Carry On Jatta 3 \n No.of Tickets: %d\n Price per ticket: 175 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*175);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Carry On Jatta 3 \n No.of Tickets: %d\n Price per ticket: 175 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*175);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Carry On Jatta 3 \n No.of Tickets: %d\n Price per ticket: 175 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*175);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Carry On Jatta 3 \n No.of Tickets: %d\n Price per ticket: 175 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*175);
                                            break; 
                                }
                        break;
                        case 2: printf("\nYou wished to watch Shadaa (2022)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Shadaa \n No.of Tickets: %d\n Price per ticket: 200 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*200);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Shadaa \n No.of Tickets: %d\n Price per ticket: 200 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*200);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Shadaa \n No.of Tickets: %d\n Price per ticket: 200 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*200);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Shadaa \n No.of Tickets: %d\n Price per ticket: 200 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*200);
                                            break; 
                                }
                        break;
                        case 3: printf("\nYou wished to watch Kokka (2023)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Kokka \n No.of Tickets: %d\n Price per ticket: 250 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*250);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Kokka \n No.of Tickets: %d\n Price per ticket: 250 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*250);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Kokka \n No.of Tickets: %d\n Price per ticket: 250 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*250);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Kokka \n No.of Tickets: %d\n Price per ticket: 250 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*250);
                                            break; 
                                }
                        break;
                        case 4: printf("\nYou wished to watch Jodi (2023)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Jodi \n No.of Tickets: %d\n Price per ticket: 270 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*270);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Jodi \n No.of Tickets: %d\n Price per ticket: 270 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*270);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Jodi \n No.of Tickets: %d\n Price per ticket: 270 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*270);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Jodi \n No.of Tickets: %d\n Price per ticket: 270 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*270);
                                            break; 
                                }
                        break;
                        case 5: printf("\nYou wished to watch Choriyan (2023)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Choriyan \n No.of Tickets: %d\n Price per ticket: 290 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*290);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Choriyan \n No.of Tickets: %d\n Price per ticket: 290 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*290);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Choriyan \n No.of Tickets: %d\n Price per ticket: 290 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*290);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Choriyan \n No.of Tickets: %d\n Price per ticket: 290 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*290);
                                            break; 
                                }
                        break;
                        default: printf("\nInvalid movie selection.\n"); break;
                    }
                    break;
                case 2: 
                    printf("You are entering INOX, Chandigarh Haat");
                    printf("\nAvailable and Recommended Movies:\n1. Saunkan Saunkne (2022)\n2. Angrej (2023)\n3. Babe Bhangra Paunde Ne (2022)\n4. Pamma (2023)\n5. Amanat (2023)");
                    scanf("%d", &movies);
                    switch(movies)
                    {
                        case 1: printf("\nYou wished to watch Saunkan Saunkne (2022)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Saunkan Saunkne \n No.of Tickets: %d\n Price per ticket: 250 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*250);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Saunkan Saunkne \n No.of Tickets: %d\n Price per ticket: 250 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*250);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Saunkan Saunkne \n No.of Tickets: %d\n Price per ticket: 250 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*250);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Saunkan Saunkne \n No.of Tickets: %d\n Price per ticket: 250 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*250);
                                            break; 
                                }
                        break;
                        case 2: printf("\nYou wished to watch Angrej (2023)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie:  \n No.of Tickets: %d\n Price per ticket: 200 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*200);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie:  \n No.of Tickets: %d\n Price per ticket: 200 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*200);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie:  \n No.of Tickets: %d\n Price per ticket: 200 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*200);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie:  \n No.of Tickets: %d\n Price per ticket: 200 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*200);
                                            break; 
                                }
                        break;
                        case 3: printf("\nYou wished to watch Babe Bhangra Paunde Ne (2022)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Babe Bhangra Paunde Ne \n No.of Tickets: %d\n Price per ticket: 160 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*160);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Babe Bhangra Paunde Ne \n No.of Tickets: %d\n Price per ticket: 160 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*160);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Babe Bhangra Paunde Ne \n No.of Tickets: %d\n Price per ticket: 160 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*160);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Babe Bhangra Paunde Ne \n No.of Tickets: %d\n Price per ticket: 160 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*160);
                                            break; 
                                }
                        break;
                        case 4: printf("\nYou wished to watch Pamma (2023)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Pamma \n No.of Tickets: %d\n Price per ticket: 170 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*170);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Pamma \n No.of Tickets: %d\n Price per ticket: 170 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*170);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Pamma \n No.of Tickets: %d\n Price per ticket: 170 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*170);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Pamma \n No.of Tickets: %d\n Price per ticket: 170 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*170);
                                            break; 
                                }
                        break;
                        case 5: printf("\nYou wished to watch Amanat (2023)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Amanat \n No.of Tickets: %d\n Price per ticket: 160 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*160);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Amanat \n No.of Tickets: %d\n Price per ticket: 160 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*160);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Amanat \n No.of Tickets: %d\n Price per ticket: 160 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*160);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Amanat \n No.of Tickets: %d\n Price per ticket: 160 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*160);
                                            break; 
                                }
                        break;
                        default: printf("\nInvalid movie selection.\n"); break;
                    }
                    break;
                case 3: 
                    printf("You are entering Fun Cinemas, Sector 17");
                    printf("\nAvailable and Recommended Movies:\n1. Qismat 2 (2022)\n2. Jatt Brothers (2022)\n3. Gaddar 2 (2023)\n4. Ik Sandhu Hunda Si (2022)\n5. Chal Mera Putt 3 (2023)");
                    scanf("%d", &movies);  
                    switch(movies)    
                    {
                        case 1: printf("\nYou wished to watch Qismat 2 (2022)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Qismat 2 \n No.of Tickets: %d\n Price per ticket: 200 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*200);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Qismat 2 \n No.of Tickets: %d\n Price per ticket: 200 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*200);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Qismat 2 \n No.of Tickets: %d\n Price per ticket: 200 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*200);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Qismat 2 \n No.of Tickets: %d\n Price per ticket: 200 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*200);
                                            break; 
                                }
                        break;
                        case 2: printf("\nYou wished to watch Jatt Brothers (2022)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Jatt Brothers \n No.of Tickets: %d\n Price per ticket: 160 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*160);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Jatt Brothers \n No.of Tickets: %d\n Price per ticket: 160 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*160);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Jatt Brothers \n No.of Tickets: %d\n Price per ticket: 160 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*160);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Jatt Brothers \n No.of Tickets: %d\n Price per ticket: 160 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*160);
                                            break; 
                                }
                        break;
                        case 3: printf("\nYou wished to watch Gaddar 2 (2023)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Gaddar 2 \n No.of Tickets: %d\n Price per ticket: 200 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*200);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Gaddar 2 \n No.of Tickets: %d\n Price per ticket: 200 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*200);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Gaddar 2 \n No.of Tickets: %d\n Price per ticket: 200 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*200);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Gaddar 2 \n No.of Tickets: %d\n Price per ticket: 200 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*200);
                                            break; 
                                }
                        break;
                        case 4: printf("\nYou wished to watch Ik Sandhu Hunda Si (2022)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Ik Sandhu Hunda Si \n No.of Tickets: %d\n Price per ticket: 215 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*215);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Ik Sandhu Hunda Si \n No.of Tickets: %d\n Price per ticket: 215 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*215);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Ik Sandhu Hunda Si \n No.of Tickets: %d\n Price per ticket: 215 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*215);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Ik Sandhu Hunda Si \n No.of Tickets: %d\n Price per ticket: 215 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*215);
                                            break; 
                                }
                        break;
                        case 5: printf("\nYou wished to watch Chal Mera Putt 3 (2023)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Chal Mera Putt 3 \n No.of Tickets: %d\n Price per ticket: 175 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*175);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Chal Mera Putt 3 \n No.of Tickets: %d\n Price per ticket: 175 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*175);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Chal Mera Putt 3 \n No.of Tickets: %d\n Price per ticket: 175 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*175);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Chal Mera Putt 3 \n No.of Tickets: %d\n Price per ticket: 175 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*175);
                                            break; 
                                }
                        break;
                        default: printf("\nInvalid movie selection.\n"); break;
                    }
                    break;
                case 4: 
                    printf("You are entering Cinepolis, Chandigarh");
                    printf("\nAvailable and Recommended Movies:\n1. Shampain (2023)\n2. Munda Faridkotia (2022)\n3. Jind Mahi (2023)\n4. Chhalla Mudke Nahi Aaya (2023)\n5. Punjab 1984 (2023)");
                    scanf("%d", &movies);
                    switch(movies)
                    {
                        case 1: printf("\nYou wished to watch Shampain (2023)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Shampain \n No.of Tickets: %d\n Price per ticket: 175 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*175);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Shampain \n No.of Tickets: %d\n Price per ticket: 175 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*175);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Shampain \n No.of Tickets: %d\n Price per ticket: 175 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*175);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Shampain \n No.of Tickets: %d\n Price per ticket: 175 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*175);
                                            break; 
                                }
                        break;
                        case 2: printf("\nYou wished to watch Munda Faridkotia (2022)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Munda Faridkotia \n No.of Tickets: %d\n Price per ticket: 175 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*175);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Munda Faridkotia \n No.of Tickets: %d\n Price per ticket: 175 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*175);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Munda Faridkotia \n No.of Tickets: %d\n Price per ticket: 175 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*175);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Munda Faridkotia \n No.of Tickets: %d\n Price per ticket: 175 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*175);
                                            break; 
                                }
                        break;
                        case 3: printf("\nYou wished to watch Jind Mahi (2023)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Jind Mahi \n No.of Tickets: %d\n Price per ticket: 180 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*180);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Jind Mahi \n No.of Tickets: %d\n Price per ticket: 180 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*180);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Jind Mahi \n No.of Tickets: %d\n Price per ticket: 180 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*180);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Jind Mahi \n No.of Tickets: %d\n Price per ticket: 180 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*180);
                                            break; 
                                }
                        break;
                        case 4: printf("\nYou wished to watch Chhalla Mudke Nahi Aaya (2023)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Chhalla Mudke Nahi Aaya \n No.of Tickets: %d\n Price per ticket: 165 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*165);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Chhalla Mudke Nahi Aaya \n No.of Tickets: %d\n Price per ticket: 165 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*165);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Chhalla Mudke Nahi Aaya \n No.of Tickets: %d\n Price per ticket: 165 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*165);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Chhalla Mudke Nahi Aaya \n No.of Tickets: %d\n Price per ticket: 165 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*165);
                                            break; 
                                }
                        break;
                        case 5: printf("\nYou wished to watch Punjab 1984 (2023)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Punjab 1984 \n No.of Tickets: %d\n Price per ticket: 170 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*170);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Punjab 1984 \n No.of Tickets: %d\n Price per ticket: 170 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*170);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Punjab 1984 \n No.of Tickets: %d\n Price per ticket: 170 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*170);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Punjab 1984 \n No.of Tickets: %d\n Price per ticket: 170 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*170);
                                            break; 
                                }
                        break;
                        default: printf("\nInvalid movie selection.\n"); break;
                    }
                    break;
                case 5: 
                    printf("You are entering DT Cinemas, Chandigarh");
                    printf("\nAvailable and Recommended Movies:\n1. Parahuna 2 (2023)\n2. Sufna (2022)\n3. Lancer (2022)\n4. Chandigarh Amritsar Chandigarh (2023)\n5. Raat Di Gedi (2022)");
                    scanf("%d", &movies);
                    switch(movies)
                    {
                        case 1: printf("\nYou wished to watch Parahuna 2 (2023)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Parahuna 2 \n No.of Tickets: %d\n Price per ticket: 220 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*220);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Parahuna 2 \n No.of Tickets: %d\n Price per ticket: 220 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*220);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Parahuna 2 \n No.of Tickets: %d\n Price per ticket: 220 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*220);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Parahuna 2 \n No.of Tickets: %d\n Price per ticket: 220 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*220);
                                            break; 
                                }
                        break;
                        case 2: printf("\nYou wished to watch Sufna (2022)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Sufna \n No.of Tickets: %d\n Price per ticket: 195 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*195);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Sufna \n No.of Tickets: %d\n Price per ticket: 195 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*195);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Sufna \n No.of Tickets: %d\n Price per ticket: 195 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*195);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Sufna \n No.of Tickets: %d\n Price per ticket: 195 (in rupees) \n The Total Cost: %d \n Timings: 9:30 pm", people, people*195);
                                            break; 
                                }
                        break;
                        case 3: printf("\nYou wished to watch Lancer (2022)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Lancer \n No.of Tickets: %d\n Price per ticket: 220 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*220);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Lancer \n No.of Tickets: %d\n Price per ticket: 220 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*220);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Lancer \n No.of Tickets: %d\n Price per ticket: 220 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*220);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Lancer \n No.of Tickets: %d\n Price per ticket: 220 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*220);
                                            break; 
                                }
                        break;
                        case 4: printf("\nYou wished to watch Chandigarh Amritsar Chandigarh (2023)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Chandigarh Amritsar Chandigarh \n No.of Tickets: %d\n Price per ticket: 240 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*240);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Chandigarh Amritsar Chandigarh \n No.of Tickets: %d\n Price per ticket: 240 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*240);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Chandigarh Amritsar Chandigarh \n No.of Tickets: %d\n Price per ticket: 240 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*240);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Chandigarh Amritsar Chandigarh \n No.of Tickets: %d\n Price per ticket: 240 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*240);
                                            break; 
                                }
                        break;
                        case 5: printf("\nYou wished to watch Raat Di Gedi (2022)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Raat Di Gedi \n No.of Tickets: %d\n Price per ticket: 220 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*220);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Raat Di Gedi \n No.of Tickets: %d\n Price per ticket: 220 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*220);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Raat Di Gedi \n No.of Tickets: %d\n Price per ticket: 220 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*220);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Raat Di Gedi \n No.of Tickets: %d\n Price per ticket: 220 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*220);
                                            break; 
                                }
                        break;
                        default: printf("\nInvalid movie selection.\n"); break;
                    }
                    break;
                default: printf("\nInvalid theatre selection in Chandigarh.\n"); break;
            }
            break;

        case 7: 
            printf("Your location is updated to Chennai");
            printf("\nSelect the available theatres:\n1. PVR Cinemas, Phoenix Market City\n2. INOX, Citi Centre\n3. Sathyam Cinemas, Royapettah\n4. Escape Cinemas, Express Avenue\n5. Vetri Theatres, T. Nagar");
            printf("\nEnter the number for your selected theatre: ");
            scanf("%d", &theatre);  
            
            switch(theatre)
            {
                case 1: 
                    printf("You are entering PVR Cinemas, Phoenix Market City");
                    printf("\nAvailable and Recommended Movies:\n1. Vikram (2022)\n2. Beast (2022)\n3. Ponniyin Selvan: Part One (2022)\n4. Jailer (2023)\n5. Leo (2023)");
                    scanf("%d", &movies);
                    switch(movies)
                    {
                        case 1: printf("\nYou wished to watch Vikram (2022)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Vikram \n No.of Tickets: %d\n Price per ticket: 195 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*195);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Vikram \n No.of Tickets: %d\n Price per ticket: 195 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*195);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Vikram \n No.of Tickets: %d\n Price per ticket: 195 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*195);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Vikram \n No.of Tickets: %d\n Price per ticket: 195 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*195);
                                            break; 
                                }
                        break;
                        case 2: printf("\nYou wished to watch Beast (2022)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Beast \n No.of Tickets: %d\n Price per ticket: 200 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*200);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Beast \n No.of Tickets: %d\n Price per ticket: 200 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*200);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Beast \n No.of Tickets: %d\n Price per ticket: 200 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*200);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Beast \n No.of Tickets: %d\n Price per ticket: 200 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*200);
                                            break; 
                                }
                        break;
                        case 3: printf("\nYou wished to watch Ponniyin Selvan: Part One (2022)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Ponniyin Selvan: Part One \n No.of Tickets: %d\n Price per ticket: 195 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*195);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Ponniyin Selvan: Part One  \n No.of Tickets: %d\n Price per ticket: 195 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*195);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Ponniyin Selvan: Part One  \n No.of Tickets: %d\n Price per ticket: 195 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*195);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Ponniyin Selvan: Part One  \n No.of Tickets: %d\n Price per ticket: 195 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*195);
                                            break; 
                                }
                        break;
                        case 4: printf("\nYou wished to watch Jailer (2023)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Jailer \n No.of Tickets: %d\n Price per ticket: 195 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*195);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Jailer \n No.of Tickets: %d\n Price per ticket: 195 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*195);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Jailer \n No.of Tickets: %d\n Price per ticket: 195 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*195);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Jailer \n No.of Tickets: %d\n Price per ticket: 195 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*195);
                                            break; 
                                }
                        break;
                        case 5: printf("\nYou wished to watch Leo (2023)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Leo \n No.of Tickets: %d\n Price per ticket: 215 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*215);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Leo \n No.of Tickets: %d\n Price per ticket: 215 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*215);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Leo \n No.of Tickets: %d\n Price per ticket: 215 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*215);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Leo \n No.of Tickets: %d\n Price per ticket: 215 (in rupees) \n The Total Cost: %d \n Timings: 9:30 pm", people, people*215);
                                            break; 
                                }
                        break;
                        default: printf("\nInvalid movie selection.\n"); break;
                    }
                    break;
                case 2: 
                    printf("You are entering INOX, Citi Centre");
                    printf("\nAvailable and Recommended Movies:\n1. Master (2021)\n2. Valimai (2022)\n3. Kathu Vaakula Rendu Kaadhal (2022)\n4. Thunivu (2023)\n5. Varisu (2023)");
                    scanf("%d", &movies);
                    switch(movies)
                    {
                        case 1: printf("\nYou wished to watch Master (2021)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Master \n No.of Tickets: %d\n Price per ticket: 220 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*220);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Master \n No.of Tickets: %d\n Price per ticket: 220 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*220);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Master \n No.of Tickets: %d\n Price per ticket: 220 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*220);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Master \n No.of Tickets: %d\n Price per ticket: 220 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*220);
                                            break; 
                                }
                        break;
                        case 2: printf("\nYou wished to watch Valimai (2022)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Valimai \n No.of Tickets: %d\n Price per ticket: 200 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*200);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Valimai \n No.of Tickets: %d\n Price per ticket: 200 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*200);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Valimai \n No.of Tickets: %d\n Price per ticket: 200 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*200);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Valimai \n No.of Tickets: %d\n Price per ticket: 200 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*200);
                                            break; 
                                }
                        break;
                        case 3: printf("\nYou wished to watch Kathu Vaakula Rendu Kaadhal (2022)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Kathu Vaakula Rendu Kaadhal \n No.of Tickets: %d\n Price per ticket: 150 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*150);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Kathu Vaakula Rendu Kaadhal \n No.of Tickets: %d\n Price per ticket: 150 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*150);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Kathu Vaakula Rendu Kaadhal \n No.of Tickets: %d\n Price per ticket: 150 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*150);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Kathu Vaakula Rendu Kaadhal \n No.of Tickets: %d\n Price per ticket: 150 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*150);
                                            break; 
                                }
                        break;
                        case 4: printf("\nYou wished to watch Thunivu (2023)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Thunivu \n No.of Tickets: %d\n Price per ticket: 200 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*200);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Thunivu \n No.of Tickets: %d\n Price per ticket: 200 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*200);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Thunivu \n No.of Tickets: %d\n Price per ticket: 200 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*200);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Thunivu \n No.of Tickets: %d\n Price per ticket: 200 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*200);
                                            break; 
                                }
                        break;
                        case 5: printf("\nYou wished to watch Varisu (2023)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Varisu \n No.of Tickets: %d\n Price per ticket: 195 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*195);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Varisu \n No.of Tickets: %d\n Price per ticket: 195 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*195);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Varisu \n No.of Tickets: %d\n Price per ticket: 195 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*195);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Varisu \n No.of Tickets: %d\n Price per ticket: 195 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*195);
                                            break; 
                                }
                        break;
                        default: printf("\nInvalid movie selection.\n"); break;
                    }
                    break;
                case 3: 
                    printf("You are entering Sathyam Cinemas, Royapettah");
                    printf("\nAvailable and Recommended Movies:\n1. Kadaisi Vivasayi (2022)\n2. Karnan (2021)\n3. Don (2022)\n4. Ayalaan (2023)\n5. Maanadu (2021)");
                    scanf("%d", &movies);  
                    switch(movies)
                    {
                        case 1: printf("\nYou wished to watch Kadaisi Vivasayi (2022)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Kadaisi Vivasayi \n No.of Tickets: %d\n Price per ticket: 180 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*180);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Kadaisi Vivasayi \n No.of Tickets: %d\n Price per ticket: 180 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*180);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Kadaisi Vivasayi \n No.of Tickets: %d\n Price per ticket: 180 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*180);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Kadaisi Vivasayi \n No.of Tickets: %d\n Price per ticket: 180 (in rupees) \n The Total Cost: %d \n Timings: 9:30 pm", people, people*180);
                                            break; 
                                }
                        break;
                        case 2: printf("\nYou wished to watch Karnan (2021)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Karnan \n No.of Tickets: %d\n Price per ticket: 195 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*195);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Karnan \n No.of Tickets: %d\n Price per ticket: 195 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*195);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Karnan \n No.of Tickets: %d\n Price per ticket: 195 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*195);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Karnan \n No.of Tickets: %d\n Price per ticket: 195 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*195);
                                            break; 
                                }
                        break;
                        case 3: printf("\nYou wished to watch Don (2022)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Don \n No.of Tickets: %d\n Price per ticket: 195 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*195);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Don \n No.of Tickets: %d\n Price per ticket: 195 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*195);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Don \n No.of Tickets: %d\n Price per ticket: 195 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*195);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Don \n No.of Tickets: %d\n Price per ticket: 195 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*195);
                                            break; 
                                }
                        break;
                        case 4: printf("\nYou wished to watch Ayalaan (2023)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Ayalaan \n No.of Tickets: %d\n Price per ticket: 195 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*195);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Ayalaan \n No.of Tickets: %d\n Price per ticket: 195 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*195);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Ayalaan \n No.of Tickets: %d\n Price per ticket: 195 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*195);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Ayalaan \n No.of Tickets: %d\n Price per ticket: 195 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*195);
                                            break; 
                                }
                        break;
                        case 5: printf("\nYou wished to watch Maanadu (2021)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Maanadu \n No.of Tickets: %d\n Price per ticket: 175 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*175);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Maanadu \n No.of Tickets: %d\n Price per ticket: 175 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*175);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Maanadu \n No.of Tickets: %d\n Price per ticket: 175 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*175);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Maanadu \n No.of Tickets: %d\n Price per ticket: 175 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*175);
                                            break; 
                                }
                        break;
                        default: printf("\nInvalid movie selection.\n"); break;
                    }
                    break;
                case 4: 
                    printf("You are entering Escape Cinemas, Express Avenue");
                    printf("\nAvailable and Recommended Movies:\n1. Soorarai Pottru (2020)\n2. KGF: Chapter 2 (2022)\n3. Mersal (2017)\n4. 2.0 (2018)\n5. Netrikann (2021)");
                    scanf("%d", &movies);
                    switch(movies)
                    {
                        case 1: printf("\nYou wished to watch Soorarai Pottru (2020)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Soorarai Pottru \n No.of Tickets: %d\n Price per ticket: 150 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*150);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Soorarai Pottru \n No.of Tickets: %d\n Price per ticket: 150 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*150);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Soorarai Pottru \n No.of Tickets: %d\n Price per ticket: 150 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*150);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Soorarai Pottru \n No.of Tickets: %d\n Price per ticket: 150 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*150);
                                            break; 
                                }
                        break;
                        case 2: printf("\nYou wished to watch KGF: Chapter 2 (Tamil Dubbed Version) (2022)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: KGF: Chapter 2 (Tamil) \n No.of Tickets: %d\n Price per ticket: 200 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*200);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: KGF: Chapter 2 (Tamil) \n No.of Tickets: %d\n Price per ticket: 200 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*200);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: KGF: Chapter 2 (Tamil) \n No.of Tickets: %d\n Price per ticket: 200 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*200);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: KGF: Chapter 2 (Tamil) \n No.of Tickets: %d\n Price per ticket: 200 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*200);
                                            break; 
                                }
                        break;
                        case 3: printf("\nYou wished to watch Mersal (2017)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Mersal \n No.of Tickets: %d\n Price per ticket: 150 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*150);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Mersal \n No.of Tickets: %d\n Price per ticket: 150 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*150);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Mersal \n No.of Tickets: %d\n Price per ticket: 150 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*150);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Mersal \n No.of Tickets: %d\n Price per ticket: 150 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*150);
                                            break; 
                                }
                        break;
                        case 4: printf("\nYou wished to watch 2.0 (2018)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: 2.0 \n No.of Tickets: %d\n Price per ticket: 300 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*300);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: 2.0 \n No.of Tickets: %d\n Price per ticket: 300 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*300);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: 2.0 \n No.of Tickets: %d\n Price per ticket: 300 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*300);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: 2.0 \n No.of Tickets: %d\n Price per ticket: 300 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*300);
                                            break; 
                                }
                        break;
                        case 5: printf("\nYou wished to watch Netrikann (2021)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Netrikann \n No.of Tickets: %d\n Price per ticket: 150 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*150);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Netrikann \n No.of Tickets: %d\n Price per ticket: 150 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*150);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Netrikann \n No.of Tickets: %d\n Price per ticket: 150 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*150);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Netrikann \n No.of Tickets: %d\n Price per ticket: 150 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*150);
                                            break; 
                                }
                        break;
                        default: printf("\nInvalid movie selection.\n"); break;
                    }
                    break;
                case 5: 
                    printf("You are entering Vetri Theatres, T. Nagar");
                    printf("\nAvailable and Recommended Movies:\n1. Vikram Vedha (2022)\n2. Raangi (2022)\n3. Naanum Rowdy Dhaan (2015)\n4. Raja Raja Chora (2022)\n5. Sita Ramam (2022)");
                    scanf("%d", &movies);
                    switch(movies)
                    {
                        case 1: printf("\nYou wished to watch Vikram Vedha (2022)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Vikram Vedha\n No.of Tickets: %d\n Price per ticket: 150 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*150);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Vikram Vedha \n No.of Tickets: %d\n Price per ticket: 150 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*150);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Vikram Vedha \n No.of Tickets: %d\n Price per ticket: 150 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*150);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Vikram Vedha \n No.of Tickets: %d\n Price per ticket: 150 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*150);
                                            break; 
                                }
                        break;
                        case 2: printf("\nYou wished to watch Raangi (2022)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Raangi \n No.of Tickets: %d\n Price per ticket: 150 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*150);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Raangi \n No.of Tickets: %d\n Price per ticket: 150 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*150);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Raangi \n No.of Tickets: %d\n Price per ticket: 150 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*150);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Raangi \n No.of Tickets: %d\n Price per ticket: 150 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*150);
                                            break; 
                                }
                        break;
                        case 3: printf("\nYou wished to watch Naanum Rowdy Dhaan (2015)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Naanum Rowdy Dhaan \n No.of Tickets: %d\n Price per ticket: 150 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*150);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Naanum Rowdy Dhaan \n No.of Tickets: %d\n Price per ticket: 150 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*150);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Naanum Rowdy Dhaan \n No.of Tickets: %d\n Price per ticket: 150 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*150);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Naanum Rowdy Dhaan \n No.of Tickets: %d\n Price per ticket: 150 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*150);
                                            break; 
                                }
                        break;
                        case 4: printf("\nYou wished to watch Raja Raja Chora (2022)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Raja Raja Chora \n No.of Tickets: %d\n Price per ticket: 150 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*150);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Raja Raja Chora \n No.of Tickets: %d\n Price per ticket: 150 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*150);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Raja Raja Chora \n No.of Tickets: %d\n Price per ticket: 150 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*150);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Raja Raja Chora \n No.of Tickets: %d\n Price per ticket: 150 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*150);
                                            break; 
                                }
                        break;
                        case 5: printf("\nYou wished to watch Sita Ramam (Tamil) (2022)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Sita Ramam (Tamil) \n No.of Tickets: %d\n Price per ticket: 175 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*175);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Sita Ramam (Tamil) \n No.of Tickets: %d\n Price per ticket: 175 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*175);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Sita Ramam (Tamil) \n No.of Tickets: %d\n Price per ticket: 175 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*175);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Sita Ramam (Tamil) \n No.of Tickets: %d\n Price per ticket: 175 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*175);
                                            break; 
                                }
                        break;
                        default: printf("\nInvalid movie selection.\n"); break;
                    }
                    break;
                default: printf("\nInvalid theatre selection in Chennai.\n"); break;
            }
            break;
        case 8: 
            printf("Your location is updated to Kochi");
            printf("\nYour location is updated to Kochi");
            printf("\nSelect the available theatres:\n1. PVR Cinemas, Lulu Mall\n2. INOX, South Park Mall\n3. Cinepolis, Oberon Mall\n4. Shenoys Theatre\n5. Sree Kumar Theatre");
            printf("\nEnter the number for your selected theatre: ");
            scanf("%d", &theatre);  
            
            switch(theatre)
            {
                case 1: 
                    printf("You are entering PVR Cinemas, Lulu Mall");
                    printf("\nAvailable and Recommended Movies:\n1. Hridayam (2022)\n2. Kaly (2023)\n3. 2018 (2023)\n4. Beast (2022)\n5. Aaraattu (2022)");
                    scanf("%d", &movies);
                    switch(movies)
                    {
                        case 1: printf("\nYou wished to watch Hridayam (2022)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Hridayam \n No.of Tickets: %d\n Price per ticket: 150 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*150);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Hridayam \n No.of Tickets: %d\n Price per ticket: 150 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*150);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Hridayam \n No.of Tickets: %d\n Price per ticket: 150 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*150);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Hridayam \n No.of Tickets: %d\n Price per ticket: 150 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*150);
                                            break; 
                                }
                        break;
                        case 2: printf("\nYou wished to watch Kaly (2023)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Kaly \n No.of Tickets: %d\n Price per ticket: 125 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*125);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Kaly \n No.of Tickets: %d\n Price per ticket: 125 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*125);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Kaly \n No.of Tickets: %d\n Price per ticket: 125 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*125);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Kaly \n No.of Tickets: %d\n Price per ticket: 125 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*125);
                                            break; 
                                }
                        break;
                        case 3: printf("\nYou wished to watch 2018 (2023)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: 2018 \n No.of Tickets: %d\n Price per ticket: 150 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*150);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: 2018 \n No.of Tickets: %d\n Price per ticket: 150 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*150);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: 2018 \n No.of Tickets: %d\n Price per ticket: 150 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*150);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: 2018 \n No.of Tickets: %d\n Price per ticket: 150 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*150);
                                            break; 
                                }
                        break;
                        case 4: printf("\nYou wished to watch Beast (2022)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Beast (Malayalam Dubbed Version) \n No.of Tickets: %d\n Price per ticket: 165 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*165);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Beast (Malayalam Dubbed Version) \n No.of Tickets: %d\n Price per ticket: 165 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*165);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Beast (Malayalam Dubbed Version) \n No.of Tickets: %d\n Price per ticket: 165 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*165);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Beast (Malayalam Dubbed Version) \n No.of Tickets: %d\n Price per ticket: 165 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*165);
                                            break; 
                                }
                        break;
                        case 5: printf("\nYou wished to watch Aaraattu (2022)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Aaraattu \n No.of Tickets: %d\n Price per ticket: 150 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*150);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Aaraattu \n No.of Tickets: %d\n Price per ticket: 150 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*150);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Aaraattu \n No.of Tickets: %d\n Price per ticket: 150 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*150);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Aaraattu \n No.of Tickets: %d\n Price per ticket: 150 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*150);
                                            break; 
                                }
                        break;
                        default: printf("\nInvalid movie selection.\n"); break;
                    }
                    break;  
                case 2: 
                    printf("You are entering INOX, South Park Mall");
                    printf("\nAvailable and Recommended Movies:\n1. Malayankunju (2022)\n2. Aarkkariyam (2022)\n3. Pada (2022)\n4. Kaduva (2022)\n5. Chidambaram (2023)");
                    scanf("%d", &movies);
                    switch(movies)
                    {
                        case 1: printf("\nYou wished to watch Malayankunju (2022)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Malayankunju \n No.of Tickets: %d\n Price per ticket: 145 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*145);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Malayankunju \n No.of Tickets: %d\n Price per ticket: 145 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*145);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Malayankunju \n No.of Tickets: %d\n Price per ticket: 145 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*145);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Malayankunju \n No.of Tickets: %d\n Price per ticket: 145 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*145);
                                            break; 
                                }
                        break;
                        case 2: printf("\nYou wished to watch Aarkkariyam (2022)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Aarkkariyam \n No.of Tickets: %d\n Price per ticket: 125 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*125);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Aarkkariyam \n No.of Tickets: %d\n Price per ticket: 125 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*125);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Aarkkariyam \n No.of Tickets: %d\n Price per ticket: 125 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*125);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Aarkkariyam \n No.of Tickets: %d\n Price per ticket: 125 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*125);
                                            break; 
                                }
                        break;
                        case 3: printf("\nYou wished to watch Pada (2022)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Pada \n No.of Tickets: %d\n Price per ticket: 125 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*125);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Pada \n No.of Tickets: %d\n Price per ticket: 125 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*125);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Pada \n No.of Tickets: %d\n Price per ticket: 125 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*125);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Pada \n No.of Tickets: %d\n Price per ticket: 125 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*125);
                                            break; 
                                }
                        break;
                        case 4: printf("\nYou wished to watch Kaduva (2022)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Kaduva \n No.of Tickets: %d\n Price per ticket: 145 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*145);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Kaduva \n No.of Tickets: %d\n Price per ticket: 145 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*145);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Kaduva \n No.of Tickets: %d\n Price per ticket: 145 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*145);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Kaduva \n No.of Tickets: %d\n Price per ticket: 145 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*145);
                                            break; 
                                }
                        break;
                        case 5: printf("\nYou wished to watch Chidambaram (2023)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Chidambaram \n No.of Tickets: %d\n Price per ticket: 145 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*145);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Chidambaram \n No.of Tickets: %d\n Price per ticket: 145 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*145);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Chidambaram \n No.of Tickets: %d\n Price per ticket: 145 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*145);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Chidambaram \n No.of Tickets: %d\n Price per ticket: 145 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*145);
                                            break; 
                                }
                        break;
                        default: printf("\nInvalid movie selection.\n"); break;
                    }
                    break;
                case 3: 
                    printf("You are entering Cinepolis, Oberon Mall");
                    printf("\nAvailable and Recommended Movies:\n1. Thiruvin Kural (2023)\n2. Nna Thaan Case Kodu (2022)\n3. Bheemante Vazhi (2022)\n4. Minnal Murali (2022)\n5. Anugraheethan Antony (2022)");
                    scanf("%d", &movies);  
                    switch(movies)
                    {
                    case 1: printf("\nYou wished to watch Thiruvin Kural (2023)\n"); 
                    printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Thiruvin Kural \n No.of Tickets: %d\n Price per ticket: 150 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*150);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Thiruvin Kural \n No.of Tickets: %d\n Price per ticket: 150 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*150);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Thiruvin Kural \n No.of Tickets: %d\n Price per ticket: 150 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*150);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Thiruvin Kural \n No.of Tickets: %d\n Price per ticket: 150 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*150);
                                            break; 
                                }
                    break;
                        case 2: printf("\nYou wished to watch Nna Thaan Case Kodu (2022)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Nna Thaan Case Kodu \n No.of Tickets: %d\n Price per ticket: 145 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*145);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Nna Thaan Case Kodu \n No.of Tickets: %d\n Price per ticket: 145 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*145);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Nna Thaan Case Kodu \n No.of Tickets: %d\n Price per ticket: 145 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*145);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Nna Thaan Case Kodu \n No.of Tickets: %d\n Price per ticket: 145 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*145);
                                            break; 
                                }
                        break;
                        case 3: printf("\nYou wished to watch Bheemante Vazhi (2022)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Bheemante Vazhi \n No.of Tickets: %d\n Price per ticket: 135 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*135);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Bheemante Vazhi \n No.of Tickets: %d\n Price per ticket: 135 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*135);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Bheemante Vazhi \n No.of Tickets: %d\n Price per ticket: 135 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*135);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Bheemante Vazhi \n No.of Tickets: %d\n Price per ticket: 135 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*135);
                                            break; 
                                }
                        break;
                        case 4: printf("\nYou wished to watch Minnal Murali (2022)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Minnal Murali \n No.of Tickets: %d\n Price per ticket: 150 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*150);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Minnal Murali \n No.of Tickets: %d\n Price per ticket: 150 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*150);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Minnal Murali \n No.of Tickets: %d\n Price per ticket: 150 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*150);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Minnal Murali \n No.of Tickets: %d\n Price per ticket: 150 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*150);
                                            break; 
                                }
                        break;
                        case 5: printf("\nYou wished to watch Anugraheethan Antony (2022)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Anugraheethan Antony \n No.of Tickets: %d\n Price per ticket: 135 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*135);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Anugraheethan Antony \n No.of Tickets: %d\n Price per ticket: 135 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*135);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Anugraheethan Antony \n No.of Tickets: %d\n Price per ticket: 135 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*135);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Anugraheethan Antony \n No.of Tickets: %d\n Price per ticket: 135 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*135);
                                            break; 
                                }
                        break;
                        default: printf("\nInvalid movie selection.\n"); break;
                    }
                    break;
                case 4: 
                    printf("You are entering Shenoys Theatre");
                    printf("\nAvailable and Recommended Movies:\n1. Aaraattu (2022)\n2. C U Soon (2020)\n3. Marakkar: Lion of the Arabian Sea (2021)\n4. Super Sharanya (2022)\n5. Salute (2022)");
                    scanf("%d", &movies);
                    switch(movies)
                    {
                        case 1: printf("\nYou wished to watch Aaraattu (2022)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Aaraattu \n No.of Tickets: %d\n Price per ticket: 150 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*150);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Aaraattu \n No.of Tickets: %d\n Price per ticket: 150 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*150);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Aaraattu \n No.of Tickets: %d\n Price per ticket: 150 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*150);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Aaraattu \n No.of Tickets: %d\n Price per ticket: 150 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*150);
                                            break; 
                                }
                        break;
                        case 2: printf("\nYou wished to watch C U Soon (2020)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: C U Soon \n No.of Tickets: %d\n Price per ticket: 125 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*125);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: C U Soon \n No.of Tickets: %d\n Price per ticket: 125 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*125);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: C U Soon \n No.of Tickets: %d\n Price per ticket: 125 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*125);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: C U Soon \n No.of Tickets: %d\n Price per ticket: 125 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*125);
                                            break; 
                                }
                        break;
                        case 3: printf("\nYou wished to watch Marakkar: Lion of the Arabian Sea (2021)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Marakkar: Lion of the Arabian Sea \n No.of Tickets: %d\n Price per ticket: 175 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*175);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Marakkar: Lion of the Arabian Sea \n No.of Tickets: %d\n Price per ticket: 175 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*175);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Marakkar: Lion of the Arabian Sea \n No.of Tickets: %d\n Price per ticket: 175 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*175);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Marakkar: Lion of the Arabian Sea \n No.of Tickets: %d\n Price per ticket: 175 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*175);
                                            break; 
                                }
                        break;
                        case 4: printf("\nYou wished to watch Super Sharanya (2022)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Super Sharanya \n No.of Tickets: %d\n Price per ticket: 110 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*110);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Super Sharanya \n No.of Tickets: %d\n Price per ticket: 110 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*110);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Super Sharanya \n No.of Tickets: %d\n Price per ticket: 110 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*110);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Super Sharanya \n No.of Tickets: %d\n Price per ticket: 110 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*110);
                                            break; 
                                }
                        break;
                        case 5: printf("\nYou wished to watch Salute (2022)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Salute \n No.of Tickets: %d\n Price per ticket: 125 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*125);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Salute \n No.of Tickets: %d\n Price per ticket: 125 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*125);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Salute \n No.of Tickets: %d\n Price per ticket: 125 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*125);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Salute \n No.of Tickets: %d\n Price per ticket: 125 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*125);
                                            break; 
                                }
                        break;
                        default: printf("\nInvalid movie selection.\n"); break;
                    }
                    break;
                case 5: 
                    printf("You are entering Sree Kumar Theatre");
                    printf("\nAvailable and Recommended Movies:\n1. Thallumaala (2022)\n2. Meesa Madhavan (2022)\n3. Kaly (2023)\n4. Driving Licence (2022)\n5. Oru Thekkan Thallu Case (2022)");
                    scanf("%d", &movies);
                    switch(movies)
                    {
                        case 1: printf("\nYou wished to watch Thallumaala (2022)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Thallumaala \n No.of Tickets: %d\n Price per ticket: 135 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*135);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Thallumaala \n No.of Tickets: %d\n Price per ticket: 135 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*135);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Thallumaala \n No.of Tickets: %d\n Price per ticket: 135 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*135);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Thallumaala \n No.of Tickets: %d\n Price per ticket: 135 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*135);
                                            break; 
                                }
                        break;
                        case 2: printf("\nYou wished to watch Meesa Madhavan (2022)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Meesa Madhavan \n No.of Tickets: %d\n Price per ticket: 125 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*125);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Meesa Madhavan \n No.of Tickets: %d\n Price per ticket: 125 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*125);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Meesa Madhavan \n No.of Tickets: %d\n Price per ticket: 125 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*125);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Meesa Madhavan \n No.of Tickets: %d\n Price per ticket: 125 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*125);
                                            break; 
                                }
                        break;
                        case 3: printf("\nYou wished to watch Kaly (2023)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Kaly \n No.of Tickets: %d\n Price per ticket: 125 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*125);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Kaly \n No.of Tickets: %d\n Price per ticket: 125 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*125);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Kaly \n No.of Tickets: %d\n Price per ticket: 125 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*125);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Kaly \n No.of Tickets: %d\n Price per ticket: 125 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*125);
                                            break; 
                                }
                        break;
                        case 4: printf("\nYou wished to watch Driving Licence (2022)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Driving Licence \n No.of Tickets: %d\n Price per ticket: 145 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*145);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Driving Licence \n No.of Tickets: %d\n Price per ticket: 145 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*145);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Driving Licence \n No.of Tickets: %d\n Price per ticket: 145 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*145);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Driving Licence \n No.of Tickets: %d\n Price per ticket: 145 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*145);
                                            break; 
                                }
                        break;
                        case 5: printf("\nYou wished to watch Oru Thekkan Thallu Case (2022)\n"); 
                        printf("Available shows: \n 1 12:00pm \n 2. 3:00pm \n 3. 6:15 pm \n 4. 9:30 pm \n");
                                scanf("\n %d", &timing);
                                switch(timing)
                                {
                                    case 1: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Oru Thekkan Thallu Case \n No.of Tickets: %d\n Price per ticket: 110 (in rupees) \n The Total Cost: %d \n Timings: 12:00 pm", people, people*110);
                                            break;
                                    case 2: 
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Oru Thekkan Thallu Case \n No.of Tickets: %d\n Price per ticket: 110 (in rupees) \n The Total Cost: %d \n Timings: 3:00 pm", people, people*110);
                                            break; 
                                    case 3:           
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Oru Thekkan Thallu Case \n No.of Tickets: %d\n Price per ticket: 110 (in rupees) \n The Total Cost: %d \n Timings: 6:15 pm", people, people*110);
                                            break; 
                                    case 4:
                                            printf("\n How many people: ");
                                            scanf("\n %d", &people);
                                            printf("\n -----BOOKING CONFIRMATION----- \n Movie: Oru Thekkan Thallu Case \n No.of Tickets: %d\n Price per ticket: 110 (in rupees) \n The Total Cost: %d \n Timings: 9: 30 pm", people, people*110);
                                            break; 
                                }
                        break;
                        default: printf("\nInvalid movie selection.\n"); break;
                    }
                    break;
                default: printf("\nInvalid theatre selection in Kochi.\n"); break;
            }
            break;
    }  
 }   
 return 0;
}     