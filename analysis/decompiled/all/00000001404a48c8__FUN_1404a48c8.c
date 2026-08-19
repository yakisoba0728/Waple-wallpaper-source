// Function: FUN_1404a48c8
// Addr: 1404a48c8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a48c8(int *param_1,longlong param_2)

{
  char in_AL;
  char cVar1;
  undefined7 in_register_00000001;
  uint unaff_ESI;
  
  *param_1 = *param_1 + (int)param_1;
  cVar1 = in_AL + *(char *)CONCAT71(in_register_00000001,in_AL);
  *(uint *)(param_2 + 5) = *(uint *)(param_2 + 5) | unaff_ESI;
  LOCK();
  *(uint *)CONCAT71(in_register_00000001,cVar1) =
       *(uint *)CONCAT71(in_register_00000001,cVar1) & unaff_ESI;
  UNLOCK();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

