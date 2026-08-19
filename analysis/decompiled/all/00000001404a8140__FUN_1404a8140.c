// Function: FUN_1404a8140
// Addr: 1404a8140
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a8140(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  byte *in_RAX;
  uint unaff_ESI;
  char *pcVar2;
  
  *(uint *)(in_RAX + 0xe) = *(uint *)(in_RAX + 0xe) & unaff_ESI;
  in_RAX[0x54] = in_RAX[0x54] + (char)((ulonglong)param_2 >> 8);
  *in_RAX = *in_RAX | (byte)in_RAX;
  cVar1 = (byte)in_RAX + 0xc;
  pcVar2 = (char *)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar1);
  *pcVar2 = *pcVar2 + cVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

