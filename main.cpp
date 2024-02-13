#include <iostream>
#include <list>

class YamanoteStation {
public:
    const char* name;
    int openingYear;

    YamanoteStation(const char* stationName, int year) : name(stationName), openingYear(year) {}
};

int main() {
    std::list<YamanoteStation> yamanoteStations;

    // 初期の山手線駅リストを作成
    yamanoteStations.push_back(YamanoteStation("Tokyo", 1885));
    yamanoteStations.push_back(YamanoteStation("Ueno", 1885));
    yamanoteStations.push_back(YamanoteStation("Shinagawa", 1885));
    yamanoteStations.push_back(YamanoteStation("Shibuya", 1885));
    yamanoteStations.push_back(YamanoteStation("Shinjuku", 1885));
    yamanoteStations.push_back(YamanoteStation("Ikebukuro", 1885));

    // 西日暮里駅を挿入
    auto iter = std::find_if(yamanoteStations.begin(), yamanoteStations.end(),
                             [](const YamanoteStation& station) { return station.openingYear > 1970; });
    yamanoteStations.insert(iter, YamanoteStation("Nishi-Nippori", 1971));

    // 高輪ゲートウェイ駅を挿入
    iter = std::find_if(yamanoteStations.begin(), yamanoteStations.end(),
                        [](const YamanoteStation& station) { return station.openingYear > 2020; });
    yamanoteStations.insert(iter, YamanoteStation("Takanawa Gateway", 2020));

    // 1970年の駅一覧を表示
    std::cout << "1970年の山手線駅一覧：" << std::endl;
    for (const auto& station : yamanoteStations) {
        if (station.openingYear <= 1970) {
            std::cout << station.name << std::endl;
        }
    }

    // 2019年の駅一覧を表示
    std::cout << "\n2019年の山手線駅一覧：" << std::endl;
    for (const auto& station : yamanoteStations) {
        if (station.openingYear <= 2019) {
            std::cout << station.name << std::endl;
        }
    }

    // 2022年の駅一覧を表示
    std::cout << "\n2022年の山手線駅一覧：" << std::endl;
    for (const auto& station : yamanoteStations) {
        if (station.openingYear <= 2022) {
            std::cout << station.name << std::endl;
        }
    }

    return 0;
}