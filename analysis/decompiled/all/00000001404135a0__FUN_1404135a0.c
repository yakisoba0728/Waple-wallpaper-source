// Function: FUN_1404135a0
// Addr: 1404135a0
// Size: 260 bytes


undefined8 FUN_1404135a0(byte *param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  char cVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  byte *pbVar8;
  int iVar9;
  
  iVar7 = (uint)*param_1 * 0x100 + (uint)param_1[1];
  pbVar8 = param_1;
  do {
    pbVar8 = pbVar8 + 2;
    do {
      if (iVar7 == 0) {
        return 0;
      }
      pbVar6 = (byte *)&DAT_14045dd10;
      if (iVar7 != 0) {
        pbVar6 = pbVar8;
      }
      uVar4 = (uint)*pbVar6 * 0x100 + (uint)pbVar6[1];
      if (uVar4 == 0) {
        pbVar6 = (byte *)&DAT_14045dd10;
      }
      else {
        pbVar6 = param_1 + uVar4;
      }
      iVar9 = (uint)*pbVar6 * 0x100 + (uint)pbVar6[1];
      pbVar6 = pbVar6 + (iVar9 * 2 + 2);
      iVar5 = (uint)pbVar6[1] + (uint)*pbVar6 * 0x100;
      iVar1 = iVar5 + -1;
      if (iVar5 == 0) {
        iVar1 = 0;
      }
      if ((*(char *)(param_2 + 0x1c) == '\0') ||
         ((iVar9 == 0 &&
          (uVar3 = (ulonglong)(iVar1 * 2 + 2),
          (uint)pbVar6[uVar3 + 1] + (uint)pbVar6[uVar3] * 0x100 == 0)))) {
        cVar2 = FUN_14038e560(param_2,iVar5,pbVar6 + 2,*(undefined8 *)(param_3 + 8),
                              *(undefined8 *)(param_3 + 0x20));
        if (cVar2 != '\0') {
          return 1;
        }
      }
    } while (iVar7 == 0);
    iVar7 = iVar7 + -1;
  } while( true );
}

