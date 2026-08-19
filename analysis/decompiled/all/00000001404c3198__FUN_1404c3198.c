// Function: FUN_1404c3198
// Addr: 1404c3198
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c3198(undefined8 param_1)

{
  byte *in_RAX;
  
  *in_RAX = *in_RAX | (byte)param_1;
  in_RAX[8] = in_RAX[8] | (byte)param_1;
  bRam00000001108031eb = bRam00000001108031eb ^ (byte)((ulonglong)param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

