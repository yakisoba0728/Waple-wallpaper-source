// Function: FUN_1404c0700
// Addr: 1404c0700
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c0700(uint *param_1)

{
  uint *puVar1;
  char in_AL;
  char cVar2;
  undefined7 in_register_00000001;
  uint unaff_EBP;
  
  *param_1 = *param_1 & (uint)param_1;
  cVar2 = in_AL + *(char *)CONCAT71(in_register_00000001,in_AL);
  puVar1 = (uint *)(CONCAT71(in_register_00000001,cVar2) + 0x4ca5000c);
  *puVar1 = *puVar1 | unaff_EBP;
  *(char *)CONCAT71(in_register_00000001,cVar2) =
       *(char *)CONCAT71(in_register_00000001,cVar2) - cVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

