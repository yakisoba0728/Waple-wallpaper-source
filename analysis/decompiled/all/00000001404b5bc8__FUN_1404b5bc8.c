// Function: FUN_1404b5bc8
// Addr: 1404b5bc8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b5bc8(undefined8 param_1,undefined8 param_2)

{
  longlong in_RAX;
  char in_CF;
  
  *(char *)(in_RAX + 0x17) = (*(char *)(in_RAX + 0x17) - (char)((ulonglong)param_2 >> 8)) - in_CF;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

