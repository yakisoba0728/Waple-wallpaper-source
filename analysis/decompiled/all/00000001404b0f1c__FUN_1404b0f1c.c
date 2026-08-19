// Function: FUN_1404b0f1c
// Addr: 1404b0f1c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b0f1c(undefined8 param_1,char param_2,undefined8 param_3,char *param_4)

{
  byte *pbVar1;
  code *pcVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  byte bVar7;
  byte bVar8;
  char cVar9;
  undefined6 uVar10;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  byte in_CF;
  undefined1 auStackX_8 [32];
  
  uVar10 = (undefined6)((ulonglong)param_1 >> 0x10);
  bVar8 = (byte)((ulonglong)param_1 >> 8);
  bVar7 = (byte)param_1;
  pcVar2 = (code *)swi(0xa4);
  iVar4 = (*pcVar2)();
  uVar5 = iVar4 + 0x15a59c00 + (uint)in_CF;
  unaff_RSI[CONCAT62(uVar10,CONCAT11(bVar8,bVar7))] =
       unaff_RSI[CONCAT62(uVar10,CONCAT11(bVar8,bVar7))] + param_2;
  *param_4 = *param_4 + (char)auStackX_8;
  *(char *)(ulonglong)uVar5 = *(char *)(ulonglong)uVar5 + (char)uVar5;
  cVar9 = bVar8 + bVar7;
  *unaff_RDI = *unaff_RSI;
  uVar5 = uVar5 + 0x15a59c00 + (uint)CARRY1(bVar8,bVar7);
  pcVar6 = (char *)(ulonglong)uVar5;
  unaff_RSI[CONCAT62(uVar10,CONCAT11(cVar9,bVar7)) + 1] =
       unaff_RSI[CONCAT62(uVar10,CONCAT11(cVar9,bVar7)) + 1] + param_2;
  *param_4 = *param_4 + (char)auStackX_8;
  bVar3 = (byte)uVar5;
  *pcVar6 = *pcVar6 + bVar3;
  pbVar1 = (byte *)(pcVar6 + -0x5c);
  bVar8 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar3;
  uVar5 = uVar5 + 0x15a4cd00 + (uint)CARRY1(bVar8,bVar3);
  (&stack0x00000052)[(ulonglong)uVar5 * 2] = (&stack0x00000052)[(ulonglong)uVar5 * 2] + cVar9;
  *(char *)CONCAT62(uVar10,CONCAT11(cVar9,bVar7)) =
       *(char *)CONCAT62(uVar10,CONCAT11(cVar9,bVar7)) + (char)(uVar5 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

