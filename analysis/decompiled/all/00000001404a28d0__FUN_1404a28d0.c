// Function: FUN_1404a28d0
// Addr: 1404a28d0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a28d0(int *param_1,uint *param_2)

{
  int in_EAX;
  uint uVar1;
  uint unaff_ESI;
  
  *param_1 = *param_1 + (int)param_1;
  *param_2 = *param_2 | unaff_ESI;
  uVar1 = in_EAX + 0x27003e0;
  uRam00000001a47f28e8 = uRam00000001a47f28e8 & unaff_ESI;
  *(uint *)(ulonglong)uVar1 = *(uint *)(ulonglong)uVar1 | uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

