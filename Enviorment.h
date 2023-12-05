
#ifndef EXAMENT3_ENVIORMENT_H
#define EXAMENT3_ENVIORMENT_H

#include <map>
#include <string>
#include <variant>

class Enviorment {
public:
    using symbol = std::variant<int, float, std::string>;
    void insert(const std::string& symbol, const Symbol& value);
    symbol lookup(const std::string& symbol) const;

private:
    std::map<std::string, symbol> symbols_;
};


#endif //EXAMENT3_ENVIORMENT_H
