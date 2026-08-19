// Function: FUN_1404a3ea4
// Addr: 1404a3ea4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a3ea4(undefined8 param_1,undefined2 param_2)

{
  char in_AL;
  
  out(param_2,in_AL + '4' + (char)((ushort)param_2 >> 8));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

