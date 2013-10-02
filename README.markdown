## Smith-Waterman Similarity Matrix Calculator

Here we we're doing a multi-threaded approach for optimization and speeding up the process for calculating the simialrity matrix in the Smith-Waterman algorithm! Which you can read about it [here](http://en.wikipedia.org/wiki/Smith%E2%80%93Waterman_algorithm).

The result of timing this multi-threaded approach running 100 times repeatedly is
as following:

# Total Time --> 12.305s ??? WHY ???


The reason that this approach is WAY slower than the sequential approach although we expected it to be the other way around is that we're spawning a big number of threads and due to some architectural limits (e.g. number of cores on our machine) each core is dealing with a lot of threads which has bad impact on the performance of the program. The number of threads are based on the number of rows in our similarity matrix which in one case was `49`!

When we reduced the number of therads to 4 which is the number of cores on our machine we got more consistent and expectable results! The running time for the sequential approach was roughly `5.6` and the running time for the multi-threaded veresion was roughly `3.4`!

- Sequential Running Time --> `5.6`
- Multi-Threaded Running Time --> `3.4`