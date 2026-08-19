// Function: FUN_1404abd90
// Addr: 1404abd90
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404abd90(undefined8 param_1,longlong param_2)

{
  byte *in_RAX;
  uint unaff_ESI;
  
  *in_RAX = *in_RAX | (byte)((ulonglong)param_2 >> 8);
  *in_RAX = *in_RAX + (char)in_RAX;
  *(uint *)(param_2 + -0x1b4dfff8) = *(uint *)(param_2 + -0x1b4dfff8) & unaff_ESI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

