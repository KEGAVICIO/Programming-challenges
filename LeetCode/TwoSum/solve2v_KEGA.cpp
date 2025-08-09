#include <vector>
#include <unordered_map>  // Para utilizar unordered_map
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> num_map;  // Mapa para almacenar números y sus índices
        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i];
            
            // Verificamos si el complemento ya se encuentra en el mapa
            if (num_map.find(complement) != num_map.end()) {
                return {num_map[complement], i};  // Si lo encontramos, retornamos los índices
            }
            
            // Si no lo encontramos, almacenamos el número con su índice en el mapa
            num_map[nums[i]] = i;
        }
        return {};  // Si no hay solución, retornamos un vector vacío
    }
};

