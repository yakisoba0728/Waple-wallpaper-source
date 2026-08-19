// Function: FUN_14049ef5c
// Addr: 14049ef5c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049ef5c(longlong param_1,longlong param_2,int *param_3,char *param_4)

{
  uint uVar1;
  char *in_RAX;
  byte bVar2;
  char unaff_SPL;
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  
  bVar2 = (byte)param_2;
  *unaff_RDI = *unaff_RSI;
  while( true ) {
    *param_3 = *param_3 + (int)in_RAX;
    param_1 = param_1 + -1;
    if (param_1 == 0 || *param_3 == 0) break;
    uVar1 = in((short)param_2);
    in_RAX = (char *)(ulonglong)uVar1;
    *param_4 = *param_4 + unaff_SPL;
    *in_RAX = *in_RAX + (char)uVar1;
    in_RAX[-0x5afffebf] = in_RAX[-0x5afffebf] + bVar2;
  }
  *param_4 = *param_4 + (byte)in_RAX;
  *(byte *)((longlong)in_RAX * 2) = *(byte *)((longlong)in_RAX * 2) | (byte)in_RAX;
  *(byte *)(param_2 + 0x60037004) = *(byte *)(param_2 + 0x60037004) | bVar2;
  unaff_RSI[1] = unaff_RSI[1] &
                 CONCAT22((short)((ulonglong)param_2 >> 0x10),
                          CONCAT11((char)((ulonglong)param_2 >> 8) + *in_RAX,bVar2));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

