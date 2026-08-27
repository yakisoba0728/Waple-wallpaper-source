// Function: FUN_1401b4b30
// Addr: 1401b4b30
// Size: 297 bytes


bool FUN_1401b4b30(undefined8 param_1,char *param_2,longlong param_3,uint *param_4,longlong *param_5
                  ,longlong param_6,longlong param_7,longlong *param_8)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  byte bVar4;
  longlong lVar5;
  byte *pbVar6;
  
  *param_5 = param_3;
  *param_8 = param_6;
  puVar2 = (uint *)*param_5;
  for (; (puVar2 != param_4 && (param_6 != param_7)); param_6 = param_6 + 1) {
    uVar1 = *puVar2;
    if (0x10ffff < uVar1) {
      return (bool)2;
    }
    if (uVar1 < 0x80) {
      bVar4 = (byte)uVar1;
      iVar3 = 0;
      lVar5 = 1;
    }
    else if (uVar1 < 0x800) {
      iVar3 = 1;
      bVar4 = (byte)(uVar1 >> 6) | 0xc0;
      lVar5 = 2;
    }
    else if (uVar1 < 0x10000) {
      iVar3 = 2;
      bVar4 = (byte)(uVar1 >> 0xc) | 0xe0;
      lVar5 = 3;
    }
    else {
      iVar3 = 3;
      bVar4 = (byte)(uVar1 >> 0x12) | 0xf0;
      lVar5 = 4;
    }
    if (*param_2 == '\0') {
      *param_2 = '\x01';
    }
    if (param_7 - *param_8 < lVar5) break;
    *param_5 = *param_5 + 4;
    *(byte *)*param_8 = bVar4;
    param_6 = *param_8;
    pbVar6 = (byte *)(param_6 + 1);
    *param_8 = (longlong)pbVar6;
    if (iVar3 != 0) {
      do {
        iVar3 = iVar3 + -1;
        *pbVar6 = (byte)(uVar1 >> ((char)iVar3 * '\x06' & 0x1fU)) & 0x3f | 0x80;
        param_6 = *param_8;
        pbVar6 = (byte *)(param_6 + 1);
        *param_8 = (longlong)pbVar6;
      } while (0 < iVar3);
    }
    puVar2 = (uint *)*param_5;
  }
  return param_3 == *param_5;
}

