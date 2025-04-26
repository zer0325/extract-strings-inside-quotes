# About

This small program will extract strings between quotes (`"`).

I created this while I am examining some `.js` file. 

For better result and to eliminate identical strings pipe the result to `sort`
and `uniq`.


`$ inquote < sample.js | sort | uniq > result`

## To compile

`$ gcc inquote.c -o inquote`
