// Function: FUN_14049ef4c
// Addr: 14049ef4c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014049ef4f) overlaps instruction at (ram,0x00014049ef4d)
    */

void FUN_14049ef4c(longlong param_1,longlong param_2,int *param_3,char *param_4)

{
  byte bVar1;
  uint uVar2;
  char *in_RAX;
  char *pcVar3;
  byte bVar4;
  char unaff_SPL;
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  
  bVar4 = (byte)param_2;
  *unaff_RDI = *unaff_RSI;
  *param_3 = *param_3 + (int)in_RAX;
  pcVar3 = (char *)(param_1 + -1);
  if (pcVar3 == (char *)0x0 || *param_3 == 0) {
    while( true ) {
      *param_4 = *param_4 + unaff_SPL;
      bVar1 = (byte)in_RAX;
      *in_RAX = *in_RAX + bVar1;
      in_RAX[-0x5afffebf] = in_RAX[-0x5afffebf] + bVar4;
      *param_3 = *param_3 + (int)in_RAX;
      pcVar3 = pcVar3 + -1;
      if (pcVar3 == (char *)0x0 || *param_3 == 0) break;
      uVar2 = in((short)param_2);
      in_RAX = (char *)(ulonglong)uVar2;
    }
    *param_4 = *param_4 + bVar1;
    *(byte *)((longlong)in_RAX * 2) = *(byte *)((longlong)in_RAX * 2) | bVar1;
    *(byte *)(param_2 + 0x60037004) = *(byte *)(param_2 + 0x60037004) | bVar4;
    unaff_RSI[1] = unaff_RSI[1] &
                   CONCAT22((short)((ulonglong)param_2 >> 0x10),
                            CONCAT11((char)((ulonglong)param_2 >> 8) + *in_RAX,bVar4));
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *pcVar3 = *pcVar3 + (char)((ulonglong)in_RAX >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

