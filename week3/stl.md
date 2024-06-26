# STL CONTAINERS

## Vectors

- For vectors size is unknown
- Therefore a `capacity` is defined
- size $\neq$ capacity
- Many `pushback` operations change its capacity many times. 
- `reserve(n)` ensures that the vector has enough memory to store `n` items. 
- THis is a very important optimization. 