// Function: FUN_1404c50cc
// Addr: 1404c50cc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c50cc(undefined8 param_1,undefined2 param_2)

{
  undefined1 uVar1;
  undefined1 *unaff_RDI;
  
  uVar1 = in(param_2);
  *unaff_RDI = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

