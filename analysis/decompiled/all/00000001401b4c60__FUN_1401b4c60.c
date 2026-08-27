// Function: FUN_1401b4c60
// Addr: 1401b4c60
// Size: 307 bytes


bool FUN_1401b4c60(undefined8 param_1,char *param_2,byte *param_3,byte *param_4,longlong *param_5,
                  longlong param_6,longlong param_7,longlong *param_8)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  
  *param_5 = (longlong)param_3;
  *param_8 = param_6;
  pbVar3 = (byte *)*param_5;
  do {
    if ((pbVar3 == param_4) || (param_6 == param_7)) goto LAB_1401b4d71;
    bVar1 = *pbVar3;
    uVar2 = (uint)bVar1;
    if (bVar1 < 0x80) {
      *param_5 = (longlong)(pbVar3 + 1);
    }
    else {
      if (bVar1 < 0xc0) {
        *param_5 = (longlong)(pbVar3 + 1);
        return (bool)2;
      }
      if (bVar1 < 0xe0) {
        uVar2 = uVar2 & 0x1f;
        iVar4 = 1;
      }
      else if (bVar1 < 0xf0) {
        uVar2 = uVar2 & 0xf;
        iVar4 = 2;
      }
      else if (bVar1 < 0xf8) {
        uVar2 = uVar2 & 7;
        iVar4 = 3;
      }
      else {
        uVar2 = uVar2 & 3;
        iVar4 = 5 - (uint)(bVar1 < 0xfc);
      }
      if ((longlong)param_4 - (longlong)pbVar3 < (longlong)(ulonglong)(iVar4 + 1)) {
LAB_1401b4d71:
        return param_3 == pbVar3;
      }
      pbVar3 = pbVar3 + 1;
      *param_5 = (longlong)pbVar3;
      do {
        if (0x3f < (byte)(*pbVar3 + 0x80)) {
          return (bool)2;
        }
        iVar4 = iVar4 + -1;
        uVar2 = *pbVar3 & 0x3f | uVar2 << 6;
        pbVar3 = pbVar3 + 1;
        *param_5 = (longlong)pbVar3;
      } while (0 < iVar4);
    }
    if (*param_2 == '\0') {
      *param_2 = '\x01';
    }
    if (0x10ffff < uVar2) {
      return (bool)2;
    }
    *(uint *)*param_8 = uVar2;
    *param_8 = *param_8 + 4;
    pbVar3 = (byte *)*param_5;
    param_6 = *param_8;
  } while( true );
}

