#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Token {
    int id;
    int x, y;
};

struct Card {
    int player;
    int a, b;
};

bool belowLine(int x, int y, int a, int b) {
    return y < a * x + b;
}

vector<vector<int>> distributeTokens(vector<Token>& tokens, vector<Card>& cards) {
    vector<vector<int>> playerTokens(cards.size());
    sort(tokens.begin(), tokens.end(), [](const Token& t1, const Token& t2) {
        return t1.y < t2.y;
    });

    for (const auto& card : cards) {
        for (const auto& token : tokens) {
            if (belowLine(token.x, token.y, card.a, card.b)) {
                playerTokens[card.player - 1].push_back(token.id);
            }
        }
    }

    return playerTokens;
}

int main() {
    int T;
    cin >> T;

    vector<Token> tokens(T);
    for (int i = 0; i < T; i++) {
        cin >> tokens[i].x >> tokens[i].y;
        tokens[i].id = i + 1;
    }

    int P;
    cin >> P;

    vector<Card> cards(P);
    for (int i = 0; i < P; i++) {
        cin >> cards[i].a >> cards[i].b;
        cards[i].player = i + 1;
    }

    vector<vector<int>> playerTokens = distributeTokens(tokens, cards);

    for (const auto& tokens : playerTokens) {
        cout << tokens.size() << " ";
        for (int token : tokens) {
            cout << token << " ";
        }
        cout << endl;
    }

    return 0;
}
