// Function: FUN_1402fdd30
// Addr: 1402fdd30
// Size: 190 bytes


void FUN_1402fdd30(longlong param_1,int param_2)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  ushort *puVar5;
  byte *pbVar6;
  byte *pbVar7;
  
  pbVar6 = *(byte **)((longlong)param_2 * 0x898 + 0x50 + param_1);
  if (pbVar6 == (byte *)0x0) {
    pbVar7 = (byte *)0x0;
  }
  else {
    pbVar7 = pbVar6 + (ulonglong)*(uint *)((longlong)param_2 * 0x898 + 0x48 + param_1) * 0x48;
  }
  iVar4 = FUN_140301ff0(param_1,param_2);
  if (iVar4 == 0) {
    for (; pbVar6 < pbVar7; pbVar6 = pbVar6 + 0x48) {
      puVar5 = *(ushort **)(pbVar6 + 0x38);
      bVar1 = *pbVar6;
      uVar2 = *puVar5;
      *pbVar6 = bVar1 & 0xfe;
      if (puVar5 != *(ushort **)(pbVar6 + 0x40)) {
        do {
          uVar3 = uVar2 & 3;
          puVar5 = *(ushort **)(puVar5 + 0x10);
          uVar2 = *puVar5;
          if ((uVar3 == 0) && ((uVar2 & 3) == 0)) goto LAB_1402fddc8;
        } while (puVar5 != *(ushort **)(pbVar6 + 0x40));
        *pbVar6 = bVar1 & 0xfe | 1;
      }
LAB_1402fddc8:
    }
    FUN_1402fddf0(param_1,param_2);
    FUN_1402fd700(param_1,param_2);
  }
  return;
}

