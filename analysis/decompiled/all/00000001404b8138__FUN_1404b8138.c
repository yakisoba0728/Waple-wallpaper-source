// Function: FUN_1404b8138
// Addr: 1404b8138
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b8138(char *param_1)

{
  undefined4 in_EAX;
  
  *param_1 = *param_1 + ((byte)((uint)in_EAX >> 8) | 0x14);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

