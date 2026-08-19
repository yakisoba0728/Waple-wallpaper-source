// Function: FUN_1404b7fd0
// Addr: 1404b7fd0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404b7fe9) overlaps instruction at (ram,0x0001404b7fe6)
    */

void FUN_1404b7fd0(undefined8 param_1,undefined2 param_2,undefined8 param_3,byte *param_4)

{
  char *pcVar1;
  byte bVar2;
  code *pcVar3;
  uint uVar4;
  char unaff_BL;
  char unaff_retaddr;
  uint *puVar5;
  
  pcVar3 = (code *)swi(0x1d);
  (*pcVar3)();
  uVar4 = in(param_2);
  puVar5 = (uint *)(ulonglong)uVar4;
  bVar2 = *param_4;
  *param_4 = *param_4 + 0x10;
  *(char *)puVar5 = ((char)*puVar5 - unaff_retaddr) - (0xef < bVar2);
  *(char *)puVar5 = (char)*puVar5 + unaff_BL;
  if ((char)*puVar5 != '\0') {
    pcVar1 = (char *)((ulonglong)(uVar4 | *puVar5 | 0x7f40434) - 0x59ffe232);
    *pcVar1 = *pcVar1 + ((byte)(uVar4 | *puVar5) | 0x34);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

