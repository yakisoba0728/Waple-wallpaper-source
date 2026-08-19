// Function: FUN_1404c4374
// Addr: 1404c4374
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404c43c6) overlaps instruction at (ram,0x0001404c43c4)
    */
/* WARNING: Removing unreachable block (ram,0x0001404c43f1) */

void FUN_1404c4374(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined3 uVar2;
  byte bVar3;
  char cVar4;
  byte bVar5;
  uint uVar6;
  undefined8 in_RAX;
  char *pcVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *unaff_RBX;
  longlong unaff_RBP;
  char *unaff_RSI;
  int unaff_EDI;
  undefined4 unaff_0000003c;
  undefined2 in_FPUControlWord;
  undefined2 in_FPUStatusWord;
  undefined2 in_FPUTagWord;
  undefined2 in_FPULastInstructionOpcode;
  undefined8 in_FPUDataPointer;
  undefined8 in_FPUInstructionPointer;
  char *pcVar7;
  
  bVar3 = (byte)in_RAX & (byte)param_2;
  pcVar7 = (char *)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar3);
  pcVar7[2] = pcVar7[2] + (byte)param_2;
  *pcVar7 = *pcVar7 + bVar3;
  *(int *)(pcVar7 + param_2) = *(int *)(pcVar7 + param_2) + (int)param_1;
  pcVar8 = (char *)(param_2 + (longlong)unaff_RSI * 2);
  bVar3 = (byte)param_1;
  *pcVar8 = *pcVar8 + bVar3;
  uVar6 = (int)pcVar7 + 0x40f1150;
  *(byte *)CONCAT44(unaff_0000003c,unaff_EDI) = *(char *)CONCAT44(unaff_0000003c,unaff_EDI) + bVar3;
  pcVar8 = (char *)((ulonglong)uVar6 ^ 6);
  *(byte *)CONCAT44(unaff_0000003c,unaff_EDI) = *(char *)CONCAT44(unaff_0000003c,unaff_EDI) + bVar3;
  pbVar10 = (byte *)CONCAT71((int7)((ulonglong)param_1 >> 8),bVar3 ^ *unaff_RBX);
  cVar4 = (char)pcVar8;
  *pbVar10 = *pbVar10 + cVar4;
  *pcVar8 = *pcVar8 + cVar4;
  uVar2 = (undefined3)(uVar6 >> 8);
  pcVar8 = (char *)(ulonglong)CONCAT31(uVar2,cVar4);
  lVar1 = (longlong)pcVar8 * 2;
  *(undefined2 *)(lVar1 + 0xbb3d002c) = in_FPUControlWord;
  *(undefined2 *)(lVar1 + 0xbb3d0030) = in_FPUStatusWord;
  *(undefined2 *)(lVar1 + 0xbb3d0034) = in_FPUTagWord;
  *(undefined8 *)(lVar1 + 0xbb3d0040) = in_FPUDataPointer;
  *(undefined8 *)(lVar1 + 0xbb3d0038) = in_FPUInstructionPointer;
  *(undefined2 *)(lVar1 + 0xbb3d003e) = in_FPULastInstructionOpcode;
  *pcVar8 = *pcVar8 + cVar4;
  *pcVar8 = *pcVar8 + cVar4;
  bVar3 = *pbVar10;
  *pbVar10 = *pbVar10 + 0x2c;
  bVar3 = cVar4 + *unaff_RSI + (0xd3 < bVar3);
  cVar4 = cRam00000000bb3d002c + ',';
  cRam00000000bb3d002c = cRam00000000bb3d002c + 'X';
  pbVar10 = pbVar10 + -1;
  if (pbVar10 != (byte *)0x0 && cRam00000000bb3d002c != '\0') {
    uVar6 = CONCAT31(uVar2,bVar3) ^ 0x52;
    pbVar9 = (byte *)(ulonglong)uVar6;
    bVar3 = *pbVar9;
    bVar5 = (byte)uVar6;
    *pbVar9 = *pbVar9 + bVar5;
    *(uint *)CONCAT44(unaff_0000003c,unaff_EDI) =
         *(int *)CONCAT44(unaff_0000003c,unaff_EDI) + (int)pbVar10 + (uint)CARRY1(bVar3,bVar5);
    sysenter();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (SCARRY1(cVar4,',')) {
    pcVar8 = (char *)(ulonglong)(CONCAT31(uVar2,bVar3) ^ 0x10);
    *(int *)(&stack0x42354200 + unaff_RBP) = *(int *)(&stack0x42354200 + unaff_RBP) - unaff_EDI;
    *pcVar8 = *pcVar8 + (bVar3 ^ 0x10);
    *pcVar8 = *pcVar8 + (bVar3 ^ 0x10);
    *pbVar10 = *pbVar10 + 0xe;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

