// Function: FUN_1404c4504
// Addr: 1404c4504
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c4504(int param_1)

{
  byte bVar1;
  byte in_AL;
  undefined7 in_register_00000001;
  int *unaff_RDI;
  
  *(byte *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  bVar1 = *(byte *)CONCAT71(in_register_00000001,in_AL);
  *(byte *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  *unaff_RDI = *unaff_RDI + param_1 + (uint)CARRY1(bVar1,in_AL);
  sysenter();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

