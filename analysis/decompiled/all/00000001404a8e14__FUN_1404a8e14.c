// Function: FUN_1404a8e14
// Addr: 1404a8e14
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a8e14(char *param_1,int *param_2)

{
  byte bVar1;
  char in_AL;
  undefined7 in_register_00000001;
  uint *unaff_RDI;
  undefined1 auStack_8 [8];
  
  *param_2 = *param_2 + (int)param_2;
  bVar1 = in_AL + *param_1;
  *unaff_RDI = *unaff_RDI & (uint)auStack_8;
  *(byte *)CONCAT71(in_register_00000001,bVar1) =
       *(byte *)CONCAT71(in_register_00000001,bVar1) | bVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

