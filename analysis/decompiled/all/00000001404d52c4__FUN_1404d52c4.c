// Function: FUN_1404d52c4
// Addr: 1404d52c4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d52c4(void)

{
  uint in_EAX;
  
  uRam00000001a45252cc = uRam00000001a45252cc & in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

