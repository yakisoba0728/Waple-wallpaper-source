// Function: FUN_1404a35d8
// Addr: 1404a35d8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a35d8(undefined8 param_1,longlong param_2)

{
  uint in_EAX;
  char *unaff_RSI;
  
  *(char *)(param_2 + 0x1a) =
       *(char *)(param_2 + 0x1a) + ((((char)in_EAX + 'T') - *unaff_RSI) - (0xd7fff4ab < in_EAX));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

