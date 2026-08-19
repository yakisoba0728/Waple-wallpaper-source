// Function: FUN_1404c1594
// Addr: 1404c1594
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c1594(char *param_1,byte *param_2,undefined8 param_3,char *param_4)

{
  int iVar1;
  undefined3 uVar2;
  char cVar3;
  char cVar4;
  uint uVar5;
  byte bVar8;
  longlong in_RAX;
  int *piVar6;
  char cVar9;
  char unaff_BL;
  byte unaff_BH;
  byte unaff_BPL;
  uint *unaff_RSI;
  byte unaff_R12B;
  char *pcVar7;
  
  bVar8 = (byte)param_2;
  cVar9 = (char)((ulonglong)param_1 >> 8);
  *param_4 = *param_4 + bVar8;
  *(byte *)(in_RAX * 2) = *(byte *)(in_RAX * 2) | (byte)in_RAX;
  *param_2 = *param_2 | (byte)((ulonglong)param_2 >> 8);
  piVar6 = (int *)CONCAT71((int7)((ulonglong)in_RAX >> 8),(byte)in_RAX + 0x70);
  iVar1 = *(int *)((longlong)piVar6 + 2);
  *(byte *)((longlong)piVar6 + -0x4a) = *(byte *)((longlong)piVar6 + -0x4a) ^ bVar8;
  uVar5 = (int)piVar6 - *piVar6;
  *(char *)(ulonglong)uVar5 = *(char *)(ulonglong)uVar5 + cVar9;
  *unaff_RSI = *unaff_RSI ^ (uint)param_1;
  uVar2 = (undefined3)(uVar5 >> 8);
  cVar3 = (char)uVar5 + 'L' + CARRY1(unaff_BPL,unaff_R12B);
  param_2[(longlong)param_1 * 8] = param_2[(longlong)param_1 * 8] + cVar3;
  *(char *)unaff_RSI = (char)*unaff_RSI + unaff_BL;
  cVar3 = cVar3 + *(char *)(ulonglong)CONCAT31(uVar2,cVar3);
  *param_1 = *param_1 + bVar8;
  cVar4 = cVar3 + '\x01';
  pcVar7 = (char *)(ulonglong)CONCAT31(uVar2,cVar4);
  param_2[(longlong)pcVar7 * 2] = param_2[(longlong)pcVar7 * 2] + cVar4;
  *pcVar7 = *pcVar7 + cVar4;
  *(char **)((ulonglong)(uint)((int)&stack0x00000000 + iVar1) - 8) = pcVar7;
  bVar8 = (byte)(uVar5 >> 8);
  pcVar7 = (char *)(ulonglong)
                   CONCAT31((int3)(CONCAT22((short)(uVar5 >> 0x10),CONCAT11(bVar8 + unaff_BH,cVar4))
                                  >> 8),cVar3 + 'M' + CARRY1(bVar8,unaff_BH));
  *pcVar7 = *pcVar7 + cVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

