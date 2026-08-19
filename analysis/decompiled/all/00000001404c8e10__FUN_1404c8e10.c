// Function: FUN_1404c8e10
// Addr: 1404c8e10
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404c8e4d) overlaps instruction at (ram,0x0001404c8e4c)
    */
/* WARNING: Removing unreachable block (ram,0x0001404c8e4b) */
/* WARNING: Removing unreachable block (ram,0x0001404c8e80) */

void FUN_1404c8e10(char *param_1)

{
  byte bVar1;
  byte bVar2;
  int in_EAX;
  uint uVar3;
  char unaff_BH;
  longlong unaff_RBP;
  int *unaff_RSI;
  byte *unaff_RDI;
  undefined1 auStack_8 [8];
  byte *pbVar4;
  
  if (SCARRY4(in_EAX,-0x6ffff9cc)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (SCARRY1(unaff_BH,unaff_BH)) {
    (&stack0x00000043)[unaff_RBP * 8] = (&stack0x00000043)[unaff_RBP * 8] + (char)param_1;
    *param_1 = *param_1 + (char)(in_EAX + -0x6ffff9cc);
    uVar3 = in_EAX + 0x5bd30631;
    *(char *)(ulonglong)uVar3 = *(char *)(ulonglong)uVar3 + (char)uVar3;
    bVar2 = (char)uVar3 + 2;
    pbVar4 = (byte *)(ulonglong)CONCAT31((int3)(uVar3 >> 8),bVar2);
    bVar1 = *pbVar4;
    *pbVar4 = *pbVar4 + bVar2;
    *unaff_RSI = (*unaff_RSI - (int)auStack_8) - (uint)CARRY1(bVar1,bVar2);
    *unaff_RDI = *unaff_RDI << 1 | (char)*unaff_RDI < '\0';
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  (&stack0x0000004b)[unaff_RBP * 8] = (&stack0x0000004b)[unaff_RBP * 8] + (char)param_1;
  *param_1 = *param_1 + (char)((uint)(in_EAX + -0x6ffff9cc) >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

