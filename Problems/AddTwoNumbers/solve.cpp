class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy = new ListNode(0);  // Nodo ficticio para simplificar la lógica
        ListNode* current = dummy;  // Puntero para la nueva lista resultante
        int carry = 0;  // Variable para almacenar el acarreo

        // Recorre ambas listas l1 y l2 hasta que ambas sean nullptr
        while (l1 != nullptr || l2 != nullptr || carry != 0) {
            int sum = carry;  // Empezamos con el acarreo

            if (l1 != nullptr) {
                sum += l1->val;  // Sumar el valor de l1
                l1 = l1->next;  // Avanzar al siguiente nodo de l1
            }

            if (l2 != nullptr) {
                sum += l2->val;  // Sumar el valor de l2
                l2 = l2->next;  // Avanzar al siguiente nodo de l2
            }

            carry = sum / 10;  // Calcular el nuevo acarreo
            current->next = new ListNode(sum % 10);  // Crear un nuevo nodo con el valor de la suma (sin acarreo)
            current = current->next;  // Mover al siguiente nodo en la nueva lista
        }

        return dummy->next;  // Retornar la lista resultante (sin el nodo ficticio)
    }
};
