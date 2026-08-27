// Function: FUN_1401b82d0
// Addr: 1401b82d0
// Size: 437 bytes


ulonglong FUN_1401b82d0(longlong *param_1,char *param_2,byte *param_3,byte *param_4,
                       longlong *param_5,longlong param_6,longlong param_7,longlong *param_8)

{
  byte bVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  byte *pbVar5;
  int iVar6;
  
  *param_5 = (longlong)param_3;
  *param_8 = param_6;
  pbVar5 = (byte *)*param_5;
  lVar2 = param_6;
  do {
    if ((pbVar5 == param_4) || (lVar2 == param_7)) goto LAB_1401b8413;
    bVar1 = *pbVar5;
    uVar3 = (uint)bVar1;
    if (bVar1 < 0x80) {
      *param_5 = (longlong)(pbVar5 + 1);
    }
    else {
      if (bVar1 < 0xc0) {
        *param_5 = (longlong)(pbVar5 + 1);
        return 2;
      }
      if (bVar1 < 0xe0) {
        uVar3 = uVar3 & 0x1f;
        iVar6 = 1;
      }
      else if (bVar1 < 0xf0) {
        uVar3 = uVar3 & 0xf;
        iVar6 = 2;
      }
      else if (bVar1 < 0xf8) {
        uVar3 = uVar3 & 7;
        iVar6 = 3;
      }
      else {
        uVar3 = uVar3 & 3;
        iVar6 = 5 - (uint)(bVar1 < 0xfc);
      }
      if ((longlong)param_4 - (longlong)pbVar5 < (longlong)(ulonglong)(iVar6 + 1)) {
LAB_1401b8413:
        return (ulonglong)(param_3 == pbVar5);
      }
      pbVar5 = pbVar5 + 1;
      *param_5 = (longlong)pbVar5;
      do {
        if (0x3f < (byte)(*pbVar5 + 0x80)) {
          return 2;
        }
        iVar6 = iVar6 + -1;
        uVar3 = *pbVar5 & 0x3f | uVar3 << 6;
        pbVar5 = pbVar5 + 1;
        *param_5 = (longlong)pbVar5;
      } while (0 < iVar6);
    }
    if (((*param_2 == '\0') && (*param_2 = '\x01', (*(byte *)((longlong)param_1 + 0x14) & 4) != 0))
       && (uVar3 == 0xfeff)) {
      uVar4 = (**(code **)(*param_1 + 0x30))
                        (param_1,param_2,*param_5,param_4,param_5,param_6,param_7,param_8);
      if ((int)uVar4 != 1) {
        return uVar4;
      }
      *param_2 = '\0';
      *param_5 = (longlong)param_3;
      return uVar4;
    }
    if (*(uint *)(param_1 + 2) < uVar3) {
      return 2;
    }
    *(uint *)*param_8 = uVar3;
    *param_8 = *param_8 + 4;
    pbVar5 = (byte *)*param_5;
    lVar2 = *param_8;
  } while( true );
}

