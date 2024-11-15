#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>

using namespace std;

// Classe que representa uma cidade
class City {
public:
    string name;
    unordered_set<string> neighbors;

    City(const string& n) : name(n) {}
};

// Função para realizar a busca em profundidade a partir de uma cidade
void dfs(const City& city, unordered_map<string, City>& cities, unordered_set<string>& visited) {
    visited.insert(city.name);

    for (const string& neighbor : city.neighbors) {
        if (visited.find(neighbor) == visited.end()) {
            dfs(cities[neighbor], cities, visited);
        }
    }
}

// Função para identificar os segmentos críticos de estradas
void findCriticalSegments(const unordered_map<string, City>& cities) {
    unordered_set<string> visited;

    for (const auto& cityPair : cities) {
        const City& city = cityPair.second;

        // Faz a busca em profundidade a partir de cada cidade
        dfs(city, cities, visited);

        // Verifica se algum segmento de estrada não foi percorrido
        for (const string& neighbor : city.neighbors) {
            if (visited.find(neighbor) == visited.end()) {
                // O segmento de estrada é crítico
                cout << city.name << " " << neighbor << endl;
            }
        }

        // Limpa o conjunto de visitados para a próxima cidade
        visited.clear();
    }

    if (visited.empty()) {
        // Não existem segmentos críticos
        cout << "Nenhuma" << endl;
    }

    cout << endl;
}

int main() {
    int N, M;

    while (true) {
        cin >> N >> M;

        if (N == 0 && M == 0) {
            break;
        }

        unordered_map<string, City> cities;

        // Lê o nome das cidades
        for (int i = 0; i < N; i++) {
            string cityName;
            cin >> cityName;
            cities[cityName] = City(cityName);
        }

        // Lê os segmentos de estrada
        for (int i = 0; i < M; i++) {
            string city1, city2;
            cin >> city1 >> city2;
            cities[city1].neighbors.insert(city2);
        }

        findCriticalSegments(cities);
    }

    return 0;
}
