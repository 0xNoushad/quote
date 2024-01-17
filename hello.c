#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_QUOTES 100
 
int generateRandomNumber(int max) {
    return rand() % max;
}

// Function to display a random quote
void displayRandomQuote(char *quotes[]) {
    int randomIndex = generateRandomNumber(NUM_QUOTES);
    printf("Random Quote: %s\n", quotes[randomIndex]);
}

int main() {
 
    srand(time(NULL));

    char *quotes[NUM_QUOTES] = {
          "The only way to do great work is to love what you do. - Steve Jobs",
        "In three words I can sum up everything I've learned about life: it goes on. - Robert Frost",
        "The only limit to our realization of tomorrow will be our doubts of today. - Franklin D. Roosevelt",
        "The greatest glory in living lies not in never falling, but in rising every time we fall. - Nelson Mandela",
        "Success is not final, failure is not fatal: It is the courage to continue that counts. - Winston Churchill",
         "Life isnt about getting and having, it s about giving and being.",
        "If you judge people, you have no time to love them.",
        "We can do anything, but we can t do everything.",
        "Success is not final, failure is not fatal: It is the courage to continue that counts.",
        "Whenever youre feeling down, think of a number of people in the world that would be delighted to have what you have.",
        "In three words I can sum up everything I ve learned about life: it goes on.",
        "Keep your eyes open and you will see the wonderful things happening to the people you love. The best place to find happiness is in the hearts of those who love you.",
        "Life is like a snowflake in a storm: every single snowflake is beautiful and unique.",
        "Every day may not be good, but there is something good in every day.",
        "A smile is the easiest way to say thanks, but it also costs nothing.",
        "Believe in yourself, because you are braver than you think, stronger than you seem, and smarter than you know.",
        "A great day starts with a gratitude list in your head, not on your to-do list.",
        "A single conversation can change your entire day.",
        "Do the best you can until you know better. Then when you know better, do better.",
        "Do one thing every day that scares you.",
        "Education is the most powerful weapon which you can use to change the world.",
        "Forgiveness does not mean giving up. It means accepting and healing.",
        "God is inside you; you do not need to seek him outside.",
        "If you cannot find a comfortable place, be a comfortable person.",
        "Its better to be alone sometimes in order to gain the strength to be with others.",
        "Its hard to see yourself clearly when youre surrounded by mirrors.",
        "Life begins at the end of your comfort zone.",
        "Many of lifes failures are people who did not realize how close they were to success when they gave up.",
        "The secret of success is constancy to purpose.",
        "The worst thing in life is not having enough courage to express the minds own thought. Worse than that is having enough courage and lacking the power to follow it through with its inevitable end, success or failure.",
        "To keep the body in good health is a duty; otherwise, we shall not be able to keep our mind strong and clear.",
        "Try not to become a person of success, but rather try to become a person of value.",
        "Whats yours in life, and then be a grateful person for the opportunities and life you have.",
        "Your heart and soul rule your life and if you dont listen to them, you cant possibly manage your life well.",
        "The biggest mistake people make is not learning from their mistakes and failing at the same thing over and over.",
        "Life is what happens when youre busy making other plans.",
        "Learn to listen. Often hearing the silent words that people are too afraid to speak.",
        "One must have a mental conception of oneself, a notion of the character and destiny one would have, in order to perform great actions.",
        "Its always the little mistakes that count most.",
        "One way to keep fear at bay is to become competent at the thing that scares you.",
        "We cannot direct the wind, but we can adjust the sails and reach our desired destination.",
        "It is during our darkest moments that we must focus to see the light.",
        "One person with courage is a majority.",
        "We have no limits to our ability to grow. The only limitations we have are those we set in our minds.", 
                "The only way to do great work is to love what you do. - Steve Jobs",
        "In three words I can sum up everything I've learned about life: it goes on. - Robert Frost",
        "The only limit to our realization of tomorrow will be our doubts of today. - Franklin D. Roosevelt",
        "The greatest glory in living lies not in never falling, but in rising every time we fall. - Nelson Mandela",
        "Success is not final, failure is not fatal: It is the courage to continue that counts. - Winston Churchill",
         "Life isnt about getting and having, it s about giving and being.",
        "If you judge people, you have no time to love them.",
        "We can do anything, but we can t do everything.",
        "Success is not final, failure is not fatal: It is the courage to continue that counts.",
        "Whenever youre feeling down, think of a number of people in the world that would be delighted to have what you have.",
        "In three words I can sum up everything I ve learned about life: it goes on.",
        "Keep your eyes open and you will see the wonderful things happening to the people you love. The best place to find happiness is in the hearts of those who love you.",
        "Life is like a snowflake in a storm: every single snowflake is beautiful and unique.",
        "Every day may not be good, but there is something good in every day.",
        "A smile is the easiest way to say thanks, but it also costs nothing.",
        "Believe in yourself, because you are braver than you think, stronger than you seem, and smarter than you know.",
        "A great day starts with a gratitude list in your head, not on your to-do list.",
        "A single conversation can change your entire day.",
        "Do the best you can until you know better. Then when you know better, do better.",
        "Do one thing every day that scares you.",
        "Education is the most powerful weapon which you can use to change the world.",
        "Forgiveness does not mean giving up. It means accepting and healing.",
        "God is inside you; you do not need to seek him outside.",
        "If you cannot find a comfortable place, be a comfortable person.",
        "Its better to be alone sometimes in order to gain the strength to be with others.",
        "Its hard to see yourself clearly when youre surrounded by mirrors.",
        "Life begins at the end of your comfort zone.",
        "Many of lifes failures are people who did not realize how close they were to success when they gave up.",
        "The secret of success is constancy to purpose.",
        "The worst thing in life is not having enough courage to express the minds own thought. Worse than that is having enough courage and lacking the power to follow it through with its inevitable end, success or failure.",
        "To keep the body in good health is a duty; otherwise, we shall not be able to keep our mind strong and clear.",
        "Try not to become a person of success, but rather try to become a person of value.",
        "Whats yours in life, and then be a grateful person for the opportunities and life you have.",
        "Your heart and soul rule your life and if you dont listen to them, you cant possibly manage your life well.",
        "The biggest mistake people make is not learning from their mistakes and failing at the same thing over and over.",
   
    };

 
    printf("Click to get a random quote:\n");

    while (1) {
        getchar();  
        displayRandomQuote(quotes);
        printf("Click for another random quote or press Ctrl+C to exit.\n");
    }

    return 0;
}
