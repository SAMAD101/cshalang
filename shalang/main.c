#include "common.h"
#include "debug.h" // debug.h contains inclusion of chunk.h

#define EXIT_SUCCESS 0

int main(int argc, char *argv[])
{
  Chunk chunk;
  initChunk(&chunk);
  writeChunk(&chunk, OP_RETURN);
  disassembleChunk(&chunk, "test_chunk");
  freeChunk(&chunk);
  return EXIT_SUCCESS;
}
