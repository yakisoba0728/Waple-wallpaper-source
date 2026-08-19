// Function: FUN_1404d00e0
// Addr: 1404d00e0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d00e0(undefined8 param_1,longlong param_2)

{
  longlong in_RAX;
  
  (&stack0x00000000)[param_2] = (&stack0x00000000)[param_2] | (byte)((ulonglong)param_2 >> 8);
  *(char *)(in_RAX + 0x7b00401e) = *(char *)(in_RAX + 0x7b00401e) + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

