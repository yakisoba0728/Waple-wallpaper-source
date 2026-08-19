// Function: FUN_1404d6f3c
// Addr: 1404d6f3c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d6f3c(char *param_1,undefined8 param_2)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  undefined3 uVar4;
  byte bVar5;
  char cVar6;
  byte bVar7;
  uint in_EAX;
  int iVar8;
  char unaff_BL;
  undefined7 unaff_00000019;
  longlong unaff_RBP;
  longlong unaff_RSI;
  byte *pbVar9;
  char *pcVar10;
  
  iVar8 = in_EAX + 0x210000c0;
  bVar5 = ((char)iVar8 + -0xc) - (0xdeffff3f < in_EAX);
  pbVar9 = (byte *)(ulonglong)CONCAT31((int3)((uint)iVar8 >> 8),bVar5);
  (&stack0x00000000)[unaff_RSI * 8] = (&stack0x00000000)[unaff_RSI * 8] + unaff_BL;
  *pbVar9 = *pbVar9 | bVar5;
  cVar2 = (char)((uint)iVar8 >> 8) - (char)param_2;
  uVar3 = CONCAT22((short)((uint)iVar8 >> 0x10),CONCAT11(cVar2,bVar5));
  *(uint *)(ulonglong)uVar3 = *(uint *)(ulonglong)uVar3 | uVar3;
  uVar4 = (undefined3)(uVar3 >> 8);
  bVar7 = *(byte *)(ulonglong)CONCAT31(uVar4,bVar5 + 0x74);
  param_1[CONCAT71(unaff_00000019,unaff_BL)] = param_1[CONCAT71(unaff_00000019,unaff_BL)] + cVar2;
  bVar7 = bVar5 + 0x74 | bVar7 | 0x54;
  cVar6 = bVar7 + 0x34;
  bVar7 = cVar6 + *(char *)(ulonglong)CONCAT31(uVar4,cVar6) + (0xcb < bVar7);
  pcVar10 = (char *)(ulonglong)CONCAT31(uVar4,bVar7);
  pcVar10[0x36] = pcVar10[0x36] ^ bVar7;
  pcVar1 = (char *)((longlong)pcVar10 * 3 + 0x36);
  *pcVar1 = *pcVar1 + unaff_BL;
  pcVar1 = (char *)(unaff_RSI + 0x4d + unaff_RBP * 2);
  *pcVar1 = *pcVar1 + cVar2;
  *param_1 = *param_1 + cVar2;
  *pcVar10 = *pcVar10 + bVar7;
  *pcVar10 = *pcVar10 + (char)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

