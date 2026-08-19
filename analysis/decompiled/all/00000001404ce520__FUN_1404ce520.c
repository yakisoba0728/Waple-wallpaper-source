// Function: FUN_1404ce520
// Addr: 1404ce520
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ce520(int param_1,char param_2)

{
  byte bVar1;
  byte in_AL;
  undefined7 in_register_00000001;
  longlong unaff_RBP;
  int *unaff_RDI;
  
  *(char *)(unaff_RBP + 0x2e0204) = *(char *)(unaff_RBP + 0x2e0204) + param_2;
  bVar1 = *(byte *)CONCAT71(in_register_00000001,in_AL);
  *(byte *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  *unaff_RDI = *unaff_RDI + param_1 + (uint)CARRY1(bVar1,in_AL);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

