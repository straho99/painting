#include <iostream>
using namespace std;

int main() {
    int fence_length;
    cin >> fence_length;
    
    int painted_fence[fence_length];
    
    for (int i = 0; i < fence_length; i++) {
        cin >> painted_fence[i];
    }
    
    int used_colors = 0, used_quantity = 0;
    
    for (int i = 0; i < fence_length; i++) {
        if (painted_fence[i] == 0) {
            continue;
        }
        
        if (used_colors == 0) {
            used_colors++;
            used_quantity++;
            continue;
        }
        
        if (painted_fence[i] != painted_fence[i-1]) {
            used_colors++;
        }
        
        used_quantity++;
    }
    
    cout << used_colors << " " << used_quantity << endl;
    
    return 0;
}
