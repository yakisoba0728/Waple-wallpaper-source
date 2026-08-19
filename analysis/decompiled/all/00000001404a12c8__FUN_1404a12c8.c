// Function: FUN_1404a12c8
// Addr: 1404a12c8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a12c8(undefined8 param_1,byte *param_2)

{
  int in_EAX;
  
  *param_2 = *param_2 ^ (byte)(in_EAX + 0x3600470U);
  uRam00000001b44f12d8 = uRam00000001b44f12d8 & in_EAX + 0x3600470U;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

