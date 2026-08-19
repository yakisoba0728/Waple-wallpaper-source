// Function: FUN_1404a9b08
// Addr: 1404a9b08
// Size: 1 bytes


void FUN_1404a9b08(char *param_1)

{
  int in_EAX;
  int iVar1;
  uint uVar2;
  char *pcVar3;
  char *unaff_RDI;
  byte in_CF;
  
  iVar1 = in_EAX + 0x1421004a + (uint)in_CF;
  uVar2 = CONCAT31((int3)((uint)iVar1 >> 8),(char)iVar1 + -0xc) + 0xf000a54U & 0x255c000d;
  *param_1 = *param_1 + '$';
  *(char *)(ulonglong)(uVar2 | 0x4a9a2400) = *(char *)(ulonglong)(uVar2 | 0x4a9a2400) + (char)uVar2;
  *unaff_RDI = *unaff_RDI + (char)param_1;
  pcVar3 = (char *)(ulonglong)(uVar2 | 0x4a9a2400);
  *param_1 = *param_1 + '$';
  *pcVar3 = *pcVar3 + (char)param_1;
  *pcVar3 = *pcVar3 + (char)uVar2;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

