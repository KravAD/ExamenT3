
#ifndef EXAMENT3_ENVIORMENT_H
#define EXAMENT3_ENVIORMENT_H

#include <map>
#include <string>
#include <variant>
using namespace std;
class Enviorment {
public:
    using symbol = variant<int, float, string>;
    void insert(const string& symbol, const Enviorment::symbol& value);
    symbol lookup(const string& symbol) const;

private:
    map<string, symbol> symbols_;
};


#endif //EXAMENT3_ENVIORMENT_H
