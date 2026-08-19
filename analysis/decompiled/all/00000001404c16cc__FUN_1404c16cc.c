// Function: FUN_1404c16cc
// Addr: 1404c16cc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c16cc(longlong param_1,byte param_2,char param_3)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  char *in_RAX;
  uint *puVar4;
  int iVar5;
  byte unaff_BL;
  int *unaff_RDI;
  char in_ZF;
  
  iVar5 = (int)(param_1 + -1);
  if (param_1 + -1 == 0 || in_ZF == '\0') {
    cRam00000001464c62ec = cRam00000001464c62ec + param_3;
    *in_RAX = *in_RAX + (char)in_RAX;
    *unaff_RDI = (*unaff_RDI - iVar5) - (uint)CARRY1(param_2,*(byte *)((longlong)in_RAX * 2));
    sysenter();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar1 = rdmsr(iVar5);
  bVar2 = (byte)(uVar1 & 0xffffffff);
  uVar3 = (int)CONCAT71((int7)((uVar1 & 0xffffffff) >> 8),bVar2 + unaff_BL) + 0x521004c +
          (uint)CARRY1(bVar2,unaff_BL);
  uVar3 = CONCAT31((int3)(uVar3 >> 8),(char)uVar3 + *(char *)(ulonglong)uVar3) + 0xc201064b;
  puVar4 = (uint *)(ulonglong)uVar3;
  *puVar4 = *puVar4 - uVar3;
  *puVar4 = *puVar4 & uVar3;
  *(char *)puVar4 = (char)*puVar4 + (char)uVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

