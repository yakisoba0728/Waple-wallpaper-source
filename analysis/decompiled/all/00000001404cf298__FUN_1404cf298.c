// Function: FUN_1404cf298
// Addr: 1404cf298
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cf298(char param_1,undefined2 param_2)

{
  undefined1 uVar1;
  undefined1 *unaff_RDI;
  
  uVar1 = in(param_2);
  *unaff_RDI = uVar1;
  cRam00000001464d08aa = cRam00000001464d08aa + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

