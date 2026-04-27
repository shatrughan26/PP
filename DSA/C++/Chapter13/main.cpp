#include "account.h"

int main() {
    Account acc;
    
    if (acc.init("John Doe", 12345, 5000.50)) {
        acc.display();
    }
    
    return 0;
}
