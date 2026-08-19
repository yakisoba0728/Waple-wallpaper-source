// Function: FUN_1404a9ffc
// Addr: 1404a9ffc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a9ffc(longlong param_1)

{
  char *pcVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  uint in_EAX;
  int iVar5;
  char unaff_BH;
  byte *unaff_RDI;
  byte in_CF;
  ulonglong uVar6;
  
  iVar5 = (in_EAX + 0xe61fe410) - (uint)in_CF;
  bVar2 = *unaff_RDI;
  *unaff_RDI = *unaff_RDI << 1 | (in_EAX < 0x19e01bf0 || in_EAX + 0xe61fe410 < (uint)in_CF);
  bVar3 = bRam00000001614aa05a;
  bRam00000001614aa05a =
       bRam00000001614aa05a << 5 | (byte)(CONCAT11((char)bVar2 < '\0',bRam00000001614aa05a) >> 4);
  cVar4 = (char)iVar5 + ((bVar3 & 8) != 0);
  uVar6 = (ulonglong)CONCAT31((int3)((uint)iVar5 >> 8),cVar4);
  pcVar1 = (char *)(uVar6 + 9 + param_1 * 8);
  *pcVar1 = *pcVar1 + cVar4;
  pcVar1 = (char *)(uVar6 + (longlong)unaff_RDI * 4);
  *pcVar1 = *pcVar1 + unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

