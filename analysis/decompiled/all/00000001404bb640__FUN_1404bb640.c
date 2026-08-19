// Function: FUN_1404bb640
// Addr: 1404bb640
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bb640(byte param_1)

{
  uint uVar1;
  char cVar2;
  byte unaff_BL;
  undefined7 unaff_00000019;
  uint *unaff_RSI;
  byte *unaff_RDI;
  bool bVar3;
  
  bVar3 = CARRY1(*(byte *)CONCAT71(unaff_00000019,unaff_BL),unaff_BL);
  *(byte *)CONCAT71(unaff_00000019,unaff_BL) = *(char *)CONCAT71(unaff_00000019,unaff_BL) + unaff_BL
  ;
  if (-1 < *(char *)CONCAT71(unaff_00000019,unaff_BL)) {
    bVar3 = CARRY1(*unaff_RDI,param_1);
    *unaff_RDI = *unaff_RDI + param_1;
  }
  cVar2 = cRam000000009ebd2703 + bVar3 + '3';
  uVar1 = CONCAT31(0x9ebd27,cVar2);
  *(char *)(ulonglong)uVar1 = *(char *)(ulonglong)uVar1 + cVar2;
  *unaff_RSI = *unaff_RSI & uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

