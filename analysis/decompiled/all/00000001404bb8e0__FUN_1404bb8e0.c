// Function: FUN_1404bb8e0
// Addr: 1404bb8e0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bb8e0(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  int iVar2;
  char cVar3;
  int *in_RAX;
  char *pcVar4;
  char *unaff_RBX;
  
  *in_RAX = *in_RAX + (int)param_1;
  iVar2 = (int)in_RAX + *in_RAX;
  pbVar1 = (byte *)(param_2 + 4);
  *pbVar1 = *pbVar1 | (byte)iVar2;
  pcVar4 = (char *)(param_1 + -1);
  if (pcVar4 == (char *)0x0 || *pbVar1 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  cVar3 = (char)((uint)iVar2 >> 8);
  *pcVar4 = *pcVar4 + cVar3;
  *unaff_RBX = *unaff_RBX + cVar3;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

