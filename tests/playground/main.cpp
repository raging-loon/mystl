#include "mystl/algorithm"
#include "mystl/memory"

#include <cstdio>
int main(int argc, char** argv)
{
    mystl::allocator<int> a;

    int* o = a.allocate(10);

    for(int i = 0; i < 10; i++) 
        *(o + i) = (i * i);
    
    o = a.allocate(15);

    for(int i = 10; i < 15; i++) *(o + i) = (i * i);


    for(int i = 0; i < 15; i++) printf("%d\n",o[i]);

}