// Function: FUN_1404c3524
// Addr: 1404c3524
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c3524(undefined8 param_1,longlong param_2)

{
  char in_AL;
  undefined8 in_MM1;
  
  pmulhuw(in_MM1,uRam000000014eb03d2b);
  (&stack0x00000000)[param_2 * 2] = (&stack0x00000000)[param_2 * 2] + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

