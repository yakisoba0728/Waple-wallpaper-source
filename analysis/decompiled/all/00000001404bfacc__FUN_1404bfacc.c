// Function: FUN_1404bfacc
// Addr: 1404bfacc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404bfaef) overlaps instruction at (ram,0x0001404bfaee)
    */

void FUN_1404bfacc(char *param_1,char param_2)

{
  char cVar1;
  char *in_RAX;
  char unaff_BL;
  char unaff_BH;
  undefined8 *puVar2;
  undefined8 *unaff_RBP;
  char *unaff_RSI;
  undefined8 uStack_10;
  
  *in_RAX = *in_RAX + unaff_BH;
  puVar2 = (undefined8 *)&stack0xfffffffffffffff8;
  cVar1 = '\x12';
  do {
    unaff_RBP = unaff_RBP + -1;
    puVar2 = puVar2 + -1;
    *puVar2 = *unaff_RBP;
    cVar1 = cVar1 + -1;
  } while ('\0' < cVar1);
  cRam00000001554c026d = cRam00000001554c026d + unaff_BL;
  if (-1 < cRam00000001554c026d) {
    *param_1 = *param_1 + param_2;
    *unaff_RSI = *unaff_RSI + param_2;
    func_0x0001b859fafa();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_1 = *param_1 + '\x04';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

