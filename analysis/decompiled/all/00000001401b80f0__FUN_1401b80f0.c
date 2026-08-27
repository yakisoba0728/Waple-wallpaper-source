// Function: FUN_1401b80f0
// Addr: 1401b80f0
// Size: 471 bytes


bool FUN_1401b80f0(longlong param_1,char *param_2,longlong param_3,uint *param_4,longlong *param_5,
                  longlong param_6,longlong param_7,longlong *param_8)

{
  uint uVar1;
  uint *puVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  byte *pbVar6;
  longlong lVar7;
  
  *param_5 = param_3;
  *param_8 = param_6;
  puVar2 = (uint *)*param_5;
  for (; (puVar2 != param_4 && (param_6 != param_7)); param_6 = param_6 + 1) {
    uVar1 = *puVar2;
    if (*(uint *)(param_1 + 0x10) < uVar1) {
      return (bool)2;
    }
    if (uVar1 < 0x80) {
      bVar3 = (byte)uVar1;
      iVar4 = 0;
      lVar5 = 4;
      lVar7 = 1;
    }
    else if (uVar1 < 0x800) {
      iVar4 = 1;
      bVar3 = (byte)(uVar1 >> 6) | 0xc0;
      lVar5 = 5;
      lVar7 = 2;
    }
    else if (uVar1 < 0x10000) {
      iVar4 = 2;
      bVar3 = (byte)(uVar1 >> 0xc) | 0xe0;
      lVar5 = 6;
      lVar7 = 3;
    }
    else if (uVar1 < 0x200000) {
      iVar4 = 3;
      bVar3 = (byte)(uVar1 >> 0x12) | 0xf0;
      lVar5 = 7;
      lVar7 = 4;
    }
    else {
      bVar3 = (byte)(uVar1 >> 0x18);
      if (uVar1 < 0x4000000) {
        iVar4 = 4;
        bVar3 = bVar3 | 0xf8;
        lVar5 = 8;
        lVar7 = 5;
      }
      else {
        iVar4 = 5;
        bVar3 = bVar3 >> 6 | 0xfc;
        lVar5 = 9;
        lVar7 = 6;
      }
    }
    if ((*param_2 == '\0') && (*param_2 = '\x01', (*(byte *)(param_1 + 0x14) & 2) != 0)) {
      if (param_7 - *param_8 < lVar5) {
        return true;
      }
      *(undefined1 *)*param_8 = 0xef;
      *param_8 = *param_8 + 1;
      *(undefined1 *)*param_8 = 0xbb;
      *param_8 = *param_8 + 1;
      *(undefined1 *)*param_8 = 0xbf;
      *param_8 = *param_8 + 1;
    }
    if (param_7 - *param_8 < lVar7) break;
    *param_5 = *param_5 + 4;
    *(byte *)*param_8 = bVar3;
    param_6 = *param_8;
    pbVar6 = (byte *)(param_6 + 1);
    *param_8 = (longlong)pbVar6;
    if (iVar4 != 0) {
      do {
        iVar4 = iVar4 + -1;
        *pbVar6 = (byte)(uVar1 >> ((char)iVar4 * '\x06' & 0x1fU)) & 0x3f | 0x80;
        param_6 = *param_8;
        pbVar6 = (byte *)(param_6 + 1);
        *param_8 = (longlong)pbVar6;
      } while (0 < iVar4);
    }
    puVar2 = (uint *)*param_5;
  }
  return param_3 == *param_5;
}

