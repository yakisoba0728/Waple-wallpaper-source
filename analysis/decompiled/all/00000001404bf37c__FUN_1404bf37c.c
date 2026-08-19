// Function: FUN_1404bf37c
// Addr: 1404bf37c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bf37c(longlong param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  char *in_RAX;
  byte *pbVar3;
  
  *in_RAX = *in_RAX + (char)((ulonglong)param_2 >> 8);
  piVar1 = (int *)(param_2 + 0xd);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + (int)param_2;
  pbVar3 = (byte *)(param_1 + -1);
  if (pbVar3 != (byte *)0x0 && *piVar1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!SCARRY4(iVar2,(int)param_2)) {
    *pbVar3 = *pbVar3 ^ (byte)((uint)((int)in_RAX + 0x1101004a) >> 8);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

