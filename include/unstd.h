/* author: dongchangzhang */
/* time: Sun 02 Apr 2017 09:26:01 PM CST */
// define something will be used by many many function
#ifndef INCLUDE_UNSTD_H
#define INCLUDE_UNSTD_H

#define NULL_STATE -100
#define END_STATE -101
#define NORMAL_STATE -102
#define ERROR 999999999

// for action table
#define MOVE_IN "$move_in"
#define REDUCTION "$reduction"
#define ACCEPT "$accept"
// for action when do reduction
#define ACTION "$action"
// for vol
#define VOL_IS_VALUE_TYPE 1
#define VOL_IS_NUM_VALUE 2
#define VOL_IS_ID 3
#define VOL_IS_ARRAY 4
#define VOL_IS_ARRAY_ELEMENT 5
#define VOL_IS_TMP 6
#define VOL_IS_BOOL 7

#define NONE_ACTION "$none_action"
#define PARSING_TABLE_FILE_NAME "parsing_table.txt"

// debug dfa
// #ifndef DEBUG_DFA
// #define DEBUG_DFA
// #endif

// debug parsing table
// #ifndef DEBUG_PARSING_TABLE
// #define DEBUG_PARSING_TABLE
// #endif

// #ifndef DEBUG_PARSING_TABLE_GOTO
// #define DEBUG_PARSING_TABLE_GOTO
// #endif

#endif
