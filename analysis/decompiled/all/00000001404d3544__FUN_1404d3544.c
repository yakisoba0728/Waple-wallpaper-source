// Function: FUN_1404d3544
// Addr: 1404d3544
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d3544(undefined8 param_1)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  longlong in_RAX;
  undefined1 unaff_BL;
  byte unaff_BH;
  undefined6 unaff_0000001a;
  int unaff_EBP;
  int *unaff_RSI;
  byte *unaff_RDI;
  byte *pbVar4;
  
  *(byte *)(in_RAX + 3) = *(byte *)(in_RAX + 3) ^ unaff_BH;
  *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) +
       (char)((ulonglong)param_1 >> 8);
  uVar3 = (uint)in_RAX | 0x9e00bf0;
  pbVar4 = (byte *)(ulonglong)uVar3;
  *unaff_RDI = *unaff_RDI << 1 | (char)*unaff_RDI < '\0';
  bVar1 = *pbVar4;
  bVar2 = (byte)uVar3;
  *pbVar4 = *pbVar4 + bVar2;
  *unaff_RSI = (*unaff_RSI - unaff_EBP) - (uint)CARRY1(bVar1,bVar2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

