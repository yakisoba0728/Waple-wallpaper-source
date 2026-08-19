// Function: FUN_1404ad704
// Addr: 1404ad704
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ad704(void)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  uint *puVar4;
  char unaff_BL;
  longlong unaff_RSI;
  char in_CF;
  char *pcVar5;
  
  puVar4 = (uint *)CONCAT71(0x1004a,-0x36 - in_CF);
  (&stack0x00000000)[unaff_RSI] = (&stack0x00000000)[unaff_RSI] + unaff_BL;
  uVar3 = (uint)puVar4 & *puVar4;
  cVar2 = (char)uVar3;
  cVar1 = cVar2 + -1;
  pcVar5 = (char *)(ulonglong)CONCAT31((int3)(uVar3 >> 8),cVar1);
  *pcVar5 = (*pcVar5 - cVar1) - (cVar2 == '\0');
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

