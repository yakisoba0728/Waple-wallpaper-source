// Function: FUN_14049ebec
// Addr: 14049ebec
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014049ecc1) */

void FUN_14049ebec(int param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  undefined3 uVar1;
  byte bVar2;
  char cVar3;
  int in_EAX;
  char *pcVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  uint unaff_ESP;
  bool bVar9;
  byte *pbVar4;
  
  bVar7 = (byte)((ulonglong)param_2 >> 8);
  uRam00000001146eebf8 = uRam00000001146eebf8 & unaff_ESP;
  bVar2 = (byte)(in_EAX + 0xc641900);
  bVar9 = CARRY1(bRam000000017049f751,bVar2);
  bRam000000017049f751 = bRam000000017049f751 + bVar2;
  uVar1 = (undefined3)((uint)(in_EAX + 0xc641900) >> 8);
  bVar6 = (byte)((uint)param_1 >> 8);
  bVar8 = bVar7 + bVar6;
  cVar3 = ((bVar2 - bVar9) + -2) - CARRY1(bVar7,bVar6);
  pbVar4 = (byte *)(ulonglong)CONCAT31(uVar1,cVar3);
  *pbVar4 = *pbVar4 + (char)param_2;
  *param_4 = *param_4 + (char)unaff_ESP;
  *pbVar4 = *pbVar4 + cVar3;
  bVar2 = *pbVar4;
  *pbVar4 = *pbVar4 + bVar8;
  pcVar5 = (char *)(ulonglong)
                   CONCAT31(uVar1,((cVar3 - CARRY1(bVar2,bVar8)) + -2) - CARRY1(bVar8,bVar6));
  *pcVar5 = *pcVar5 + (char)param_2;
  iRam000000019456ecb8 = iRam000000019456ecb8 + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

