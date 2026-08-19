// Function: FUN_1404d6960
// Addr: 1404d6960
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d6960(undefined8 param_1,undefined2 param_2)

{
  undefined1 uVar1;
  char in_AL;
  undefined7 in_register_00000001;
  undefined1 *unaff_RDI;
  
  uVar1 = in(param_2);
  *unaff_RDI = uVar1;
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

