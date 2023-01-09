namespace Audio
{
    struct Card
    {

    };

    void init() {}
    void useCard(Card c) {}
}

int main()
{
    Audio::Card c;
    // init();  //error.
    useCard(c);
}