// Function: FUN_1404ab424
// Addr: 1404ab424
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ab424(void)

{
  undefined8 in_RAX;
  
  out(0x49,(char)in_RAX);
  cRam0000000034000efb = cRam0000000034000efb + (char)((ulonglong)in_RAX >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

