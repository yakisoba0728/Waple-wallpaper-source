// Function: FUN_1404a1164
// Addr: 1404a1164
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404a1192) overlaps instruction at (ram,0x0001404a1191)
    */

void FUN_1404a1164(byte *param_1,longlong param_2)

{
  byte bVar1;
  undefined3 uVar2;
  byte *pbVar3;
  char cVar4;
  byte bVar5;
  uint uVar6;
  undefined8 in_RAX;
  ulonglong uVar8;
  char cVar9;
  longlong unaff_RBX;
  longlong unaff_RBP;
  char *unaff_RSI;
  bool bVar10;
  char *pcVar7;
  
  cVar9 = (char)((ulonglong)param_2 >> 8);
  param_1[unaff_RBX] = param_1[unaff_RBX] + cVar9;
  param_1[(longlong)&stack0x00000000] =
       param_1[(longlong)&stack0x00000000] + (char)((ulonglong)in_RAX >> 8);
  param_1[0x3a07000] = param_1[0x3a07000] + cVar9;
  *(char *)(unaff_RBP + 0x640003a0) = *(char *)(unaff_RBP + 0x640003a0) + (byte)param_2;
  uVar6 = in(0x49);
  *param_1 = *param_1 + (char)(uVar6 >> 8);
  *unaff_RSI = *unaff_RSI + (char)uVar6;
  *(char *)(ulonglong)uVar6 = *(char *)(ulonglong)uVar6 + (char)uVar6;
  uVar2 = (undefined3)(uVar6 >> 8);
  cVar4 = in(8);
  pcVar7 = (char *)(ulonglong)CONCAT31(uVar2,cVar4);
  *pcVar7 = *pcVar7 + cVar4;
  if (*pcVar7 == '\0') {
    uVar6 = in(0x49);
    uVar8 = (ulonglong)uVar6;
    bVar1 = *param_1;
    bVar5 = (byte)uVar6;
    *param_1 = *param_1 + bVar5;
    pbVar3 = (byte *)(uVar8 * 2);
    bVar10 = CARRY1(*pbVar3,bVar5) || CARRY1(*pbVar3 + bVar5,CARRY1(bVar1,bVar5));
    *pbVar3 = *pbVar3 + bVar5 + CARRY1(bVar1,bVar5);
  }
  else {
    *pcVar7 = *pcVar7 + cVar4;
    pcVar7 = (char *)(((ulonglong)CONCAT31(uVar2,cVar4) ^ 0xd) - 0x60);
    *pcVar7 = *pcVar7 + cVar9;
    bVar10 = false;
    uVar8 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),uRam10010049e5640003) & 0xffffffff;
  }
  *(char *)(param_2 + -0x1ff50ff4) = *(char *)(param_2 + -0x1ff50ff4) + cVar9 + bVar10;
  *(byte *)(uVar8 + 0x21) = *(byte *)(uVar8 + 0x21) | (byte)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

