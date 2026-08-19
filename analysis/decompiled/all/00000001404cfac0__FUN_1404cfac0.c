// Function: FUN_1404cfac0
// Addr: 1404cfac0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cfac0(longlong param_1,longlong param_2)

{
  byte bVar1;
  byte in_AL;
  undefined7 in_register_00000001;
  char unaff_BL;
  int *unaff_RDI;
  
  *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) | in_AL;
  *(char *)(param_2 + 8) = *(char *)(param_2 + 8) + unaff_BL;
  bVar1 = *(byte *)CONCAT71(in_register_00000001,in_AL);
  *(byte *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  *unaff_RDI = (*unaff_RDI - (int)param_1) - (uint)CARRY1(bVar1,in_AL);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

