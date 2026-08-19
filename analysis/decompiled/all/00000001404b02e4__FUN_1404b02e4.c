// Function: FUN_1404b02e4
// Addr: 1404b02e4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404b033d) overlaps instruction at (ram,0x0001404b033a)
    */
/* WARNING: Removing unreachable block (ram,0x0001404b033d) */

void FUN_1404b02e4(undefined8 param_1,char *param_2,undefined8 param_3,char *param_4)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  byte bVar7;
  char unaff_BH;
  char unaff_SPL;
  undefined7 unaff_00000021;
  longlong unaff_RSI;
  
  bVar7 = (byte)((ulonglong)param_2 >> 8);
  pcVar6 = (char *)0x210049ec;
  *param_2 = *param_2 + -0x14;
  cRam00000000210049ec = cRam00000000210049ec + -0x14;
  if (cRam00000000210049ec == '\0') {
    cRam00000000420093d8 = cRam00000000420093d8 + unaff_BH;
  }
  else {
    cRamffffffffdb005f10 = cRamffffffffdb005f10 + bVar7;
    pcVar6 = (char *)0x20000004;
    *param_4 = *param_4 + unaff_SPL;
  }
  *pcVar6 = *pcVar6 + (char)pcVar6;
  pcVar6[-0x45ffeadc] = pcVar6[-0x45ffeadc] + bVar7;
  uVar4 = (uint)pcVar6 & 0xecb80015;
  *param_4 = *param_4 + unaff_SPL;
  uVar5 = uVar4 + 0x74050002;
  *(byte *)(ulonglong)uVar5 = *(byte *)(ulonglong)uVar5 | (byte)uVar5;
  pcVar6 = (char *)(ulonglong)(uVar4 + 0x892d7a02);
  pcVar6[0x210049ec] = pcVar6[0x210049ec] + unaff_BH;
  cVar3 = (char)(uVar4 + 0x892d7a02);
  *param_2 = *param_2 + cVar3;
  *pcVar6 = *pcVar6 + cVar3;
  if (*pcVar6 != '\0') {
    pbVar1 = (byte *)(pcVar6 + 0x27);
    bVar2 = *pbVar1;
    *pbVar1 = *pbVar1 + bVar7;
    pcVar6 = (char *)(ulonglong)(uVar4 + 0x9e55f402 + (uint)CARRY1(bVar2,bVar7));
  }
  pcVar6[0x210049ec] = pcVar6[0x210049ec] + unaff_BH;
  *pcVar6 = *pcVar6 + (char)pcVar6;
  pbVar1 = (byte *)(pcVar6 + 0x27);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar7;
  pcVar6 = (char *)((ulonglong)((int)pcVar6 + 0x15287a00 + (uint)CARRY1(bVar2,bVar7)) + 0x210049ec);
  *pcVar6 = *pcVar6 + unaff_BH;
  pcVar6 = (char *)(CONCAT71(unaff_00000021,unaff_SPL) + unaff_RSI * 8);
  *pcVar6 = *pcVar6 + (char)((ulonglong)param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

