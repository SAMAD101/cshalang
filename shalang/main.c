#include "common.h"
#include "chunk.h"

#define EXIT_SUCCESS 0

int int main(int argc, char *argv[])
{
  Chunk chunk;
  initChunk(&chunk);
  writeChunk(&chunk, OP_RETURN);
  disassembleChunk(&chunk, "test_chunk");
  freeChunk(&chunk);
  return EXIT_SUCCESS
}
