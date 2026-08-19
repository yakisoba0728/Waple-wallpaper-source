// Function: FUN_14028c1c0
// Addr: 14028c1c0
// Size: 139 bytes


undefined8 * FUN_14028c1c0(undefined8 *param_1,undefined4 param_2)

{
  char *pcStack_18;
  undefined1 uStack_10;
  
  switch(param_2) {
  case 0:
    pcStack_18 = 
    "regex_error(error_collate): The expression contained an invalid collating element name.";
    break;
  case 1:
    pcStack_18 = 
    "regex_error(error_ctype): The expression contained an invalid character class name.";
    break;
  case 2:
    pcStack_18 = 
    "regex_error(error_escape): The expression contained an invalid escaped character, or a trailing escape."
    ;
    break;
  case 3:
    pcStack_18 = "regex_error(error_backref): The expression contained an invalid back reference.";
    break;
  case 4:
    pcStack_18 = "regex_error(error_brack): The expression contained mismatched [ and ].";
    break;
  case 5:
    pcStack_18 = "regex_error(error_paren): The expression contained mismatched ( and ).";
    break;
  case 6:
    pcStack_18 = "regex_error(error_brace): The expression contained mismatched { and }.";
    break;
  case 7:
    pcStack_18 = 
    "regex_error(error_badbrace): The expression contained an invalid range in a {} expression.";
    break;
  case 8:
    pcStack_18 = 
    "regex_error(error_range): The expression contained an invalid character range, such as [b-a] in most encodings."
    ;
    break;
  case 9:
    pcStack_18 = 
    "regex_error(error_space): There was insufficient memory to convert the expression into a finite state machine."
    ;
    break;
  case 10:
    pcStack_18 = 
    "regex_error(error_badrepeat): One of *?+{ was not preceded by a valid regular expression.";
    break;
  case 0xb:
    pcStack_18 = 
    "regex_error(error_complexity): The complexity of an attempted match against a regular expression exceeded a pre-set level."
    ;
    break;
  case 0xc:
    pcStack_18 = 
    "regex_error(error_stack): There was insufficient memory to determine whether the regular expression could match the specified character sequence."
    ;
    break;
  case 0xd:
    pcStack_18 = "regex_error(error_parse)";
    break;
  case 0xe:
    pcStack_18 = "regex_error(error_syntax)";
    break;
  default:
    pcStack_18 = "regex_error";
  }
  *param_1 = &PTR_FUN_140426f00;
  uStack_10 = 1;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_1402bba50(&pcStack_18);
  *(undefined4 *)(param_1 + 3) = param_2;
  *param_1 = &DAT_140427078;
  return param_1;
}

