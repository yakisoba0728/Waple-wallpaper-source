// Function: FUN_1404af14c
// Addr: 1404af14c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404af14c(longlong param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  byte bVar7;
  char *pcVar5;
  uint *in_RAX;
  undefined1 *puVar8;
  int unaff_EBX;
  undefined4 unaff_0000001c;
  longlong unaff_RBP;
  char *unaff_RDI;
  int *piVar6;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  bVar3 = (char)in_RAX + (char)*in_RAX;
  piVar6 = (int *)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar3);
  pbVar1 = (byte *)(unaff_RBP + param_1);
  bVar2 = *pbVar1;
  bVar7 = (byte)((ulonglong)in_RAX >> 8);
  *pbVar1 = *pbVar1 + bVar7;
  puVar8 = (undefined1 *)(param_1 + -1);
  if (puVar8 == (undefined1 *)0x0 || *pbVar1 == 0) {
    uVar4 = (int)piVar6 + *piVar6 + (uint)CARRY1(bVar2,bVar7);
    piVar6 = (int *)(CONCAT44(unaff_0000001c,unaff_EBX) + -0xfa7ffed);
    *piVar6 = *piVar6 - unaff_EBX;
    *puVar8 = *puVar8;
    *(char *)(ulonglong)uVar4 = *(char *)(ulonglong)uVar4 + (char)uVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_4 = *param_4;
  *(byte *)piVar6 = (char)*piVar6 + bVar3;
  pbVar1 = (byte *)(piVar6 + -0x7bffb1b);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar3;
  uVar4 = (int)&stack0x00000000 + *(int *)((ulonglong)&stack0x00000000 & 0xffffffff) +
          (uint)CARRY1(bVar2,bVar3);
  pcVar5 = (char *)(ulonglong)uVar4;
  *param_4 = *param_4 + (char)uVar4;
  *unaff_RDI = *unaff_RDI - (char)puVar8;
  *pcVar5 = *pcVar5 + (char)((ulonglong)puVar8 >> 8);
  if (-1 < *pcVar5) {
    pcVar5[unaff_RBP * 2] = pcVar5[unaff_RBP * 2] + (char)(uVar4 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

