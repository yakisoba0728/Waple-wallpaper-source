// Function: FUN_1404be5f4
// Addr: 1404be5f4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404be5f4(char *param_1,byte param_2)

{
  byte *in_RAX;
  
  *in_RAX = *in_RAX | param_2;
  *param_1 = *param_1 + (char)((ulonglong)in_RAX >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

