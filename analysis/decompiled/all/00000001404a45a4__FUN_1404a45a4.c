// Function: FUN_1404a45a4
// Addr: 1404a45a4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a45a4(longlong param_1,char param_2)

{
  char *pcVar1;
  undefined1 in_AL;
  undefined7 in_register_00000001;
  char in_ZF;
  
  if (param_1 == 1 || in_ZF != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar1 = (char *)((CONCAT71(in_register_00000001,in_AL) ^ 0xb) + 0x7f);
  *pcVar1 = *pcVar1 + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

