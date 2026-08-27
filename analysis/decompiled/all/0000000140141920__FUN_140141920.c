// Function: FUN_140141920
// Addr: 140141920
// Size: 337 bytes


undefined8 * FUN_140141920(undefined8 *param_1,longlong param_2,ulonglong *param_3)

{
  byte *pbVar1;
  longlong lVar2;
  byte bVar3;
  ulonglong uVar4;
  ushort uVar5;
  uint3 uVar6;
  char cVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  FUN_140016940(param_1,(*param_3 + 2) / 3 << 2,0x3d);
  puVar9 = param_1;
  if (0xf < (ulonglong)param_1[3]) {
    puVar9 = (undefined8 *)*param_1;
  }
  lVar10 = 0;
  uVar4 = (*param_3 / 3) * 3;
  uVar8 = 0;
  uVar11 = *param_3 % 3;
  if (uVar4 != 0) {
    do {
      pbVar1 = (byte *)(uVar8 + param_2);
      uVar5 = CONCAT11(*pbVar1,*(undefined1 *)(uVar8 + 1 + param_2));
      lVar2 = uVar8 + 2;
      uVar8 = uVar8 + 3;
      uVar6 = CONCAT21(uVar5,*(undefined1 *)(lVar2 + param_2));
      *(char *)(lVar10 + (longlong)puVar9) =
           "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"[*pbVar1 >> 2];
      *(char *)(lVar10 + 1 + (longlong)puVar9) =
           "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"[uVar5 >> 4 & 0x3f];
      *(char *)(lVar10 + 2 + (longlong)puVar9) =
           "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"[uVar6 >> 6 & 0x3f];
      *(char *)(lVar10 + 3 + (longlong)puVar9) =
           "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"[uVar6 & 0x3f];
      lVar10 = lVar10 + 4;
    } while (uVar8 < uVar4);
  }
  if (uVar11 != 0) {
    bVar3 = *(byte *)(uVar4 + param_2);
    if (uVar11 == 1) {
      *(char *)(lVar10 + (longlong)puVar9) =
           "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"[bVar3 >> 2];
      cVar7 = '=';
      *(char *)(lVar10 + 1 + (longlong)puVar9) =
           "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"[(bVar3 & 3) << 4];
    }
    else {
      uVar5 = CONCAT11(bVar3,*(undefined1 *)(uVar4 + 1 + param_2));
      *(char *)(lVar10 + (longlong)puVar9) =
           "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"[bVar3 >> 2];
      *(char *)(lVar10 + 1 + (longlong)puVar9) =
           "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"[uVar5 >> 4 & 0x3f];
      cVar7 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"[(uVar5 & 0xf) << 2]
      ;
    }
    *(char *)(lVar10 + 2 + (longlong)puVar9) = cVar7;
  }
  return param_1;
}

