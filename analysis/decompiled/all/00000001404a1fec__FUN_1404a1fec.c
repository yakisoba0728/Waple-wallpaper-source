// Function: FUN_1404a1fec
// Addr: 1404a1fec
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a1fec(undefined8 param_1,undefined8 param_2)

{
  uint *in_RAX;
  uint *puVar1;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  puVar1 = (uint *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                            CONCAT11((char)((ulonglong)in_RAX >> 8) +
                                     (char)((ulonglong)param_2 >> 8),(char)in_RAX + (char)*in_RAX));
  (&stack0x04ac4200)[(uint)puVar1 | *puVar1] =
       (&stack0x04ac4200)[(uint)puVar1 | *puVar1] + (char)((ulonglong)param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

