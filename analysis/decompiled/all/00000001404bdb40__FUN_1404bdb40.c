// Function: FUN_1404bdb40
// Addr: 1404bdb40
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bdb40(void)

{
  byte *in_RAX;
  undefined2 in_DS;
  
  uRam00000001686cdb90 = in_DS;
  *in_RAX = *in_RAX | (byte)in_RAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

