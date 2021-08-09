#ifndef GNOME_COMPILER_H
#define GNOME_COMPILER_H

#include "object.h"
#include "vm.h"

ObjFunction* compile(const char* source);
void markCompilerRoots();

#endif