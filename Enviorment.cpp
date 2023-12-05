#include "Enviorment.h"
#include <stdexcept>

void Enviorment::insert(const std::string& symbol, const Enviorment::symbol& value) {
    if (symbols_.find(symbol) != symbols_.end()) {
        throw std::runtime_error("Symbol already exists");
    }
    symbols_[symbol] = value;
}

Enviorment::symbol Enviorment::lookup(const std::string& symbol) const{
    if (symbols_.find(symbol) == symbols_.end()) {
        throw std::runtime_error("Symbol does not exist");
    }
}