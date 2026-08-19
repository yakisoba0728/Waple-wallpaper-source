// Function: FUN_1404b354c
// Addr: 1404b354c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b354c(char *param_1)

{
  undefined8 in_RAX;
  
  out(0x49,uRam340017e4c30017e4);
  *param_1 = *param_1 + (char)((ulonglong)in_RAX >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

