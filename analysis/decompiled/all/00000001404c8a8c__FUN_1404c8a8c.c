// Function: FUN_1404c8a8c
// Addr: 1404c8a8c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c8a8c(longlong param_1)

{
  uint *puVar1;
  uint in_EAX;
  undefined4 in_register_00000004;
  uint unaff_EBX;
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  
  *(uint *)(param_1 + (longlong)unaff_RSI) = *(uint *)(param_1 + (longlong)unaff_RSI) | unaff_EBX;
  *unaff_RDI = *unaff_RSI;
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) ^ in_EAX;
  *(char *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + (char)in_EAX;
  puVar1 = (uint *)(param_1 + (longlong)(unaff_RSI + 1));
  *puVar1 = *puVar1 | unaff_EBX;
  unaff_RDI[1] = unaff_RSI[1];
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) ^ in_EAX;
  *(char *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + (char)in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

