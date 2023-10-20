#include <iostream>
#include <vector>

using namespace std;

// Estrutura para representar um corredor
struct Runner {
    int startTime;
    int speed;
};

// Estrutura para representar uma foto
struct Photo {
    int time;
    int start;
    int end;
};

// Função para contar o número de fotos de descarte para um corredor em um dado momento
int countDiscardPhotos(const Runner& runner, const vector<Photo>& photos) {
    int discardCount = 0;
    for (const Photo& photo : photos) {
        int position = (photo.time - runner.startTime) * runner.speed;
        if (position < photo.start || position > photo.end) {
            discardCount++;
        }
    }
    return discardCount;
}

int main() {
    int R;
    cin >> R;

    vector<Runner> runners(R);
    for (int i = 0; i < R; i++) {
        cin >> runners[i].startTime >> runners[i].speed;
    }

    int P;
    cin >> P;

    vector<Photo> photos(P);
    for (int i = 0; i < P; i++) {
        cin >> photos[i].time >> photos[i].start >> photos[i].end;
    }

    int Q;
    cin >> Q;

    for (int i = 0; i < Q; i++) {
        int T, S;
        cin >> T >> S;
        Runner johnny = {T, S};
        int discardCount = countDiscardPhotos(johnny, photos);
        cout << discardCount << endl;
    }

    return 0;
}
