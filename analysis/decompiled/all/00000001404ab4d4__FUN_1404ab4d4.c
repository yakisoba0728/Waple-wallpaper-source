// Function: FUN_1404ab4d4
// Addr: 1404ab4d4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ab4d4(undefined8 param_1,char *param_2)

{
  byte bVar1;
  byte *in_RAX;
  char cVar2;
  byte bVar3;
  undefined2 *unaff_RSI;
  char *unaff_RDI;
  longlong in_FS_OFFSET;
  
  bVar3 = (byte)param_2;
  cVar2 = (char)((ulonglong)param_1 >> 8);
  bVar1 = *in_RAX;
  *in_RAX = *in_RAX + bVar3;
  TaskRegister(*unaff_RSI);
  *unaff_RDI = *unaff_RDI + (char)param_1 + CARRY1(bVar1,bVar3);
  in_RAX[0x210049ed] = in_RAX[0x210049ed] + cVar2;
  bVar1 = (byte)in_RAX;
  *param_2 = *param_2 + bVar1;
  *in_RAX = *in_RAX + bVar1;
  in_RAX[in_FS_OFFSET] = in_RAX[in_FS_OFFSET] | bVar1;
  bVar1 = *in_RAX;
  *in_RAX = *in_RAX + bVar3;
  TaskRegister(*unaff_RSI);
  *unaff_RDI = *unaff_RDI + (char)param_1 + CARRY1(bVar1,bVar3);
  in_RAX[0x210049ed] = in_RAX[0x210049ed] + cVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

