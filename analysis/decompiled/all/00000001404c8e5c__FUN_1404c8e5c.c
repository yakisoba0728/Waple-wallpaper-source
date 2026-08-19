// Function: FUN_1404c8e5c
// Addr: 1404c8e5c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c8e5c(void)

{
  byte bVar1;
  byte bVar2;
  undefined8 in_RAX;
  int unaff_ESP;
  int *unaff_RSI;
  byte *unaff_RDI;
  byte *pbVar3;
  
  bVar2 = (char)in_RAX + 2;
  pbVar3 = (byte *)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar2);
  bVar1 = *pbVar3;
  *pbVar3 = *pbVar3 + bVar2;
  *unaff_RSI = (*unaff_RSI - unaff_ESP) - (uint)CARRY1(bVar1,bVar2);
  *unaff_RDI = *unaff_RDI << 1 | (char)*unaff_RDI < '\0';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

