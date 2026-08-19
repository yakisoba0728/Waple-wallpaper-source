// Function: FUN_1404cd6c4
// Addr: 1404cd6c4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cd6c4(longlong param_1)

{
  uint in_EAX;
  undefined4 in_register_00000004;
  char unaff_BH;
  char *unaff_RDI;
  
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) & in_EAX;
  *(char *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + (char)in_EAX;
  *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) ^ (byte)param_1;
  *unaff_RDI = *unaff_RDI + unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

