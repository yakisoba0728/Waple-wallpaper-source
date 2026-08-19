// Function: FUN_1404b02fc
// Addr: 1404b02fc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404b033d) overlaps instruction at (ram,0x0001404b033a)
    */
/* WARNING: Removing unreachable block (ram,0x0001404b033d) */

void FUN_1404b02fc(undefined8 param_1,char *param_2)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  uint *in_RAX;
  char *pcVar6;
  byte bVar7;
  char unaff_BH;
  longlong unaff_RSI;
  
  bVar7 = (byte)((ulonglong)param_2 >> 8);
  *in_RAX = *in_RAX & (uint)in_RAX;
  uVar4 = *in_RAX;
  *(byte *)in_RAX = (byte)*in_RAX + (byte)in_RAX;
  uVar4 = (int)CONCAT71((int7)((ulonglong)in_RAX >> 8),0x24) + 0x1525ba00 +
          (uint)CARRY1((byte)uVar4,(byte)in_RAX);
  *(char *)((ulonglong)uVar4 + 0x210049ec) = *(char *)((ulonglong)uVar4 + 0x210049ec) + unaff_BH;
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
  (&stack0x00000000)[unaff_RSI * 8] =
       (&stack0x00000000)[unaff_RSI * 8] + (char)((ulonglong)param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

