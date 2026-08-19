// Function: FUN_1404a47f8
// Addr: 1404a47f8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404a4811) overlaps instruction at (ram,0x0001404a480e)
    */

void FUN_1404a47f8(int *param_1)

{
  char *pcVar1;
  undefined1 uVar2;
  uint uVar3;
  char *in_RAX;
  char unaff_BL;
  uint *puVar4;
  
  *param_1 = *param_1 + (int)param_1;
  uVar3 = (int)CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)in_RAX + *in_RAX) + 0x81821f0;
  puVar4 = (uint *)(ulonglong)uVar3;
  *(char *)puVar4 = (char)*puVar4 + unaff_BL;
  if ((char)*puVar4 == '\0') {
    uVar2 = in(7);
    puVar4 = (uint *)(ulonglong)CONCAT31((int3)(uVar3 >> 8),uVar2);
  }
  uVar3 = (uint)puVar4 | *puVar4;
  pcVar1 = (char *)((ulonglong)(uVar3 | 0x7e40434) - 0x62fff862);
  *pcVar1 = *pcVar1 + ((byte)uVar3 | 0x34);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

