#ifndef ASI_H
#define ASI_H

// ASI (Automatic Semicolon Insertion) Rules
// Based on ECMA-262 specification

// ASI is triggered when:
// 1. A token (offending token) is encountered that is not allowed by any production
// 2. A line terminator or } is encountered
// 3. End of input is reached and parser cannot complete

// Tokens that can trigger ASI before them:
// - PostfixExpression ++/--
// - continue
// - break
// - return
// - throw
// - yield

extern int enable_asi;
extern int current_line;
extern int previous_line;
extern int line_terminator_seen;

void reset_asi_state();
int should_insert_semicolon();
void mark_line_terminator();

#endif // ASI_H