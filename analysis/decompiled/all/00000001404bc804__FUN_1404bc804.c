// Function: FUN_1404bc804
// Addr: 1404bc804
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bc804(ulonglong param_1)

{
  undefined8 in_RAX;
  
  *(char *)(param_1 & 0xffffffffffffff49) =
       *(char *)(param_1 & 0xffffffffffffff49) + (char)((ulonglong)in_RAX >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

