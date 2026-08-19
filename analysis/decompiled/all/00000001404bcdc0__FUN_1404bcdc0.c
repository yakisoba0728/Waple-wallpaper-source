// Function: FUN_1404bcdc0
// Addr: 1404bcdc0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bcdc0(char param_1)

{
  char *pcVar1;
  undefined1 in_AL;
  undefined7 in_register_00000001;
  
  pcVar1 = (char *)(CONCAT71(in_register_00000001,in_AL) + -0x38);
  *pcVar1 = *pcVar1 + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

