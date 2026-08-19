// Function: FUN_1404b627c
// Addr: 1404b627c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b627c(void)

{
  undefined8 in_RAX;
  longlong unaff_RBX;
  
  *(byte *)(unaff_RBX * 2) = *(byte *)(unaff_RBX * 2) ^ (byte)((ulonglong)in_RAX >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

