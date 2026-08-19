// Function: FUN_1404d3b00
// Addr: 1404d3b00
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d3b00(void)

{
  uint *puVar1;
  char cVar2;
  uint unaff_EBX;
  undefined8 *puVar3;
  undefined8 *unaff_RBP;
  undefined8 uStack_10;
  
  puVar3 = (undefined8 *)&stack0xfffffffffffffff8;
  cVar2 = '\x1d';
  do {
    unaff_RBP = unaff_RBP + -1;
    puVar3 = puVar3 + -1;
    *puVar3 = *unaff_RBP;
    cVar2 = cVar2 + -1;
  } while ('\0' < cVar2);
  puVar1 = (uint *)(CONCAT71(0xa83600,bRam00000000a8360009 | 9) + -0x77d3fff5);
  *puVar1 = *puVar1 ^ unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

