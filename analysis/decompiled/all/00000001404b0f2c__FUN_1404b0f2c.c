// Function: FUN_1404b0f2c
// Addr: 1404b0f2c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b0f2c(undefined8 param_1,char param_2,undefined8 param_3,char *param_4)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  code *pcVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  undefined1 uVar9;
  char cVar10;
  undefined6 uVar11;
  longlong unaff_RSI;
  byte in_CF;
  undefined1 auStackX_8 [32];
  char *pcVar8;
  
  uVar11 = (undefined6)((ulonglong)param_1 >> 0x10);
  cVar10 = (char)((ulonglong)param_1 >> 8);
  uVar9 = (undefined1)param_1;
  pcVar4 = (code *)swi(0xa4);
  iVar6 = (*pcVar4)();
  uVar7 = iVar6 + 0x15a59c00 + (uint)in_CF;
  pcVar8 = (char *)(ulonglong)uVar7;
  pcVar2 = (char *)(unaff_RSI + CONCAT62(uVar11,CONCAT11(cVar10,uVar9)));
  *pcVar2 = *pcVar2 + param_2;
  *param_4 = *param_4 + (char)auStackX_8;
  bVar5 = (byte)uVar7;
  *pcVar8 = *pcVar8 + bVar5;
  pbVar1 = (byte *)(pcVar8 + -0x5c);
  bVar3 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar5;
  uVar7 = uVar7 + 0x15a4cd00 + (uint)CARRY1(bVar3,bVar5);
  (&stack0x00000052)[(ulonglong)uVar7 * 2] = (&stack0x00000052)[(ulonglong)uVar7 * 2] + cVar10;
  *(char *)CONCAT62(uVar11,CONCAT11(cVar10,uVar9)) =
       *(char *)CONCAT62(uVar11,CONCAT11(cVar10,uVar9)) + (char)(uVar7 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

