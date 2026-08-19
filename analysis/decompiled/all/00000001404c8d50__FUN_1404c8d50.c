// Function: FUN_1404c8d50
// Addr: 1404c8d50
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c8d50(longlong param_1,undefined2 param_2,undefined8 param_3,char *param_4)

{
  undefined1 uVar1;
  uint *in_RAX;
  char unaff_SPL;
  longlong unaff_RSI;
  undefined1 *unaff_RDI;
  
  *(char *)(param_1 + unaff_RSI) = *(char *)(param_1 + unaff_RSI) + 'J';
  uVar1 = in(param_2);
  *unaff_RDI = uVar1;
  *in_RAX = *in_RAX ^ (uint)in_RAX;
  out(param_2,(int)(short)in_RAX);
  *param_4 = *param_4 + unaff_SPL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

