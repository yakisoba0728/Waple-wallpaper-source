// Function: FUN_1404c4398
// Addr: 1404c4398
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404c43c6) overlaps instruction at (ram,0x0001404c43c4)
    */

void FUN_1404c4398(byte *param_1,char *param_2)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  char *in_RAX;
  undefined7 uVar7;
  char *pcVar5;
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
  byte *pbVar6;
  
  bVar3 = (byte)param_2;
  param_2[-0x44c2ffd4] = param_2[-0x44c2ffd4] >> ((byte)param_1 & 0x1f);
  cVar1 = (char)in_RAX;
  uVar7 = (undefined7)((ulonglong)in_RAX >> 8);
  pcVar5 = param_2 + (longlong)in_RAX * 2;
  *(undefined2 *)pcVar5 = in_FPUControlWord;
  *(undefined2 *)(pcVar5 + 4) = in_FPUStatusWord;
  *(undefined2 *)(pcVar5 + 8) = in_FPUTagWord;
  *(undefined8 *)(pcVar5 + 0x14) = in_FPUDataPointer;
  *(undefined8 *)(pcVar5 + 0xc) = in_FPUInstructionPointer;
  *(undefined2 *)(pcVar5 + 0x12) = in_FPULastInstructionOpcode;
  *in_RAX = *in_RAX + cVar1;
  *in_RAX = *in_RAX + cVar1;
  bVar2 = *param_1;
  *param_1 = *param_1 + bVar3;
  bVar2 = cVar1 + *unaff_RSI + CARRY1(bVar2,bVar3);
  *param_2 = *param_2 + bVar3;
  cVar1 = *param_2;
  *param_2 = *param_2 + bVar3;
  param_1 = param_1 + -1;
  if (param_1 != (byte *)0x0 && *param_2 != '\0') {
    uVar4 = (uint)CONCAT71(uVar7,bVar2) ^ 0x52;
    pbVar6 = (byte *)(ulonglong)uVar4;
    bVar2 = *pbVar6;
    bVar3 = (byte)uVar4;
    *pbVar6 = *pbVar6 + bVar3;
    *(uint *)CONCAT44(unaff_0000003c,unaff_EDI) =
         *(int *)CONCAT44(unaff_0000003c,unaff_EDI) + (int)param_1 + (uint)CARRY1(bVar2,bVar3);
    sysenter();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!SCARRY1(cVar1,bVar3)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar5 = (char *)(CONCAT71(uVar7,bVar2) ^ 0x10);
  *(int *)(&stack0x42354200 + unaff_RBP) = *(int *)(&stack0x42354200 + unaff_RBP) - unaff_EDI;
  *pcVar5 = *pcVar5 + (bVar2 ^ 0x10);
  *pcVar5 = *pcVar5 + (bVar2 ^ 0x10);
  *param_1 = *param_1 + 0xe;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

