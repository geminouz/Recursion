## D(n) = 1
## C(n) = 1
## Somma di 2 complessità unitarie = 1
## Equazione alle ricorrenze:
    $$T(n) = 1 + T(n-1)$$
    $$T(1) = 1$$
## Risoluzione per sviluppo:
    $$T(n-1) = 1 + T(n-2)$$
    $$T(n-2) = 1 + T(n-3)$$
## Sostituisco in T(n):
    $$T(n) = 1 + 1 + 1 + T(n-3)$$
## condizione di terminazione:
    $$n-i = 1 -> i = n-1$$