// Function: FUN_1404a1214
// Addr: 1404a1214
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a1214(char *param_1)

{
  undefined8 in_RAX;
  
  out(0x49,uRam340003a5c30003a5);
  *param_1 = *param_1 + (char)((ulonglong)in_RAX >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

