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

    // ‰Šú‚ÌŽRŽèü‰wƒŠƒXƒg‚ðì¬
    yamanoteStations.push_back(YamanoteStation("Tokyo", 1885));
    yamanoteStations.push_back(YamanoteStation("Ueno", 1885));
    yamanoteStations.push_back(YamanoteStation("Shinagawa", 1885));
    yamanoteStations.push_back(YamanoteStation("Shibuya", 1885));
    yamanoteStations.push_back(YamanoteStation("Shinjuku", 1885));
    yamanoteStations.push_back(YamanoteStation("Ikebukuro", 1885));

    // ¼“ú•é—¢‰w‚ð‘}“ü
    auto iter = std::find_if(yamanoteStations.begin(), yamanoteStations.end(),
                             [](const YamanoteStation& station) { return station.openingYear > 1970; });
    yamanoteStations.insert(iter, YamanoteStation("Nishi-Nippori", 1971));

    // ‚—ÖƒQ[ƒgƒEƒFƒC‰w‚ð‘}“ü
    iter = std::find_if(yamanoteStations.begin(), yamanoteStations.end(),
                        [](const YamanoteStation& station) { return station.openingYear > 2020; });
    yamanoteStations.insert(iter, YamanoteStation("Takanawa Gateway", 2020));

    // 1970”N‚Ì‰wˆê——‚ð•\Ž¦
    std::cout << "1970”N‚ÌŽRŽèü‰wˆê——F" << std::endl;
    for (const auto& station : yamanoteStations) {
        if (station.openingYear <= 1970) {
            std::cout << station.name << std::endl;
        }
    }

    // 2019”N‚Ì‰wˆê——‚ð•\Ž¦
    std::cout << "\n2019”N‚ÌŽRŽèü‰wˆê——F" << std::endl;
    for (const auto& station : yamanoteStations) {
        if (station.openingYear <= 2019) {
            std::cout << station.name << std::endl;
        }
    }

    // 2022”N‚Ì‰wˆê——‚ð•\Ž¦
    std::cout << "\n2022”N‚ÌŽRŽèü‰wˆê——F" << std::endl;
    for (const auto& station : yamanoteStations) {
        if (station.openingYear <= 2022) {
            std::cout << station.name << std::endl;
        }
    }

    return 0;
}