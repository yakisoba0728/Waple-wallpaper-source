// Function: FUN_1404d7068
// Addr: 1404d7068
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d7068(uint *param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  uint *in_RAX;
  char *pcVar7;
  char cVar8;
  uint unaff_EBX;
  longlong unaff_RSI;
  longlong unaff_RDI;
  bool bVar9;
  
  cVar8 = (char)((ulonglong)param_2 >> 8);
  uVar6 = (uint)in_RAX;
  *in_RAX = *in_RAX & uVar6;
  bVar5 = (byte)in_RAX;
  *(char *)(unaff_RDI + (longlong)in_RAX) = *(char *)(unaff_RDI + (longlong)in_RAX) + cVar8;
  *(char *)(unaff_RSI + (longlong)in_RAX) = *(char *)(unaff_RSI + (longlong)in_RAX) + cVar8;
  *(char *)((longlong)in_RAX + -0x46) = *(char *)((longlong)in_RAX + -0x46) + (char)param_2;
  uVar4 = *param_1;
  *(byte *)param_1 = (byte)*param_1 + bVar5;
  puVar3 = (uint *)((longlong)in_RAX * 2);
  uVar2 = (uint)CARRY1((byte)uVar4,bVar5);
  uVar4 = *puVar3;
  uVar1 = *puVar3;
  *puVar3 = (uVar1 - uVar6) - uVar2;
  uVar2 = (uint)(uVar4 < uVar6 || uVar1 - uVar6 < uVar2);
  uVar4 = *param_1;
  uVar1 = *param_1;
  *param_1 = (uVar1 - uVar6) - uVar2;
  uVar4 = (uint)(uVar4 < uVar6 || uVar1 - uVar6 < uVar2);
  bVar9 = CARRY4(*in_RAX,uVar6) || CARRY4(*in_RAX + uVar6,uVar4);
  *in_RAX = *in_RAX + uVar6 + uVar4;
  pcVar7 = (char *)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar5 * '\x02' + bVar9);
  *pcVar7 = *pcVar7 + cVar8 + (CARRY1(bVar5,bVar5) || CARRY1(bVar5 * '\x02',bVar9));
  uRam00000001346a70a0 = uRam00000001346a70a0 & unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

