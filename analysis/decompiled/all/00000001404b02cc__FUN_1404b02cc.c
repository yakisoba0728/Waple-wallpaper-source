// Function: FUN_1404b02cc
// Addr: 1404b02cc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404b033d) overlaps instruction at (ram,0x0001404b033a)
    */
/* WARNING: Removing unreachable block (ram,0x0001404b033d) */

void FUN_1404b02cc(char *param_1,char *param_2,undefined8 param_3,char *param_4)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  int in_EAX;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  byte bVar8;
  char unaff_BH;
  char unaff_SPL;
  undefined7 unaff_00000021;
  longlong unaff_RSI;
  byte in_CF;
  
  bVar8 = (byte)((ulonglong)param_2 >> 8);
  iVar4 = in_EAX + 0x49eda800 + (uint)in_CF;
  *param_1 = *param_1 + (char)((uint)iVar4 >> 8);
  uVar5 = iVar4 + 0x74050002;
  *(byte *)(ulonglong)uVar5 = *(byte *)(ulonglong)uVar5 | (byte)uVar5;
  uVar5 = (int)CONCAT71((uint7)(uint3)(uVar5 >> 8),0x24) + 0x1525ba00;
  pcVar7 = (char *)(ulonglong)uVar5;
  pcVar7[0x210049ec] = pcVar7[0x210049ec] + unaff_BH;
  *param_2 = *param_2 + (char)uVar5;
  *pcVar7 = *pcVar7 + (char)uVar5;
  if (*pcVar7 == '\0') {
    pcVar7[0x210049ec] = pcVar7[0x210049ec] + unaff_BH;
  }
  else {
    pcVar7[-0x45ffeadc] = pcVar7[-0x45ffeadc] + bVar8;
    pcVar7 = (char *)(ulonglong)(uVar5 & 0xecb80015);
    *param_4 = *param_4 + unaff_SPL;
  }
  *pcVar7 = *pcVar7 + (char)pcVar7;
  pcVar7[-0x45ffeadc] = pcVar7[-0x45ffeadc] + bVar8;
  uVar5 = (uint)pcVar7 & 0xecb80015;
  *param_4 = *param_4 + unaff_SPL;
  uVar6 = uVar5 + 0x74050002;
  *(byte *)(ulonglong)uVar6 = *(byte *)(ulonglong)uVar6 | (byte)uVar6;
  pcVar7 = (char *)(ulonglong)(uVar5 + 0x892d7a02);
  pcVar7[0x210049ec] = pcVar7[0x210049ec] + unaff_BH;
  cVar3 = (char)(uVar5 + 0x892d7a02);
  *param_2 = *param_2 + cVar3;
  *pcVar7 = *pcVar7 + cVar3;
  if (*pcVar7 != '\0') {
    pbVar1 = (byte *)(pcVar7 + 0x27);
    bVar2 = *pbVar1;
    *pbVar1 = *pbVar1 + bVar8;
    pcVar7 = (char *)(ulonglong)(uVar5 + 0x9e55f402 + (uint)CARRY1(bVar2,bVar8));
  }
  pcVar7[0x210049ec] = pcVar7[0x210049ec] + unaff_BH;
  *pcVar7 = *pcVar7 + (char)pcVar7;
  pbVar1 = (byte *)(pcVar7 + 0x27);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar8;
  pcVar7 = (char *)((ulonglong)((int)pcVar7 + 0x15287a00 + (uint)CARRY1(bVar2,bVar8)) + 0x210049ec);
  *pcVar7 = *pcVar7 + unaff_BH;
  pcVar7 = (char *)(CONCAT71(unaff_00000021,unaff_SPL) + unaff_RSI * 8);
  *pcVar7 = *pcVar7 + (char)((ulonglong)param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

