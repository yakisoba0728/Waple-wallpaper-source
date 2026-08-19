// Function: FUN_1404b0f84
// Addr: 1404b0f84
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b0f84(char *param_1,undefined8 param_2,undefined8 param_3,byte *param_4)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  undefined8 in_RAX;
  uint *puVar5;
  char cVar7;
  byte unaff_BL;
  byte unaff_SPL;
  undefined7 unaff_00000021;
  longlong unaff_RBP;
  char *unaff_RSI;
  longlong unaff_RDI;
  char *pcVar6;
  
  cVar7 = (char)((ulonglong)param_2 >> 8);
  *(byte *)(unaff_RDI + -0x585cffeb) = *(byte *)(unaff_RDI + -0x585cffeb) & 0x15;
  *unaff_RSI = *unaff_RSI + cVar7;
  bVar2 = *param_4;
  *param_4 = *param_4 + unaff_SPL;
  puVar5 = (uint *)CONCAT71((int7)((ulonglong)in_RAX >> 8),
                            (char)in_RAX + '\x06' + CARRY1(bVar2,unaff_SPL));
  pcVar6 = (char *)(CONCAT71(unaff_00000021,unaff_SPL) + (longlong)unaff_RSI * 2);
  *pcVar6 = *pcVar6 + (char)param_2;
  uVar3 = (uint)puVar5 | *puVar5;
  pcVar6 = (char *)(ulonglong)uVar3;
  param_1[0x8e40400] = param_1[0x8e40400] + cVar7;
  *pcVar6 = *pcVar6 + (char)uVar3;
  pbVar1 = (byte *)(pcVar6 + unaff_RBP * 4);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + unaff_BL;
  iVar4 = uVar3 + 0x49e56400 + (uint)CARRY1(bVar2,unaff_BL);
  *param_1 = *param_1 + (char)((uint)iVar4 >> 8);
  pcVar6 = (char *)(CONCAT71(unaff_00000021,unaff_SPL) + (longlong)unaff_RSI * 8);
  *pcVar6 = *pcVar6 + (char)iVar4 + '\x02';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

