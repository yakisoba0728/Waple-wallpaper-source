// Function: FUN_1404bc750
// Addr: 1404bc750
// Size: 1 bytes


void FUN_1404bc750(byte *param_1,undefined8 param_2,undefined8 param_3,byte *param_4)

{
  byte bVar1;
  int iVar2;
  byte *in_RAX;
  undefined7 uVar4;
  byte bVar5;
  undefined6 uVar6;
  byte *unaff_RSI;
  byte *pbVar3;
  
  uVar6 = (undefined6)((ulonglong)param_2 >> 0x10);
  uVar4 = (undefined7)((ulonglong)in_RAX >> 8);
  bVar1 = (byte)in_RAX & *in_RAX;
  pbVar3 = (byte *)CONCAT71(uVar4,bVar1);
  bVar5 = (byte)((ulonglong)param_2 >> 8) ^ bVar1;
  *param_4 = *param_4;
  *(byte *)CONCAT62(uVar6,CONCAT11(bVar5,(char)param_2)) =
       *(char *)CONCAT62(uVar6,CONCAT11(bVar5,(char)param_2)) + bVar1;
  *pbVar3 = *pbVar3 + bVar1;
  bVar5 = bVar1 & *pbVar3 & *(byte *)CONCAT71(uVar4,bVar1 & *pbVar3);
  bVar1 = *param_4;
  *param_4 = *param_4 + bVar5;
  iVar2 = (int)CONCAT71(uVar4,bVar5) + *(int *)(CONCAT71(uVar4,bVar5) * 2) +
          (uint)CARRY1(bVar1,bVar5);
  bVar1 = *unaff_RSI;
  bVar5 = (byte)iVar2;
  *unaff_RSI = *unaff_RSI + bVar5;
  if (!CARRY1(bVar1,bVar5)) {
    *param_1 = *param_1 ^ (byte)((uint)iVar2 >> 8);
  }
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

