// Function: FUN_1404bd0b4
// Addr: 1404bd0b4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bd0b4(undefined1 *param_1,char *param_2)

{
  uint in_EAX;
  char in_CF;
  
  cRam0000000146b2d0df = cRam0000000146b2d0df + (char)in_EAX + in_CF;
  *param_1 = *param_1;
  iRam00000001784ce1c7 = iRam00000001784ce1c7 + (in_EAX & 0x4bcf9400);
  *param_2 = *param_2 + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

