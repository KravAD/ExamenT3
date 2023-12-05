#include "Enviorment.h"
#include <stdexcept>
using namespace std;

void Enviorment::insert(const string& symbol, const Enviorment::symbol& value) {
    if (symbols_.find(symbol) != symbols_.end()) {
        throw runtime_error("Symbol already exists");
    }
    symbols_[symbol] = value;
}

Enviorment::symbol Enviorment::lookup(const string& symbol) const{
    if (symbols_.find(symbol) == symbols_.end()) {
        throw runtime_error("Symbol does not exist");
    }
    return symbols_.at(symbol);
}

int main() {

    Enviorment env;

    env.insert("entero", 10);
    env.insert("float", 4.5f);
    env.insert("string", string("Se viene cero"));

    return 0;
}

