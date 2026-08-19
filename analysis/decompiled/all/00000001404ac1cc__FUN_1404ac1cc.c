// Function: FUN_1404ac1cc
// Addr: 1404ac1cc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ac1cc(undefined8 param_1)

{
  char *pcVar1;
  longlong in_RAX;
  
  pcVar1 = (char *)(in_RAX * 9 + 0x5f01004a);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

