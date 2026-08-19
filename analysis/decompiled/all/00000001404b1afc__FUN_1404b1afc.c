// Function: FUN_1404b1afc
// Addr: 1404b1afc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b1afc(undefined8 param_1,undefined2 param_2)

{
  undefined4 uVar1;
  undefined4 *unaff_RDI;
  
  uVar1 = in(param_2);
  *unaff_RDI = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

