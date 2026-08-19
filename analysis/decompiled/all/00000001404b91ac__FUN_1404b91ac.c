// Function: FUN_1404b91ac
// Addr: 1404b91ac
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b91ac(void)

{
  uint *in_RAX;
  uint unaff_EBP;
  
  *in_RAX = *in_RAX & unaff_EBP;
  *(byte *)in_RAX = (byte)*in_RAX | (byte)in_RAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

