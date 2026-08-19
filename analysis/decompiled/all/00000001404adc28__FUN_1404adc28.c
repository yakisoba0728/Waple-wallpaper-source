// Function: FUN_1404adc28
// Addr: 1404adc28
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404adc28(undefined8 param_1,longlong param_2)

{
  char in_AL;
  undefined7 in_register_00000001;
  uint unaff_EBP;
  float10 in_ST0;
  
  LOCK();
  *(char *)CONCAT71(in_register_00000001,in_AL + '4') = in_AL + '4';
  UNLOCK();
  *(int *)(ulonglong)*(uint *)(param_2 * 2) = (int)in_ST0;
  uRam00000001a877dc46 = uRam00000001a877dc46 & unaff_EBP;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

