// Function: FUN_1400a74d0
// Addr: 1400a74d0
// Size: 809 bytes


/* WARNING: Removing unreachable block (ram,0x0001400a7566) */

char * FUN_1400a74d0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  byte bVar3;
  char *pcVar4;
  ulonglong uVar5;
  uint *puVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  
  puVar6 = (uint *)0x0;
  pcVar4 = (char *)0x0;
  uVar7 = 0;
  puVar8 = puVar6;
  puVar11 = puVar6;
  if ((param_2 != (longlong *)0x0) &&
     (lVar1 = *param_2, puVar8 = (uint *)0x0, puVar11 = (uint *)0x0, lVar1 != 0)) {
    puVar11 = (uint *)(param_2[3] + lVar1);
    puVar8 = (uint *)(param_2[2] + lVar1);
  }
  iVar9 = *(int *)(param_1 + 0xcc);
  if (iVar9 == 0) {
    if (*(int *)(param_1 + 0x50) != 0xc) goto LAB_1400a7680;
    goto LAB_1400a7580;
  }
  uVar7 = *(uint *)(param_1 + 0xce0);
  if (iVar9 == 1) goto LAB_1400a75a0;
  if (iVar9 == 2) {
    while (puVar11 != puVar8) {
      uVar2 = *(ulonglong *)(param_1 + 0xce8);
      uVar5 = uVar2 & 0xffffffffffffff;
      *(ulonglong *)(param_1 + 0xce8) = uVar5;
      bVar3 = (byte)(uVar2 >> 0x38);
      uVar10 = *puVar11;
      puVar11 = (uint *)((longlong)puVar11 + 1);
      uVar5 = (ulonglong)(byte)uVar10 << (bVar3 & 0x3f) | uVar5;
      *(ulonglong *)(param_1 + 0xce8) = uVar5;
      if (bVar3 == 0x10) {
        while( true ) {
          uVar10 = uVar7 * 4;
          *(char *)((ulonglong)uVar10 + 0x8d0 + param_1) = (char)uVar5;
          *(char *)((ulonglong)(uVar10 + 1) + 0x8d0 + param_1) = (char)(uVar5 >> 8);
          *(char *)((ulonglong)(uVar10 + 2) + 0x8d0 + param_1) = (char)(uVar5 >> 0x10);
          uVar7 = uVar7 + 1;
          *(undefined1 *)((ulonglong)(uVar10 + 3) + 0x8d0 + param_1) = 0xff;
LAB_1400a7580:
          if (0xff < uVar7) goto LAB_1400a77c0;
          if (*(uint *)(param_1 + 0x54) < 3) goto LAB_1400a7781;
          *(uint *)(param_1 + 0x54) = *(uint *)(param_1 + 0x54) - 3;
LAB_1400a75a0:
          if ((longlong)puVar8 - (longlong)puVar11 < 3) break;
          uVar5 = (ulonglong)(uint3)*puVar11;
          puVar11 = (uint *)((longlong)puVar11 + 3);
        }
        *(undefined8 *)(param_1 + 0xce8) = 0;
        iVar9 = 2;
      }
      else {
        *(ulonglong *)(param_1 + 0xce8) = (ulonglong)(bVar3 + 8) << 0x38 | uVar5;
      }
    }
  }
  else {
    if (iVar9 == 3) goto LAB_1400a76a0;
    if (iVar9 != 4) {
      *(uint *)(param_1 + 0xce0) = uVar7;
      iVar9 = 0;
      pcVar4 = (char *)puVar6;
      goto LAB_1400a77c2;
    }
    while (puVar11 != puVar8) {
      uVar2 = *(ulonglong *)(param_1 + 0xce8);
      uVar5 = uVar2 & 0xffffffffffffff;
      *(ulonglong *)(param_1 + 0xce8) = uVar5;
      bVar3 = (byte)(uVar2 >> 0x38);
      uVar10 = *puVar11;
      puVar11 = (uint *)((longlong)puVar11 + 1);
      uVar5 = (ulonglong)(byte)uVar10 << (bVar3 & 0x3f) | uVar5;
      *(ulonglong *)(param_1 + 0xce8) = uVar5;
      if (bVar3 == 0x18) {
        while( true ) {
          uVar10 = uVar7 * 4;
          *(char *)((ulonglong)uVar10 + 0x8d0 + param_1) = (char)uVar5;
          *(char *)((ulonglong)(uVar10 + 1) + 0x8d0 + param_1) = (char)(uVar5 >> 8);
          *(char *)((ulonglong)(uVar10 + 2) + 0x8d0 + param_1) = (char)(uVar5 >> 0x10);
          uVar7 = uVar7 + 1;
          *(undefined1 *)((ulonglong)(uVar10 + 3) + 0x8d0 + param_1) = 0xff;
LAB_1400a7680:
          if (0xff < uVar7) goto LAB_1400a77c0;
          if (*(uint *)(param_1 + 0x54) < 4) goto LAB_1400a7781;
          *(uint *)(param_1 + 0x54) = *(uint *)(param_1 + 0x54) - 4;
LAB_1400a76a0:
          if ((longlong)puVar8 - (longlong)puVar11 < 4) break;
          uVar5 = (ulonglong)*puVar11;
          puVar11 = puVar11 + 1;
        }
        *(undefined8 *)(param_1 + 0xce8) = 0;
        iVar9 = 4;
      }
      else {
        *(ulonglong *)(param_1 + 0xce8) = (ulonglong)(bVar3 + 8) << 0x38 | uVar5;
      }
    }
  }
  *(uint *)(param_1 + 0xce0) = uVar7;
  pcVar4 = "$base: short read";
  goto LAB_1400a77c2;
LAB_1400a7781:
  do {
    uVar10 = uVar7 * 4;
    uVar7 = uVar7 + 1;
    *(undefined1 *)(param_1 + 0x8d0 + (ulonglong)uVar10) = 0;
    *(undefined1 *)(param_1 + 0x8d0 + (ulonglong)(uVar10 + 1)) = 0;
    *(undefined1 *)(param_1 + 0x8d0 + (ulonglong)(uVar10 + 2)) = 0;
    *(undefined1 *)(param_1 + 0x8d0 + (ulonglong)(uVar10 + 3)) = 0xff;
  } while (uVar7 < 0x100);
LAB_1400a77c0:
  iVar9 = 0;
LAB_1400a77c2:
  *(int *)(param_1 + 0xcc) = iVar9;
  if ((param_2 != (longlong *)0x0) && (*param_2 != 0)) {
    param_2[3] = (longlong)puVar11 - *param_2;
  }
  return pcVar4;
}

