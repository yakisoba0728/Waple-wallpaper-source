// Function: FUN_1404d1038
// Addr: 1404d1038
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d1038(longlong param_1,undefined8 param_2)

{
  char *pcVar1;
  uint uVar2;
  uint *in_RAX;
  uint *puVar3;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  puVar3 = (uint *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                            CONCAT11((char)((ulonglong)in_RAX >> 8) +
                                     (char)((ulonglong)param_2 >> 8),(char)in_RAX + (char)*in_RAX));
  uVar2 = *puVar3;
  *(char *)(param_1 + 0x3f) = *(char *)(param_1 + 0x3f) + (char)param_2;
  pcVar1 = (char *)((ulonglong)((uint)puVar3 | uVar2) + 0x51);
  *pcVar1 = *pcVar1 + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

