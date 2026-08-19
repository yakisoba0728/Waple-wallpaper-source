// Function: FUN_1404b5a0c
// Addr: 1404b5a0c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b5a0c(undefined8 param_1,int param_2)

{
  uint in_EAX;
  undefined4 in_register_00000004;
  int *unaff_RDI;
  
  *(undefined1 *)((longlong)unaff_RDI + 0x4a) = *(undefined1 *)((longlong)unaff_RDI + 0x4a);
  *unaff_RDI = *unaff_RDI + param_2;
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) | in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

