// Function: FUN_1404c8e00
// Addr: 1404c8e00
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404c8e4d) overlaps instruction at (ram,0x0001404c8e4c)
    */
/* WARNING: Removing unreachable block (ram,0x0001404c8e4b) */
/* WARNING: Removing unreachable block (ram,0x0001404c8e80) */

void FUN_1404c8e00(char *param_1,undefined2 param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint *in_RAX;
  char unaff_BH;
  char cVar6;
  longlong unaff_RBP;
  undefined1 *unaff_RSI;
  byte *unaff_RDI;
  undefined1 auStack_8 [8];
  byte *pbVar5;
  
  unaff_RSI[0x31] = (byte)unaff_RSI[0x31] >> 1;
  cVar6 = unaff_BH + (char)((ulonglong)param_1 >> 8);
  out(*unaff_RSI,param_2);
  *in_RAX = *in_RAX ^ (uint)in_RAX;
  iVar3 = (int)CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)in_RAX + (char)*in_RAX);
  if (SCARRY4(iVar3,-0x6ffff9cc)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (SCARRY1(cVar6,cVar6)) {
    (&stack0x00000043)[unaff_RBP * 8] = (&stack0x00000043)[unaff_RBP * 8] + (char)param_1;
    *param_1 = *param_1 + (char)(iVar3 + -0x6ffff9cc);
    uVar4 = iVar3 + 0x5bd30631;
    *(char *)(ulonglong)uVar4 = *(char *)(ulonglong)uVar4 + (char)uVar4;
    bVar2 = (char)uVar4 + 2;
    pbVar5 = (byte *)(ulonglong)CONCAT31((int3)(uVar4 >> 8),bVar2);
    bVar1 = *pbVar5;
    *pbVar5 = *pbVar5 + bVar2;
    *(uint *)(unaff_RSI + 1) =
         (*(int *)(unaff_RSI + 1) - (int)auStack_8) - (uint)CARRY1(bVar1,bVar2);
    *unaff_RDI = *unaff_RDI << 1 | (char)*unaff_RDI < '\0';
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  (&stack0x0000004b)[unaff_RBP * 8] = (&stack0x0000004b)[unaff_RBP * 8] + (char)param_1;
  *param_1 = *param_1 + (char)((uint)(iVar3 + -0x6ffff9cc) >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

