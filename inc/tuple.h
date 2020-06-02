#ifndef TUPLE_H
#define TUPLE_H

#include<row_def.h>
#include<cell.h>

#include<string.h>

typedef void* tuple;

cell get_cell(row_def* tpl_d, tuple tpl, unsigned int column_no);

void set_cell(row_def* tpl_d, tuple tpl, unsigned int column_no, void* value);

#endif