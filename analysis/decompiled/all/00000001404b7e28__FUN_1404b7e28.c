// Function: FUN_1404b7e28
// Addr: 1404b7e28
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b7e28(char *param_1)

{
  longlong in_RAX;
  
  *(byte *)(in_RAX + 3) = *(byte *)(in_RAX + 3) & (byte)((ulonglong)param_1 >> 8);
  *param_1 = *param_1 + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

