// Function: FUN_1404b0f0c
// Addr: 1404b0f0c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b0f0c(undefined8 param_1,char param_2,undefined8 param_3,char *param_4)

{
  byte *pbVar1;
  undefined1 *puVar2;
  char cVar3;
  uint uVar4;
  undefined8 in_RAX;
  char *pcVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  undefined6 uVar9;
  char unaff_SPL;
  undefined7 unaff_00000021;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  char in_CF;
  
  uVar9 = (undefined6)((ulonglong)param_1 >> 0x10);
  bVar7 = (byte)((ulonglong)param_1 >> 8);
  bVar6 = (byte)param_1;
  cVar3 = (char)in_RAX + '\x0e' + in_CF;
  *param_4 = *param_4 + unaff_SPL;
  pcVar5 = (char *)(CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar3) * 2);
  *pcVar5 = *pcVar5 + cVar3;
  bVar8 = bVar7 + bVar6;
  puVar2 = unaff_RSI + 1;
  *unaff_RDI = *unaff_RSI;
  uVar4 = ((uint)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                          CONCAT11((char)((ulonglong)in_RAX >> 8) + param_2,cVar3)) | 0xcc40000) +
          0x15a59c00 + (uint)CARRY1(bVar7,bVar6);
  puVar2[CONCAT62(uVar9,CONCAT11(bVar8,bVar6))] =
       puVar2[CONCAT62(uVar9,CONCAT11(bVar8,bVar6))] + param_2;
  *param_4 = *param_4 + unaff_SPL;
  *(char *)(ulonglong)uVar4 = *(char *)(ulonglong)uVar4 + (char)uVar4;
  cVar3 = bVar8 + bVar6;
  unaff_RDI[1] = *puVar2;
  uVar4 = uVar4 + 0x15a59c00 + (uint)CARRY1(bVar8,bVar6);
  pcVar5 = (char *)(ulonglong)uVar4;
  unaff_RSI[CONCAT62(uVar9,CONCAT11(cVar3,bVar6)) + 2] =
       unaff_RSI[CONCAT62(uVar9,CONCAT11(cVar3,bVar6)) + 2] + param_2;
  *param_4 = *param_4 + unaff_SPL;
  bVar8 = (byte)uVar4;
  *pcVar5 = *pcVar5 + bVar8;
  pbVar1 = (byte *)(pcVar5 + -0x5c);
  bVar7 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar8;
  uVar4 = uVar4 + 0x15a4cd00 + (uint)CARRY1(bVar7,bVar8);
  pcVar5 = (char *)(CONCAT71(unaff_00000021,unaff_SPL) + 0x4a + (ulonglong)uVar4 * 2);
  *pcVar5 = *pcVar5 + cVar3;
  *(char *)CONCAT62(uVar9,CONCAT11(cVar3,bVar6)) =
       *(char *)CONCAT62(uVar9,CONCAT11(cVar3,bVar6)) + (char)(uVar4 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

