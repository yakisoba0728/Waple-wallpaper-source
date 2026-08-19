// Function: FUN_1404c5a18
// Addr: 1404c5a18
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c5a18(undefined8 param_1,int param_2)

{
  uint *in_RAX;
  
  iRam00000001b4615a26 = iRam00000001b4615a26 + param_2;
  *in_RAX = *in_RAX | (uint)in_RAX;
  cRam00000001622c6b5f = cRam00000001622c6b5f + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

