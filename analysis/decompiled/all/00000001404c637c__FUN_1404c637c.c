// Function: FUN_1404c637c
// Addr: 1404c637c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c637c(char *param_1)

{
  undefined8 in_RAX;
  bool in_CF;
  bool in_ZF;
  
  if (!in_CF && !in_ZF) {
    *param_1 = *param_1 + (char)((ulonglong)in_RAX >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

