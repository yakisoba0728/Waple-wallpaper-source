// Function: FUN_1404c6584
// Addr: 1404c6584
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c6584(longlong param_1,char param_2)

{
  short in_AX;
  char *pcVar1;
  char unaff_R12B;
  longlong in_FS_OFFSET;
  
  pcVar1 = (char *)(ulonglong)(uint)(int)in_AX;
  *(char *)(in_FS_OFFSET + param_1) = *(char *)(in_FS_OFFSET + param_1) + unaff_R12B;
  *pcVar1 = *pcVar1 + (char)in_AX;
  pcVar1[-0x5affd0af] = pcVar1[-0x5affd0af] + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

