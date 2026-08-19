// Function: FUN_1404b7860
// Addr: 1404b7860
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b7860(char *param_1)

{
  undefined8 in_RAX;
  byte in_CF;
  
  *param_1 = *param_1 +
             (char)(((int)CONCAT71((int7)((ulonglong)in_RAX >> 8),0x82) + -0x4b776800) - (uint)in_CF
                   >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

