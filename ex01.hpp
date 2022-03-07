
//change the below code
// the function below now only works with integers, change it to work with any type
// also fill out the body
template <typename WhatKind>
void multiples (WhatKind sum, WhatKind x, int n)
{
    sum++;
    for(int i=0;i<n+1;i++)
    sum+=i*x;
}
