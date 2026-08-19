// Function: FUN_1404a2650
// Addr: 1404a2650
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404a2679) overlaps instruction at (ram,0x0001404a2676)
    */

void FUN_1404a2650(char *param_1,longlong param_2)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  byte *in_RAX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  uint *puVar5;
  
  cVar2 = (char)((ulonglong)param_2 >> 8);
  *(uint *)(in_RAX + unaff_RSI) = *(uint *)(in_RAX + unaff_RSI) & (uint)param_2;
  (&stack0x00000000)[unaff_RSI * 2] = (&stack0x00000000)[unaff_RSI * 2] + (char)param_2;
  *in_RAX = *in_RAX | (byte)in_RAX;
  param_1[unaff_RDI] = param_1[unaff_RDI] + cVar2;
  *(char *)(unaff_RBP + 3) = *(char *)(unaff_RBP + 3) + cVar2;
  iVar3 = (int)in_RAX + 0x4f280400;
  *param_1 = *param_1 + (char)((uint)iVar3 >> 8);
  cVar2 = (char)iVar3 + '\x02';
  uVar4 = CONCAT31((int3)((uint)iVar3 >> 8),cVar2);
  puVar5 = (uint *)(ulonglong)uVar4;
  (&stack0x00000000)[param_2 * 2] = (&stack0x00000000)[param_2 * 2] + cVar2;
  *puVar5 = *puVar5 | uVar4;
  if (*puVar5 != 0) {
    uVar4 = uVar4 + iRam000000018a6fa67f;
    *param_1 = *param_1 + (char)(uVar4 >> 8);
  }
  pcVar1 = (char *)((ulonglong)(uVar4 + 0x5039200) + 0x21004a25);
  *pcVar1 = *pcVar1 + (char)(uVar4 + 0x5039200);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

