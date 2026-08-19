// Function: FUN_1404c4820
// Addr: 1404c4820
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c4820(undefined8 param_1,char param_2)

{
  int iVar1;
  uint in_EAX;
  uint uVar2;
  int unaff_EBX;
  byte *unaff_RSI;
  byte *unaff_RDI;
  int *piVar3;
  
  uVar2 = in_EAX | 0x9e00bf0;
  piVar3 = (int *)(ulonglong)uVar2;
  *unaff_RDI = *unaff_RDI << 1 | (char)*unaff_RDI < '\0';
  iVar1 = piVar3[8];
  *unaff_RSI = *unaff_RSI >> 1;
  *(char *)((longlong)piVar3 + 2) = *(char *)((longlong)piVar3 + 2) + param_2 + (char)iVar1;
  *(char *)piVar3 = (char)*piVar3 + (char)uVar2;
  *piVar3 = *piVar3 + unaff_EBX;
  if (!SCARRY4(uVar2,0x14821800)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

