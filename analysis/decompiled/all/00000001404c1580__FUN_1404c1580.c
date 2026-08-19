// Function: FUN_1404c1580
// Addr: 1404c1580
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c1580(char *param_1,byte *param_2,undefined8 param_3,char *param_4)

{
  int iVar1;
  undefined3 uVar2;
  byte bVar3;
  char cVar4;
  char cVar5;
  uint uVar6;
  char *in_RAX;
  int *piVar7;
  char cVar9;
  byte bVar10;
  char unaff_BL;
  byte unaff_BH;
  byte unaff_BPL;
  uint *unaff_RSI;
  byte unaff_R12B;
  char *pcVar8;
  
  bVar10 = (byte)param_2;
  cVar9 = (char)((ulonglong)param_1 >> 8);
  *param_4 = *param_4;
  bVar3 = (byte)in_RAX;
  *param_2 = *param_2 + bVar3;
  *in_RAX = *in_RAX + bVar3;
  *(char *)unaff_RSI = (char)*unaff_RSI + unaff_BL;
  uVar6 = (uint)CONCAT71((int7)((ulonglong)in_RAX >> 8),(bVar3 ^ 6) * '\x02') & 0xeda80029;
  *param_4 = *param_4 + bVar10;
  *(byte *)((ulonglong)uVar6 * 2) = *(byte *)((ulonglong)uVar6 * 2) | (byte)uVar6;
  *param_2 = *param_2 | (byte)((ulonglong)param_2 >> 8);
  uVar6 = CONCAT31((int3)(uVar6 >> 8),(byte)uVar6 + 0x70);
  piVar7 = (int *)(ulonglong)uVar6;
  iVar1 = *(int *)((longlong)piVar7 + 2);
  *(byte *)((longlong)piVar7 + -0x4a) = *(byte *)((longlong)piVar7 + -0x4a) ^ bVar10;
  uVar6 = uVar6 - *piVar7;
  *(char *)(ulonglong)uVar6 = *(char *)(ulonglong)uVar6 + cVar9;
  *unaff_RSI = *unaff_RSI ^ (uint)param_1;
  uVar2 = (undefined3)(uVar6 >> 8);
  cVar4 = (char)uVar6 + 'L' + CARRY1(unaff_BPL,unaff_R12B);
  param_2[(longlong)param_1 * 8] = param_2[(longlong)param_1 * 8] + cVar4;
  *(char *)unaff_RSI = (char)*unaff_RSI + unaff_BL;
  cVar4 = cVar4 + *(char *)(ulonglong)CONCAT31(uVar2,cVar4);
  *param_1 = *param_1 + bVar10;
  cVar5 = cVar4 + '\x01';
  pcVar8 = (char *)(ulonglong)CONCAT31(uVar2,cVar5);
  param_2[(longlong)pcVar8 * 2] = param_2[(longlong)pcVar8 * 2] + cVar5;
  *pcVar8 = *pcVar8 + cVar5;
  *(char **)((ulonglong)(uint)((int)&stack0x00000000 + iVar1) - 8) = pcVar8;
  bVar3 = (byte)(uVar6 >> 8);
  pcVar8 = (char *)(ulonglong)
                   CONCAT31((int3)(CONCAT22((short)(uVar6 >> 0x10),CONCAT11(bVar3 + unaff_BH,cVar5))
                                  >> 8),cVar4 + 'M' + CARRY1(bVar3,unaff_BH));
  *pcVar8 = *pcVar8 + cVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

