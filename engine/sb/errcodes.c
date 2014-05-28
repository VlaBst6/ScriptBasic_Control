/* 
FILE: errcodes.c
HEADER: errcodes.h

This file was automatically generated by generrh.pl from the file errors.def
Do not edit this file. Modify errors.def and run generrh.pl to regenerate this file.

TO_HEADER:

#define COMMAND_ERROR_SUCCESS 0
#define COMMAND_ERROR_MEMORY_LOW 1
#define COMMAND_ERROR_NOARRAY 2
#define COMMAND_ERROR_DIV 3
#define COMMAND_ERROR_UNDEFOP 4
#define COMMAND_ERROR_BAD_CALL 5
#define COMMAND_ERROR_FEW_ARGS 6
#define COMMAND_ERROR_ARGUMENT_TYPE 7
#define COMMAND_ERROR_ARGUMENT_RANGE 8
#define COMMAND_ERROR_FILE_READ 9
#define COMMAND_ERROR_FILE_WRITE 10
#define COMMAND_ERROR_FILE 11
#define COMMAND_ERROR_CIRCULAR 12
#define COMMAND_ERROR_MODULE_NOT_LOADED 13
#define COMMAND_ERROR_PARTIAL_UNLOAD 14
#define COMMAND_ERROR_MODULE_ACTIVE 15
#define COMMAND_ERROR_MODULE_LOAD 16
#define COMMAND_ERROR_MODULE_FUNCTION 17
#define COMMAND_ERROR_MODULE_INITIALIZE 18
#define COMMAND_ERROR_MODULE_VERSION 19
#define COMMAND_ERROR_BAD_FILE_NUMBER 20
#define COMMAND_ERROR_FILE_NUMBER_IS_USED 21
#define COMMAND_ERROR_FILE_CANNOT_BE_OPENED 22
#define COMMAND_ERROR_FILE_IS_NOT_OPENED 23
#define COMMAND_ERROR_INVALID_LOCK 24
#define COMMAND_ERROR_PRINT_FAIL 25
#define COMMAND_ERROR_MKDIR_FAIL 26
#define COMMAND_ERROR_DELETE_FAIL 27
#define COMMAND_ERROR_NOTIMP 28
#define COMMAND_ERROR_INVALID_JOKER 29
#define COMMAND_ERROR_NO_RESUME 30
#define COMMAND_ERROR_INV_DNAME 31
#define COMMAND_ERROR_INV_DO_OPTION 32
#define COMMAND_ERROR_DIR_NO_OPEN 33
#define COMMAND_ERROR_BAD_RECORD_LENGTH 34
#define COMMAND_ERROR_CURDIR 35
#define COMMAND_ERROR_UNDEF_DIR 36
#define COMMAND_ERROR_CHDIR 37
#define COMMAND_ERROR_RETURN_WITHOUT_GOSUB 38
#define COMMAND_ERROR_INVALID_ARGUMENT_FOR_FUNCTION_ADDRESS 39
#define COMMAND_ERROR_SETFILE_INVALID_ATTRIBUTE 40
#define COMMAND_ERROR_CHOWN_INVALID_USER 41
#define COMMAND_ERROR_CHOWN_NOT_SUPPORTED 42
#define COMMAND_ERROR_CHOWN_SET_OWNER 43
#define COMMAND_ERROR_INVALID_FILE_NAME 44
#define COMMAND_ERROR_CREATIME_FAIL 45
#define COMMAND_ERROR_MODTIME_FAIL 46
#define COMMAND_ERROR_ACCTIM_FAIL 47
#define COMMAND_ERROR_INVALID_TIME_FORMAT 48
#define COMMAND_ERROR_INVALID_TIME 49
#define COMMAND_ERROR_EXTENSION_SPECIFIC 50
#define COMMAND_ERROR_SOCKET_FILE 51
#define COMMAND_ERROR_INVALID_CODE 52
#define COMMAND_ERROR_MANDARG 53
#define COMMAND_ERROR_TIMEOUT 54
#define COMMAND_ERROR_STAYS_IN_MEMORY 55
#define COMMAND_ERROR_PREPROCESSOR_ABORT 56
#define COMMAND_ERROR_NOTSTARTED 134

#define BU_ERROR_SUCCESS 0
#define BU_ERROR_MEMORY_LOW 1
#define BU_ERROR_FILE_CORRUPT 57
#define BU_ERROR_NO_CODE 58
#define BU_ERROR_FAIL 59
#define BU_ERROR_ECODE_INPUT 60
#define READER_ERROR_SUCCESS 0
#define READER_ERROR_MEMORY_LOW 1
#define READER_ERROR_INCLUDE_SYNTAX 61
#define READER_ERROR_INCLUDE_FILE 62
#define READER_ERROR_TOOMANY_INCLUDE 63
#define READER_ERROR_PREPROC_UNDEF 64
#define READER_ERROR_PREPROC_LONG 65
#define READER_ERROR_PREPROC_NOTAVA 66
#define READER_ERROR_PREPROC_NOTVAL 67
#define READER_ERROR_FILE_OPEN 68
#define READER_ERROR_EMPTY_INPUT 69
#define PREPROC_ERROR_SUCCESS 0
#define PREPROC_ERROR_MEMORY_LOW 1
#define PREPROC_ERROR_FAIL 70
#define PREPROC_ERROR_CONFIG_EXE 71
#define PREPROC_ERROR_CONFIG_DIR 72
#define LEX_ERROR_SUCCESS 0
#define LEX_ERROR_MEMORY_LOW 1
#define LEX_ERROR_TOO_LONG_SYMBOL 73
#define LEX_ERROR_STRING_NOT_TERMINATED 74
#define LEX_ERROR_STRING_NEW_LINE 75
#define LEX_ERROR_BAD_RADIX 76
#define LEX_ERROR_INVALID_NUMBER 77
#define EXE_ERROR_SUCCESS 0
#define EXE_ERROR_MEMORY_LOW 1
#define EXE_ERROR_INVALID_PC 78
#define EXE_ERROR_INVALID_PC1 79
#define EXE_ERROR_INVALID_NODE 80
#define EXE_ERROR_INVALID_OPCODE 81
#define EXE_ERROR_NOT_IMPLEMENTED 82
#define EXE_ERROR_INVALID_EXPRESSION_NODE 83
#define EXE_ERROR_INVALID_EXPRESSION_NODE1 84
#define EXE_ERROR_INTERNAL_DEFAULTTYPE 85
#define EXE_ERROR_INTERNAL_UNDEF 86
#define EXE_ERROR_INTERNAL_MEMREF 87
#define EXE_ERROR_INTERNAL 88
#define EXE_ERROR_NO_LOCAL 89
#define EXE_ERROR_INVALID_LVALNODE0 90
#define EXE_ERROR_INVALID_LVALNODE1 91
#define EXE_ERROR_INVALID_LVALNODE2 92
#define EXE_ERROR_INVALID_LVALNODE3 93
#define EXE_ERROR_INVALID_LVALNODE4 94
#define EXE_ERROR_INVALID_LVALNODE5 95
#define EXE_ERROR_INVALID_LVALNODE6 96
#define EXE_ERROR_USERFUN_UNDEFINED 97
#define EXE_ERROR_TOO_DEEP_CALL 98
#define EXE_ERROR_TOO_LONG_RUN 99
#define EX_ERROR_SUCCESS 0
#define EX_ERROR_MEMORY_LOW 1
#define EX_ERROR_INTERNAL 100
#define EX_ERROR_LABEL_DOUBLE_DEFINED 101
#define EX_ERROR_LABEL_NOT_DEFINED 102
#define EX_ERROR_FUNCTION_DOUBLE_DEFINED 103
#define EX_ERROR_FUNCTION_NOT_DEFINED 104
#define EX_ERROR_NO_OLD_NAMESPACE 105
#define EX_ERROR_UNFINISHED_MODULE 106
#define EX_ERROR_TOO_LONG_NAME_SPACE 107
#define EX_ERROR_TOO_LONG_VARIABLE 108
#define EX_ERROR_MISSING_PAREN 109
#define EX_ERROR_MISSING_OPAREN 110
#define EX_ERROR_MISSING_APAREN 111
#define EX_ERROR_MISSING_SAPAREN 112
#define EX_ERROR_FUNCTION_NEEDS_ARGUMENTS 113
#define EX_ERROR_TOO_FEW_ARGUMENTS 114
#define EX_ERROR_TOO_MANY_ARGUMENTS 115
#define EX_ERROR_BAD_NESTING 116
#define EX_ERROR_UNFINISHED_NESTING 117
#define EX_ERROR_SYNTAX 118
#define EX_ERROR_SYNTAX_FATAL 119
#define EX_ERROR_TOO_MANY_WAITING_LABEL 120
#define EX_ERROR_UNDEF_GLOBAL 121
#define EX_ERROR_UNDEF_PRAGMA 122
#define EX_ERROR_GREDEF 123
#define EX_ERROR_GLODEF 124
#define EX_ERROR_CONST_LVAL 125
#define MEM_ERROR_SUCCESS 0
#define MEM_ERROR_MEMORY_LOW 1
#define MEM_ERROR_INTERNAL001 126
#define MATCH_ERROR_SUCCESS 0
#define MATCH_ERROR_MEMORY_LOW 1
#define MATCH_ERROR_INDEX_OUT_OF_RANGE 127
#define MATCH_ERROR_BUFFER_SHORT 128
#define MATCH_ERROR_SYNTAX_ERROR 129
#define MATCH_ERROR_ARRAY_SHORT 130
#define CONFIG_ERROR_SUCCESS 0
#define CONFIG_ERROR_MEMORY_LOW 1
#define SCRIBA_ERROR_SUCCESS 0
#define SCRIBA_ERROR_MEMORY_LOW 1
#define SCRIBA_ERROR_FAIL 131
#define SCRIBA_ERROR_BUFFER_SHORT 132
#define MAX_ERROR_CODE 133
typedef struct { char *language; char **array; } tErrorMessageArray;
extern tErrorMessageArray ErrorMessageArray[];
extern char  *en_error_messages[];
*/
#include <stdio.h>
#include "errcodes.h"
char *en_error_messages[] ={
"SUCCESS",
"Not enough memory",
"Function can not return a whole array",
"Division by zero or other calculation error",
"Argument to operator is undefined",
"The command or sub was called the wrong way",
"There are not enough arguments of the module function.",
"The argument passed to a module function is not the needed type.",
"The argument passed to a module function is out of the accepted range.",
"The module experiences difficulties reading the file",
"The module experiences difficulties writing the file.",
"The module experiences handling the file.",
"There is a circular reference in memory.",
"The module can not be unloaded, because it was not loaded.",
"Some modules were active and could not be unloaded.",
"The module can not be unloaded, because it is currently active.",
"The requested module can not be loaded.",
"The requested function does not exist in the module.",
"The module did not initialize correctly",
"The module was developed for a different version of ScriptBasic.",
"File number is out of range, it should be between 1 and 512",
"The file number is already used.",
"The file can not be opened.",
"The file is not opened.",
"The lock type is invalid.",
"The print command failed. The file may be locked by another process.",
"Directory can not be created.",
"The directory or file could not be deleted.",
"Command is not implemented and no currently loaded extension module defined behaviour for it",
"The character can not be a joker or wild card character.",
"The code tried to execute a resume while not being in error correction code.",
"The directory name in open directory is invalid.",
"Invalid option for directory open.",
"The directory can not be opened.",
"The record length is invalid in the open statements (undefined, zero or negative)",
"The current directory can not be retrieved for some reason.",
"The directory name in chdir can not be undef.",
"Cannot change the current working directory to the desired directory.",
"The command RETURN can not be executed, because there is no where to return.",
"The argument for the function address is invalid.",
"The attribute value or symbol is invalid in the set file command.",
"The user does not exist.",
"The chown command is not supported on Win95 and Win98",
"Can not change owner.",
"The file name is invalid.",
"Setting the create time of the file has failed.",
"Setting the modify time of the file has failed.",
"Setting the access time of the file has failed",
"The specified time format is invalid",
"The time is not valid, cannot be earlier than January 1, 1970. 00:00",
"Extension specific error: %s",
"The operation can be done on files only and not on sockets.",
"The embedding application tried to start the code at an invalid location",
"Mandatory argument is missing",
"Subprocess did not finish within time limits",
"The module can not be unloaded",
"The preprocessor said to abort program compilation or execution.",
"The file is either corrupt or was written with a different version of sb.",
"The compiled program contains no executable code.",
"Code file can not be saved.",
"The interpreter file can not be read",
"Bad syntax in include statement.",
"Include file is not found",
"Too many includes, probably recursive include",
"Preprocessor \"%s\" is not defined.",
"Preprocessor name is too long.",
"Preprocessor \"%s\" is not available.",
"Preprocessor \"%s\" is invalid.",
"The file can not be read.",
"The file is empty or is not readable.",
"The external preprocessor failed.",
"The preprocessor executable is not configured.",
"The preprocessor temporary directory is not configured.",
"Symbol is too long",
"string is not terminated anywhere before end of file",
"string is not terminated anywhere before end of line",
"the number contains invalid radix. BASE#NNN numbers areavailable for 2<=BASE<=36 only.",
"the BASE#NNN formatted number digit is out of range",
"Program counter points out of the code. The executed code is corrupt.",
"Internal error or the cached code is corrupt.",
"Internal error or the cached code is corrupt.",
"invalid op code is in the code table",
"The code exists, but it is not implemented.",
"Internal error or the cached code is corrupt.",
"Internal error or the cached code is corrupt.",
"Internal error when releasing a variable it has no correct type",
"Internal error when releasing undefined variable, nonsense",
"Internal error when releasing variable reference found",
"any non classified internal error",
"local variable referenced in global context or in a local context having no local variables",
"Internal error or the cached code is corrupt.",
"Internal error or the cached code is corrupt.",
"Internal error or the cached code is corrupt.",
"Internal error or the cached code is corrupt.",
"Internal error or the cached code is corrupt.",
"Internal error or the cached code is corrupt.",
"Internal error or the cached code is corrupt.",
"the user function is undefined",
"Recursive function calls exceeded configuration limit.",
"Program is running too long, probably infinite loop.",
"Internal error in the syntax analyzer",
"A line label was defined more than once.",
"A label \"%s\" was not defined during syntax analysis.",
"The user function was already defined.",
"The user function \"%s\" is used but is not defined.",
"There was no module started when an end module statement was found.",
"A module was not closed at end of file.",
"the name space grew too long",
"variable and namespace does not fit into the buffer",
" closing ) is missing in expression",
" opening ( is missing in sub call",
" closing ] is missing following array indeces",
" closing } is missing following associative array indices",
" built in function needs arguments",
" Built in function has too few arguments",
" Built in function has too many arguments",
"erroneous nesting of constructs like IF/ELSIF/ELSE/ENDIF/REPEAT/LOOP/WHILE and so on",
"nested construct remained unclosed when local_end",
"syntax error, no syntax defintion matches the line or syntax defintion does not match the line",
"syntax error during checking the line and also noting that the syntax error so serious that none of the other syntax defintions can match the current line",
"there are more then MAX_SAME_LABEL labels referencing the same line",
"Global variable was not declared.",
"Compiler option \"%s\" is not implemented",
"Global variable \"%s\" is redefined.",
"Variable \"%s\" can not be used as global and local in a sub.",
"The variable is declared as constant. Needs 'var' declaration.",
"DupVar can not duplicate array. This is an internal error.",
"The format string contains $n where n is out of range.",
"The provided buffer is too short.",
"Invalid pattern contains no character after the ~ sign.",
"The provided string array is too short.",
"Operation failed",
"The provided buffer is too short.",
"The subprocess did not start",
NULL
};
tErrorMessageArray ErrorMessageArray[]={
"en",en_error_messages,
NULL,NULL
};