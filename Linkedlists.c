typedef struct CardType Card;
struct CardType {
    char value;
    char suit;
    Card *next;
};

Card *list = NULL;

Card * CreateCard(char value, char suit) {
    Card *newCard;
// allocate a new node
    newCard = (Card*)malloc(sizeof(Deck));
// initialize node data
    newCard->value = value;
    newCard->suit = suit;
// initialize pointer
    newCard->next = NULL;
    return newCard;
}