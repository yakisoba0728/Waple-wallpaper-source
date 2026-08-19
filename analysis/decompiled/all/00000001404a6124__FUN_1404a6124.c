// Function: FUN_1404a6124
// Addr: 1404a6124
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a6124(longlong param_1,byte *param_2)

{
  byte bVar1;
  uint uVar2;
  ulonglong in_RAX;
  int *piVar3;
  char *pcVar6;
  char unaff_SPL;
  byte *pbVar4;
  uint *puVar5;
  
  piVar3 = (int *)(in_RAX | 1);
  *piVar3 = *piVar3 + (int)piVar3;
  uVar2 = (int)piVar3 + 0x21300450;
  pbVar4 = (byte *)(ulonglong)uVar2;
  *param_2 = *param_2 | (byte)uVar2;
  bVar1 = *pbVar4;
  *pbVar4 = *pbVar4 + (byte)param_1;
  bVar1 = (byte)uVar2 + CARRY1(bVar1,(byte)param_1);
  uVar2 = CONCAT31((int3)(uVar2 >> 8),bVar1);
  puVar5 = (uint *)(ulonglong)uVar2;
  pcVar6 = (char *)(param_1 + -1);
  if (pcVar6 == (char *)0x0 || bVar1 == 0) {
    *puVar5 = *puVar5 | uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *puVar5 = *puVar5 | uVar2;
  *pcVar6 = *pcVar6 + unaff_SPL;
  *param_2 = *param_2 | bVar1;
  *(char *)puVar5 = (char)*puVar5 + (char)pcVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

