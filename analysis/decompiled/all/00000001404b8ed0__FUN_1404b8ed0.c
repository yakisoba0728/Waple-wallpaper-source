// Function: FUN_1404b8ed0
// Addr: 1404b8ed0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b8ed0(void)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  uint *in_RAX;
  char unaff_BL;
  char unaff_BH;
  int *unaff_RSI;
  char in_CF;
  float10 in_ST0;
  uint *puVar4;
  
  cVar2 = *(char *)((longlong)in_RAX + -0x57f5fff6);
  uVar3 = ((uint)in_RAX | *in_RAX) + 0x20000c98;
  puVar4 = (uint *)(ulonglong)uVar3;
  *unaff_RSI = (int)ROUND(in_ST0);
  *(char *)((longlong)puVar4 + -0x1fffe125) = *(char *)((longlong)puVar4 + -0x1fffe125) + unaff_BL;
  *puVar4 = *puVar4 & uVar3;
  pcVar1 = (char *)((ulonglong)CONCAT31((int3)(uVar3 >> 8),(char)uVar3 + (char)*puVar4) - 0x24dffff6
                   );
  *pcVar1 = *pcVar1 + unaff_BH + cVar2 + in_CF;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

