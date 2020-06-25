/* 
 * @copyright (c) 2008, Hedspi, Hanoi University of Technology
 * @author Huu-Duc Nguyen
 * @version 1.0
 */

#ifndef __SEMANTICS_H__
#define __SEMANTICS_H__

#include "symtab.h"

void checkFreshIdent(char *name);
Object* checkDeclaredIdent(char *name);
Object* checkDeclaredConstant(char *name);
Object* checkDeclaredType(char *name);
Object* checkDeclaredVariable(char *name);
Object* checkDeclaredFunction(char *name);
Object* checkDeclaredProcedure(char *name);
Object* checkDeclaredLValueIdent(char *name);

void checkIntType(Type* type);
void checkNumberType(Type* type);           // TODO:3x
void checkCharType(Type* type);
void checkStringType(Type* type);             // TODO:3x
void checkArrayType(Type* type);
void checkBasicType(Type* type);
void checkTypeEquality(Type* type1, Type* type2);
void checkTypeAssign(Type* type1, Type* type2);       // TODO:3x
void checkTypeExpression(Type* type1, Type* type2);       // TODO:3x

#endif
