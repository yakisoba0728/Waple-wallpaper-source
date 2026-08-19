// Function: FUN_1404c8e28
// Addr: 1404c8e28
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404c8e6c) overlaps instruction at (ram,0x0001404c8e68)
    */

void FUN_1404c8e28(char *param_1,char param_2)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  char cVar4;
  byte bVar5;
  uint uVar6;
  uint *in_RAX;
  char unaff_BH;
  longlong unaff_RBP;
  int *unaff_RSI;
  byte *unaff_RDI;
  char unaff_R12B;
  undefined1 auStack_8 [8];
  byte *pbVar7;
  
  cVar4 = (char)in_RAX;
  param_1[(longlong)unaff_RSI * 2] = param_1[(longlong)unaff_RSI * 2] + cVar4;
  uVar6 = (uint)in_RAX;
  *in_RAX = *in_RAX ^ uVar6;
  *param_1 = *param_1 + unaff_R12B;
  *(char *)in_RAX = (char)*in_RAX + cVar4;
  if (SCARRY1(unaff_BH,unaff_BH)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  param_1[(longlong)unaff_RSI * 2] = param_1[(longlong)unaff_RSI * 2] + cVar4;
  *in_RAX = *in_RAX ^ uVar6;
  *param_1 = *param_1 + unaff_R12B;
  *(char *)in_RAX = (char)*in_RAX + cVar4;
  puVar1 = in_RAX + -0x3ff3a4;
  uVar3 = *puVar1;
  *(char *)puVar1 = (char)*puVar1 + param_2;
  if (SCARRY1((char)uVar3,param_2)) {
    uRam0000000174518e88 = uRam0000000174518e88 & uVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  (&stack0x00000043)[unaff_RBP * 8] = (&stack0x00000043)[unaff_RBP * 8] + (char)param_1;
  *param_1 = *param_1 + cVar4;
  uVar6 = uVar6 + 0xcbd2fffd;
  *(char *)(ulonglong)uVar6 = *(char *)(ulonglong)uVar6 + (char)uVar6;
  bVar5 = (char)uVar6 + 2;
  pbVar7 = (byte *)(ulonglong)CONCAT31((int3)(uVar6 >> 8),bVar5);
  bVar2 = *pbVar7;
  *pbVar7 = *pbVar7 + bVar5;
  *unaff_RSI = (*unaff_RSI - (int)auStack_8) - (uint)CARRY1(bVar2,bVar5);
  *unaff_RDI = *unaff_RDI << 1 | (char)*unaff_RDI < '\0';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

