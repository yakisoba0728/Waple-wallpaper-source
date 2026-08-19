// Function: FUN_1404b7a48
// Addr: 1404b7a48
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b7a48(char *param_1,undefined8 param_2)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  byte bVar7;
  char *in_RAX;
  byte bVar8;
  byte bVar9;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RDI;
  byte *pbVar6;
  
  bVar9 = (byte)((ulonglong)param_2 >> 8);
  bVar8 = (byte)param_2;
  in_RAX[0x4b] = in_RAX[0x4b] - unaff_BH;
  *param_1 = *param_1 + (char)((ulonglong)in_RAX >> 8);
  bVar4 = (byte)in_RAX;
  *in_RAX = *in_RAX + bVar4;
  pbVar1 = (byte *)(in_RAX + -0x8ffe265);
  bVar3 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar4;
  uVar5 = ((int)in_RAX + -0x4b782800) - (uint)CARRY1(bVar3,bVar4);
  pbVar6 = (byte *)(ulonglong)uVar5;
  bVar7 = (byte)(uVar5 >> 8);
  *param_1 = *param_1 + bVar7;
  bVar4 = (byte)uVar5;
  *(char *)((longlong)pbVar6 * 2) = *(char *)((longlong)pbVar6 * 2) + bVar4;
  *(char *)((longlong)param_1 * 2) = *(char *)((longlong)param_1 * 2) + bVar9;
  pbVar1 = pbVar6 + (longlong)param_1;
  bVar3 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar8;
  pcVar2 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + -0x6408ffe3);
  *pcVar2 = (*pcVar2 + -0x1d) - CARRY1(bVar3,bVar8);
  *pbVar6 = *pbVar6 + (char)((ulonglong)param_1 >> 8);
  if (-1 < (char)*pbVar6) {
    *param_1 = *param_1 + bVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *pbVar6 = *pbVar6 | bVar4;
  param_1[unaff_RDI] = param_1[unaff_RDI] + bVar9;
  *pbVar6 = *pbVar6 + bVar8;
  pbVar1 = (byte *)((ulonglong)
                    (CONCAT22((short)(uVar5 >> 0x10),CONCAT11(bVar7 | bVar4 | 0xf0,bVar4)) | 0xf0) +
                   7);
  *pbVar1 = *pbVar1 | bVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

