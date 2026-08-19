// Function: FUN_1404c4220
// Addr: 1404c4220
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c4220(int param_1)

{
  undefined4 in_EAX;
  undefined4 in_register_00000004;
  int *unaff_RDI;
  
  uRam0900030901002ca0 = in_EAX;
  *(char *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + (char)in_EAX;
  *unaff_RDI = *unaff_RDI + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

