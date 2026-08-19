// Function: FUN_1404cdbcc
// Addr: 1404cdbcc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cdbcc(undefined8 param_1,uint param_2)

{
  char *pcVar1;
  byte *in_RAX;
  uint *unaff_RBX;
  uint unaff_ESP;
  
  *unaff_RBX = *unaff_RBX & param_2;
  *in_RAX = *in_RAX | (byte)in_RAX;
  pcVar1 = (char *)((ulonglong)
                    ((uint)CONCAT71((int7)((ulonglong)in_RAX >> 8),(byte)in_RAX | *in_RAX) |
                     unaff_ESP | 0xf640400) - 0x24);
  *pcVar1 = *pcVar1 + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

