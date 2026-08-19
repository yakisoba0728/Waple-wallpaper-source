// Function: FUN_1404b484c
// Addr: 1404b484c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b484c(char *param_1,undefined4 param_2)

{
  char *pcVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  char cVar7;
  uint uVar8;
  longlong in_RAX;
  uint *puVar10;
  byte unaff_BL;
  byte unaff_BH;
  undefined6 unaff_0000001a;
  char unaff_SPL;
  longlong unaff_RSI;
  byte in_CF;
  int *piVar9;
  
  puVar10 = (uint *)(in_RAX + 0x78100014);
  uVar3 = *puVar10;
  uVar8 = *puVar10 - (uint)param_1;
  *puVar10 = uVar8 - in_CF;
  uVar8 = (int)in_RAX + 0x16680800 + (uint)(uVar3 < (uint)param_1 || uVar8 < in_CF);
  pcVar1 = (char *)((ulonglong)uVar8 + 0x280019db);
  *pcVar1 = *pcVar1 + (char)((uint)param_2 >> 8);
  pcVar1 = (char *)(unaff_RSI + CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) * 4);
  *pcVar1 = *pcVar1 + (char)param_2;
  *param_1 = *param_1 + unaff_SPL;
  pcVar1 = (char *)((ulonglong)uVar8 * 2);
  bVar6 = (byte)uVar8;
  *pcVar1 = *pcVar1 + bVar6;
  cVar7 = bVar6 + (byte)param_1;
  uVar3 = CONCAT31((int3)(uVar8 >> 8),cVar7);
  piVar9 = (int *)(ulonglong)uVar3;
  *(char *)piVar9 = (char)*piVar9 + cVar7 + CARRY1(bVar6,(byte)param_1);
  pbVar2 = (byte *)((longlong)piVar9 + -0x244fffef);
  bVar6 = *pbVar2;
  *pbVar2 = *pbVar2 + unaff_BH;
  *piVar9 = (*piVar9 - uVar3) - (uint)CARRY1(bVar6,unaff_BH);
  bVar6 = (byte)(uVar8 >> 8);
  uVar5 = CONCAT22((short)(uVar8 >> 0x10),CONCAT11(bVar6 - unaff_BL,cVar7));
  puVar10 = (uint *)(ulonglong)uVar5;
  uVar4 = (uint)(bVar6 < unaff_BL);
  uVar3 = *puVar10;
  uVar8 = *puVar10;
  *puVar10 = (uVar8 - uVar5) - uVar4;
  *param_1 = *param_1 + cVar7 + -0x62 + (uVar3 < uVar5 || uVar8 - uVar5 < uVar4);
  *param_1 = *param_1 + unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

