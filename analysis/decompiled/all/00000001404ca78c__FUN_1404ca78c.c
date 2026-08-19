// Function: FUN_1404ca78c
// Addr: 1404ca78c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ca78c(char *param_1)

{
  byte *in_RAX;
  
  iRam000000012051a795 = iRam000000012051a795 + (int)in_RAX;
  *in_RAX = *in_RAX ^ (byte)in_RAX;
  *param_1 = *param_1 + (char)((ulonglong)in_RAX >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

