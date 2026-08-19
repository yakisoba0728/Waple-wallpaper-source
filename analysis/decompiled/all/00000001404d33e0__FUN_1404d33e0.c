// Function: FUN_1404d33e0
// Addr: 1404d33e0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d33e0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte *in_RAX;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  char *unaff_RSI;
  undefined1 *unaff_RDI;
  undefined1 in_ZF;
  
  *unaff_RDI = in_ZF;
  unaff_RSI[param_2 + 0x21004d] = unaff_RSI[param_2 + 0x21004d] + unaff_BH;
  bVar2 = *in_RAX;
  bVar4 = (byte)in_RAX;
  *in_RAX = *in_RAX + bVar4;
  pbVar1 = (byte *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + -0x6c1effc1);
  bVar3 = *pbVar1;
  *pbVar1 = bVar3 << 4 | (byte)(CONCAT11(CARRY1(bVar2,bVar4),bVar3) >> 5);
  in_RAX[0x21004d32] = in_RAX[0x21004d32] + (char)((ulonglong)param_2 >> 8);
  cRam00000000f04d3a6d = cRam00000000f04d3a6d + (bVar4 | *(byte *)((longlong)in_RAX * 2));
  *param_3 = *param_3;
  cRam00000001604d3a95 = cRam00000001604d3a95 + '-';
  *unaff_RSI = *unaff_RSI + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

