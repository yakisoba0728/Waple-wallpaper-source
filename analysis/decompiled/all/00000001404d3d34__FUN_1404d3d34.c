// Function: FUN_1404d3d34
// Addr: 1404d3d34
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404d3d6f) overlaps instruction at (ram,0x0001404d3d6e)
    */

void FUN_1404d3d34(char *param_1,undefined8 param_2)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  byte *unaff_RBX;
  undefined8 *puVar4;
  undefined8 *unaff_RBP;
  undefined1 *unaff_RSI;
  char *unaff_RDI;
  undefined8 uStack_10;
  
  puVar4 = (undefined8 *)&stack0xfffffffffffffff8;
  cVar2 = '\x04';
  do {
    unaff_RBP = unaff_RBP + -1;
    puVar4 = puVar4 + -1;
    *puVar4 = *unaff_RBP;
    cVar2 = cVar2 + -1;
  } while ('\0' < cVar2);
  bRam00000000aebd350c = bRam00000000aebd350c + (char)((ulonglong)param_2 >> 8);
  *unaff_RDI = (char)param_1;
  bVar1 = *unaff_RBX;
  bVar3 = (byte)((ulonglong)param_1 >> 8);
  *unaff_RBX = *unaff_RBX + bVar3;
  if (-1 < (char)*unaff_RBX) {
    *param_1 = *param_1 + '5';
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  param_1 = param_1 + -1;
  if (param_1 == (char *)0x0 || *unaff_RBX == 0) {
    bRam00000000aebd350c = bRam00000000aebd350c << 1 | CARRY1(bVar1,bVar3);
    *unaff_RSI = *unaff_RSI;
    *param_1 = *param_1 + 'l';
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *unaff_RDI = *unaff_RDI + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

