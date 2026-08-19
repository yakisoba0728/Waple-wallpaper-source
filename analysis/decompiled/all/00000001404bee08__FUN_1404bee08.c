// Function: FUN_1404bee08
// Addr: 1404bee08
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404bee0b) overlaps instruction at (ram,0x0001404bee0a)
    */

void FUN_1404bee08(char *param_1,longlong param_2,undefined8 param_3,char *param_4)

{
  uint uVar1;
  uint uVar2;
  char *pcVar4;
  uint *in_RAX;
  byte bVar5;
  char cVar6;
  char unaff_BL;
  char unaff_BH;
  char cVar7;
  int unaff_ESP;
  char *pcVar8;
  char *unaff_RSI;
  bool in_ZF;
  byte *pbVar3;
  
  cVar6 = (char)((ulonglong)param_2 >> 8);
  bVar5 = (byte)param_2;
  if (in_ZF) {
    *in_RAX = *in_RAX & (uint)in_RAX;
    *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
    unaff_RSI[0x2694d900] = unaff_RSI[0x2694d900] + bVar5;
    *(char *)((longlong)in_RAX + 0x1f) = *(char *)((longlong)in_RAX + 0x1f) + unaff_BH;
    cVar7 = (char)unaff_ESP;
    *param_1 = *param_1 + cVar7;
    uVar2 = (uint)in_RAX + 0x34050002;
    pbVar3 = (byte *)(ulonglong)uVar2;
    *pbVar3 = *pbVar3 | (byte)uVar2;
    unaff_RSI[-0x698bffda] = unaff_RSI[-0x698bffda] & bVar5;
    pbVar3[(longlong)unaff_RSI * 8 + 0x13210049] =
         pbVar3[(longlong)unaff_RSI * 8 + 0x13210049] + bVar5;
    uVar1 = (int)unaff_RSI + unaff_ESP;
    uVar2 = CONCAT31((int3)(uVar2 >> 8),(byte)uVar2 | *(byte *)(ulonglong)uVar2) + 0x74000954;
    pcVar4 = (char *)(ulonglong)uVar1;
    pcVar8 = (char *)(ulonglong)uVar2;
    pcVar8[param_2 * 4 + -0x131fffda] = pcVar8[param_2 * 4 + -0x131fffda] + unaff_BL;
    *param_4 = *param_4 + cVar7;
    *pcVar4 = *pcVar4 + (char)uVar1;
    pcVar8[param_2 * 4 + 0x26] = pcVar8[param_2 * 4 + 0x26] + cVar6;
    pcVar8[param_2 * 4 + -0x131fffda] = pcVar8[param_2 * 4 + -0x131fffda] + unaff_BL;
    *param_4 = *param_4 + cVar7;
    *pcVar4 = *pcVar4 + (char)uVar1;
    *pcVar4 = *pcVar4 + (char)(uVar1 >> 8);
    in_RAX = (uint *)(ulonglong)uVar1;
    pcVar4 = (char *)((longlong)in_RAX + param_2 * 4 + 0x26);
    *pcVar4 = *pcVar4 + cVar6;
    pcVar8[(longlong)in_RAX * 8 + 0x210049] = pcVar8[(longlong)in_RAX * 8 + 0x210049] + bVar5;
    unaff_RSI = (char *)(ulonglong)CONCAT31((int3)(uVar2 >> 8),(char)uVar2 + *pcVar8);
    unaff_RSI[(longlong)param_1] = unaff_RSI[(longlong)param_1] + cVar6;
    *unaff_RSI = *unaff_RSI + (char)(uVar2 >> 8);
    unaff_RSI[param_2 * 4 + 0x26] = unaff_RSI[param_2 * 4 + 0x26] + cVar6;
    pcVar4 = (char *)((longlong)in_RAX + (longlong)unaff_RSI * 8 + 0x210049);
    *pcVar4 = *pcVar4 + bVar5;
  }
  pcVar4 = (char *)((longlong)in_RAX + (longlong)unaff_RSI * 8 + 0x210049);
  *pcVar4 = *pcVar4 + bVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

