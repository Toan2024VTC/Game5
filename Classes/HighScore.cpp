//#include "HighScore.h"
//
//HighScore::HighScore() {
//    loadScoresFromFile("highscores.txt");
//}
//
//HighScore::~HighScore() {
//    saveScoresToFile("highscores.txt");
//}
//
//void HighScore::addScore(const std::string& name, int score) {
//    PlayerScore newScore = { name, score };
//    _scores.push_back(newScore);
//    std::sort(_scores.begin(), _scores.end(), [](const PlayerScore& a, const PlayerScore& b) {
//        return a.score > b.score; // Sắp xếp theo điểm giảm dần
//        });
//    if (_scores.size() > 3) {
//        _scores.resize(3); // Giữ lại chỉ 3 điểm cao nhất
//    }
//}
//
//std::vector<PlayerScore> HighScore::getTopScores() {
//    return _scores;
//}
//
//void HighScore::saveScoresToFile(const std::string& filename) {
//    std::ofstream outFile(filename);
//    for (const auto& score : _scores) {
//        outFile << score.name << " " << score.score << std::endl;
//    }
//    outFile.close();
//}
//
//void HighScore::loadScoresFromFile(const std::string& filename) {
//    std::ifstream inFile(filename);
//    std::string name;
//    int score;
//    while (inFile >> name >> score) {
//        addScore(name, score);
//    }
//    inFile.close();
//}
