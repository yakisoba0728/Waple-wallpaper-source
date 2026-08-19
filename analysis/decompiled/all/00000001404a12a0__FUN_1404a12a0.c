// Function: FUN_1404a12a0
// Addr: 1404a12a0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a12a0(byte *param_1,char param_2)

{
  byte bVar1;
  byte in_AL;
  char in_CF;
  
  *param_1 = *param_1 + 0x4a + in_CF;
  bVar1 = *param_1;
  *param_1 = *param_1 + in_AL;
  *(uint *)param_1 = *(int *)param_1 + (int)param_1 + (uint)CARRY1(bVar1,in_AL);
  *param_1 = *param_1 + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

