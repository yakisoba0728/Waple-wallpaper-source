// Function: FUN_1404cd368
// Addr: 1404cd368
// Size: 1 bytes


void FUN_1404cd368(longlong param_1,undefined8 param_2,longlong param_3)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  longlong in_RAX;
  byte bVar4;
  undefined7 uVar5;
  char unaff_BL;
  char unaff_BH;
  char *unaff_RDI;
  longlong unaff_R14;
  char in_CF;
  char unaff_retaddr;
  char *pcStackX_8;
  char *pcStackX_10;
  
  uVar5 = (undefined7)((ulonglong)param_2 >> 8);
  *(char *)(in_RAX + 0x41) = *(char *)(in_RAX + 0x41) + unaff_BL + in_CF;
  *unaff_RDI = *unaff_RDI + unaff_BH;
  *(char *)(param_3 + 0x21004cd2) = *(char *)(param_3 + 0x21004cd2) + unaff_retaddr;
  bVar4 = (byte)param_2 | *(byte *)(param_1 * 2);
  *(char *)(unaff_R14 + -0x77ffbea8) = *(char *)(unaff_R14 + -0x77ffbea8) + (char)pcStackX_8;
  pbVar1 = (byte *)((longlong)pcStackX_8 * 2 + 0x21);
  bVar2 = (byte)param_1 & 7;
  *pbVar1 = *pbVar1 >> bVar2 | *pbVar1 << 8 - bVar2;
  *pcStackX_8 = *pcStackX_8 + (char)pcStackX_8;
  *unaff_RDI = *unaff_RDI + unaff_BH;
  cVar3 = (char)pcStackX_10;
  *(char *)(unaff_R14 + -0x77ffbea8) = *(char *)(unaff_R14 + -0x77ffbea8) + cVar3;
  pbVar1 = (byte *)((longlong)pcStackX_10 * 2 + 0x21);
  bVar2 = (byte)param_1 & 7;
  *pbVar1 = *pbVar1 >> bVar2 | *pbVar1 << 8 - bVar2;
  *(char *)CONCAT71(uVar5,bVar4) = *(char *)CONCAT71(uVar5,bVar4) + cVar3;
  *pcStackX_10 = *pcStackX_10 + cVar3;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

