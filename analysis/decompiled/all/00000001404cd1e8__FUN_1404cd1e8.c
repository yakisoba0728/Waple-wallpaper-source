// Function: FUN_1404cd1e8
// Addr: 1404cd1e8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cd1e8(undefined8 param_1)

{
  uint *puVar1;
  int in_EAX;
  char *pcVar2;
  char unaff_R15B;
  
  pcVar2 = (char *)(ulonglong)(in_EAX + 0x3600470);
  *pcVar2 = *pcVar2 + (char)((ulonglong)param_1 >> 8);
  puVar1 = (uint *)((longlong)pcVar2 * 2 + 0x28);
  *puVar1 = *puVar1 >> 1 | (uint)((*puVar1 & 1) != 0) << 0x1f;
  *pcVar2 = *pcVar2 + unaff_R15B;
  puVar1 = (uint *)((longlong)pcVar2 * 2 + 4);
  *puVar1 = *puVar1 >> 1 | (uint)((*puVar1 & 1) != 0) << 0x1f;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

