#include "ship_space.h"

block *
chunk::get_block(unsigned int x, unsigned int y, unsigned int z)
{
    if( x >= CHUNK_SIZE ||
        y >= CHUNK_SIZE ||
        z >= CHUNK_SIZE )
        return 0;

    return &( this->blocks.contents[x][y][z] );
}
