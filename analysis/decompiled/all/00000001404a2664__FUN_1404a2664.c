// Function: FUN_1404a2664
// Addr: 1404a2664
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404a2679) overlaps instruction at (ram,0x0001404a2676)
    */

void FUN_1404a2664(char *param_1,longlong param_2)

{
  char *pcVar1;
  char cVar2;
  uint in_EAX;
  int iVar3;
  uint uVar4;
  bool in_ZF;
  uint *puVar5;
  
  if (!in_ZF) {
    in_EAX = in_EAX & 0xffffff4a;
  }
  iVar3 = in_EAX + 0x4a24b400;
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

