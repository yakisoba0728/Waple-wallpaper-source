// Function: FUN_1404bf068
// Addr: 1404bf068
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bf068(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  byte bVar2;
  int *in_RAX;
  char *pcVar3;
  char *unaff_RBX;
  
  *in_RAX = *in_RAX + (int)param_1;
  pbVar1 = (byte *)(param_2 + 4);
  bVar2 = (byte)((uint)((int)in_RAX + *in_RAX) >> 8);
  *pbVar1 = *pbVar1 | bVar2;
  pcVar3 = (char *)(param_1 + -1);
  if (pcVar3 == (char *)0x0 || *pbVar1 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *pcVar3 = *pcVar3 + bVar2;
  *unaff_RBX = *unaff_RBX + bVar2;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

