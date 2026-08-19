// Function: FUN_1404a10ac
// Addr: 1404a10ac
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404a10ca) overlaps instruction at (ram,0x0001404a10c4)
    */

void FUN_1404a10ac(longlong param_1,undefined8 param_2,undefined8 param_3,byte *param_4)

{
  char *pcVar1;
  byte bVar2;
  uint uVar3;
  char cVar4;
  char *in_RAX;
  uint *puVar6;
  char cVar7;
  longlong unaff_RBX;
  byte unaff_SPL;
  undefined7 unaff_00000021;
  longlong unaff_RBP;
  longlong unaff_RSI;
  undefined2 in_DS;
  int *piVar5;
  
  cVar7 = (char)((ulonglong)param_2 >> 8);
  *(undefined2 *)(unaff_RBP + -0x1a9bfffd) = in_DS;
  *param_4 = *param_4 + unaff_SPL;
  *in_RAX = *in_RAX + (char)param_1;
  *in_RAX = *in_RAX + (char)in_RAX;
  cVar4 = in(8);
  piVar5 = (int *)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar4);
  *(char *)piVar5 = (char)*piVar5 + cVar4;
  if ((char)*piVar5 == '\0') {
    piVar5 = (int *)(ulonglong)(uint)((int)piVar5 + *piVar5);
    *(undefined2 *)(unaff_RBP + -0x1a9bfffd) = in_DS;
  }
  *(char *)piVar5 = (char)*piVar5 + (char)piVar5;
  *(char *)(param_1 + 0x39d7000) = *(char *)(param_1 + 0x39d7000) + cVar7;
  pcVar1 = (char *)(unaff_RBP + -0x1a9bfffd + unaff_RBX * 4);
  *pcVar1 = *pcVar1 + (char)param_1;
  bVar2 = *param_4;
  *param_4 = *param_4 + unaff_SPL;
  puVar6 = (uint *)CONCAT71((int7)((ulonglong)piVar5 >> 8),
                            (char)piVar5 + '\x06' + CARRY1(bVar2,unaff_SPL));
  pcVar1 = (char *)(CONCAT71(unaff_00000021,unaff_SPL) + unaff_RSI * 2);
  *pcVar1 = *pcVar1 + (char)param_2;
  uVar3 = *puVar6;
  *(char *)(param_1 + 0x8e40400) = *(char *)(param_1 + 0x8e40400) + cVar7;
  pcVar1 = (char *)((ulonglong)((uint)puVar6 | uVar3) - 0x60);
  *pcVar1 = *pcVar1 + cVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

