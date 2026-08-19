// Function: FUN_1404c622c
// Addr: 1404c622c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c622c(char *param_1,undefined8 param_2)

{
  char *pcVar1;
  uint in_EAX;
  
  pcVar1 = (char *)(((ulonglong)(in_EAX | 0x5000874) ^ 6) - 0x37ffd0fc);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_2 >> 8);
  param_1[0x4c] = param_1[0x4c] + (char)param_1;
  *param_1 = *param_1 + (char)((in_EAX | 0x5000874) >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

