// Function: FUN_1404ad5dc
// Addr: 1404ad5dc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ad5dc(char *param_1)

{
  undefined8 in_RAX;
  char in_CF;
  
  *param_1 = *param_1 + (char)((ulonglong)in_RAX >> 8) + 'J' + in_CF;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

