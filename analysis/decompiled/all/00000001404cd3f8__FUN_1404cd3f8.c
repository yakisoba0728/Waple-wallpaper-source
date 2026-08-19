// Function: FUN_1404cd3f8
// Addr: 1404cd3f8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cd3f8(byte *param_1,longlong param_2)

{
  undefined8 in_RAX;
  uint unaff_ESI;
  
  *(int *)param_1 = *(int *)param_1 + (int)param_1;
  *(uint *)(param_2 + 5) = *(uint *)(param_2 + 5) | unaff_ESI;
  *param_1 = *param_1 ^ (byte)((ulonglong)in_RAX >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

