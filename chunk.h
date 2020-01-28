#ifndef clox_chunk_h
#define clox_chunk_h

#include "common.h"
#include "value.h"

typedef enum {
    OP_RETURN,
    OP_CONSTANT
} OpCode;

typedef struct {
    int count;
    int capacity;
    uint8_t* code;
    int* lines;
    ValueArray constants;
} Chunk;

void initChunk(Chunk* chunk);
void writeChunk(Chunk* chunk, uint8_t byte, int line);
void freeChunk(Chunk* chunk);

/**
 * Adds a constant value to the specified chunk and returns its index in the constant table.
 *
 * @param chunk
 * @param value
 * @return the index of thew newly added constant
 */
int addConstant(Chunk* chunk, Value value);

#endif