// Function: FUN_14049e3b4
// Addr: 14049e3b4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049e3b4(char *param_1,longlong param_2)

{
  uint *in_RAX;
  byte bVar1;
  char cVar2;
  char unaff_BH;
  char *unaff_RSI;
  byte *unaff_RDI;
  
  cVar2 = (char)param_2;
  bVar1 = (byte)((ulonglong)param_1 >> 8);
  *in_RAX = *in_RAX & (uint)in_RAX;
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
  unaff_RSI[0x71] = unaff_RSI[0x71] + unaff_BH;
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
  cRam00000000210049e2 = cRam00000000210049e2 + -0x1e;
  *param_1 = *param_1 + cVar2;
  *unaff_RSI = *unaff_RSI + bVar1;
  *(char *)(param_2 + 0x210049) = *(char *)(param_2 + 0x210049) + 'I';
  cRam00000000210049e2 = cRam00000000210049e2 + -0x1e;
  *unaff_RDI = *unaff_RDI ^ bVar1;
  *param_1 = *param_1 + cVar2;
  *(char *)(param_2 + 0x7010049) = *(char *)(param_2 + 0x7010049) + cVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

