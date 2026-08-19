// Function: FUN_1404aeb90
// Addr: 1404aeb90
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404aeb90(char *param_1,longlong param_2)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  byte bVar7;
  uint *in_RAX;
  uint *puVar5;
  char *pcVar6;
  char cVar8;
  byte unaff_BL;
  undefined7 unaff_00000019;
  char *unaff_RSI;
  bool bVar9;
  
  cVar8 = (char)param_1;
  *in_RAX = *in_RAX & (uint)in_RAX;
  uVar3 = *in_RAX;
  bVar2 = (byte)in_RAX;
  *(byte *)in_RAX = (byte)*in_RAX + bVar2;
  if (CARRY1((byte)uVar3,bVar2)) {
    param_1[-0x6fffec8d] = param_1[-0x6fffec8d] + cVar8;
  }
  else {
    puVar5 = (uint *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                              CONCAT11((char)((ulonglong)in_RAX >> 8) + bVar2,bVar2));
    uVar3 = (uint)puVar5 | *puVar5;
    pbVar1 = (byte *)(param_1 + param_2);
    bVar2 = *pbVar1;
    bVar7 = (byte)(uVar3 >> 8);
    *pbVar1 = *pbVar1 + bVar7;
    if (CARRY1(bVar2,bVar7)) {
      param_1[-0x6fffec8d] = param_1[-0x6fffec8d] + cVar8;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar4 = uVar3 | 0xc541200;
    bVar9 = CARRY1(bRam00000001b04af609,(byte)uVar3);
    bRam00000001b04af609 = bRam00000001b04af609 + (byte)uVar3;
    if (!bVar9 && bRam00000001b04af609 != 0) {
      *(char *)((ulonglong)uVar4 + 0x3c001376) = *(char *)((ulonglong)uVar4 + 0x3c001376) + unaff_BL
      ;
      *param_1 = *param_1 + -8;
      *(byte *)CONCAT71(unaff_00000019,unaff_BL) =
           *(char *)CONCAT71(unaff_00000019,unaff_BL) +
           ((byte)(uVar4 >> 8) & (byte)((uint)*(undefined4 *)unaff_RSI >> 8));
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    pcVar6 = (char *)(ulonglong)(uVar4 + 0x7740500);
    pbVar1 = (byte *)(pcVar6 + -0x6ffec8a);
    bVar2 = *pbVar1;
    *pbVar1 = *pbVar1 + unaff_BL;
    if (CARRY1(bVar2,unaff_BL) || *pbVar1 == 0) {
      *param_1 = *param_1;
      *unaff_RSI = *unaff_RSI + cVar8;
      *pcVar6 = *pcVar6 + (char)(uVar4 + 0x7740500);
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

