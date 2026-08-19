// Function: FUN_1404ca070
// Addr: 1404ca070
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ca070(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  char *in_RAX;
  char in_ZF;
  
  if (param_1 == 1 || in_ZF != '\0') {
    *param_4 = *param_4;
    *in_RAX = *in_RAX + (char)in_RAX;
    in_RAX[-0x3fffcd5d] = in_RAX[-0x3fffcd5d] + (char)((ulonglong)in_RAX >> 8);
    uRam2a190049ede00032 = (uint)in_RAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uRam00000001a451a068 = uRam00000001a451a068 & (uint)in_RAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

