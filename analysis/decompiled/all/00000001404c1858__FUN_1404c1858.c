// Function: FUN_1404c1858
// Addr: 1404c1858
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c1858(longlong param_1,longlong param_2)

{
  char *pcVar1;
  undefined8 in_RAX;
  byte bVar2;
  char unaff_SIL;
  undefined7 unaff_00000031;
  longlong in_R10;
  bool bVar3;
  
  bVar2 = (byte)((ulonglong)param_1 >> 8);
  pcVar1 = (char *)(CONCAT71((uint7)(uint3)((int)CONCAT71((int7)((ulonglong)in_RAX >> 8),
                                                          (byte)in_RAX + bVar2) + 0xe04004c +
                                            (uint)CARRY1((byte)in_RAX,bVar2) >> 8),0x22) +
                   in_R10 * 2);
  *pcVar1 = *pcVar1 + unaff_SIL;
  bVar3 = 0xd7 < bRam0000000000800028;
  bRam0000000000800028 = bRam0000000000800028 + 0x28;
  *(int *)(param_1 + 0x800028) = (*(int *)(param_1 + 0x800028) - (int)param_2) - (uint)bVar3;
  pcVar1 = (char *)(param_2 + CONCAT71(unaff_00000031,unaff_SIL) * 2);
  *pcVar1 = *pcVar1 + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

