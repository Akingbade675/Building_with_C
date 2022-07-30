# Closest elevator

### Description


Given 2 elevators (named "left" and "right" in a building with 3 floors (numbered `0` to `2`), erite a function `elevator` accepting 3 arguments (in order) :

- `left` = the current floor of the left elevator
- `right` = the current floor of the right elevator
- `call` = the floor that called an elevator

It should return the name of the elevator closest to the called elevator (`"left"` / `"right"`)

In the case where both elevator are equally distant from the called elevator, choose the elevator to the right.

You can assume that the input will always be valid integers from 0-2.

Examples:

```elevator(0, 1, 0); // => "left"
elevator(0, 1, 1); // => "right"
elevator(0, 1, 2); // => "right"
elevator(0, 0, 0); // => "right"
elevator(0, 2, 1); // => "right"
