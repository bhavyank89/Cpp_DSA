Traverse the string in steps of 2k.

    This gives us the start of each 2k block.

    For each such block :

    Reverse the substring from i to i +
    k - 1.

    Be careful of bounds : if fewer than k characters remain,
    reverse till the end of the string(min(i + k, n)).

    Return the modified string.
