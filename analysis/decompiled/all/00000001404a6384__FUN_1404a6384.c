// Function: FUN_1404a6384
// Addr: 1404a6384
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a6384(uint *param_1,undefined8 param_2)

{
  char *pcVar1;
  
  *(undefined1 *)param_1 = 0;
  *param_1 = *param_1 ^ (uint)param_1;
  pcVar1 = (char *)(CONCAT62((int6)((ulonglong)param_2 >> 0x10),
                             CONCAT11((char)((ulonglong)param_2 >> 8) + (char)param_2,(char)param_2)
                            ) + 0x421004a);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

