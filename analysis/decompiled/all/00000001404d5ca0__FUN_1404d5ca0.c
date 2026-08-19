// Function: FUN_1404d5ca0
// Addr: 1404d5ca0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d5ca0(undefined8 param_1,longlong param_2)

{
  ushort uVar1;
  int iVar2;
  char *in_RAX;
  char cVar3;
  byte *unaff_RSI;
  bool in_CF;
  bool in_ZF;
  
  cVar3 = (char)((ulonglong)param_2 >> 8);
  if (in_CF || in_ZF) {
    iVar2 = (int)in_RAX + 0x40000a64;
    uVar1 = (ushort)iVar2;
    in_RAX = (char *)(ulonglong)
                     CONCAT22((short)((uint)iVar2 >> 0x10),
                              CONCAT11((char)(uVar1 % (ushort)*unaff_RSI),(char)(uVar1 / *unaff_RSI)
                                      ));
    unaff_RSI[-10] = unaff_RSI[-10] + cVar3;
  }
  unaff_RSI[param_2 + 0x21004d] = unaff_RSI[param_2 + 0x21004d] + (char)in_RAX;
  *in_RAX = *in_RAX + (char)in_RAX;
  unaff_RSI[-10] = unaff_RSI[-10] + cVar3;
  unaff_RSI[param_2 + 0xf01004d] =
       unaff_RSI[param_2 + 0xf01004d] + (char)((ushort)in_RAX / (ushort)*unaff_RSI);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

