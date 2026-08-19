// Function: FUN_1404b4840
// Addr: 1404b4840
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b4840(char *param_1,undefined4 param_2)

{
  char *pcVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar10;
  byte unaff_BL;
  byte unaff_BH;
  undefined6 unaff_0000001a;
  char unaff_SPL;
  longlong unaff_RSI;
  byte in_CF;
  int *piVar9;
  
  uVar7 = uRam98220012a82b0011 + 0xa82b0011 + (uint)in_CF;
  puVar10 = (uint *)((ulonglong)uVar7 + 0x78100014);
  uVar8 = (uint)(0x57d4ffee < uRam98220012a82b0011 ||
                CARRY4(uRam98220012a82b0011 + 0xa82b0011,(uint)in_CF));
  uVar3 = *puVar10;
  uVar4 = *puVar10 - (uint)param_1;
  *puVar10 = uVar4 - uVar8;
  uVar8 = uVar7 + 0x16680800 + (uint)(uVar3 < (uint)param_1 || uVar4 < uVar8);
  pcVar1 = (char *)((ulonglong)uVar8 + 0x280019db);
  *pcVar1 = *pcVar1 + (char)((uint)param_2 >> 8);
  pcVar1 = (char *)(unaff_RSI + CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) * 4);
  *pcVar1 = *pcVar1 + (char)param_2;
  *param_1 = *param_1 + unaff_SPL;
  pcVar1 = (char *)((ulonglong)uVar8 * 2);
  bVar5 = (byte)uVar8;
  *pcVar1 = *pcVar1 + bVar5;
  cVar6 = bVar5 + (byte)param_1;
  uVar3 = CONCAT31((int3)(uVar8 >> 8),cVar6);
  piVar9 = (int *)(ulonglong)uVar3;
  *(char *)piVar9 = (char)*piVar9 + cVar6 + CARRY1(bVar5,(byte)param_1);
  pbVar2 = (byte *)((longlong)piVar9 + -0x244fffef);
  bVar5 = *pbVar2;
  *pbVar2 = *pbVar2 + unaff_BH;
  *piVar9 = (*piVar9 - uVar3) - (uint)CARRY1(bVar5,unaff_BH);
  bVar5 = (byte)(uVar8 >> 8);
  uVar7 = CONCAT22((short)(uVar8 >> 0x10),CONCAT11(bVar5 - unaff_BL,cVar6));
  puVar10 = (uint *)(ulonglong)uVar7;
  uVar4 = (uint)(bVar5 < unaff_BL);
  uVar3 = *puVar10;
  uVar8 = *puVar10;
  *puVar10 = (uVar8 - uVar7) - uVar4;
  *param_1 = *param_1 + cVar6 + -0x62 + (uVar3 < uVar7 || uVar8 - uVar7 < uVar4);
  *param_1 = *param_1 + unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

