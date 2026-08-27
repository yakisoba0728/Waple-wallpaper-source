// Function: FUN_1400c7140
// Addr: 1400c7140
// Size: 731 bytes


undefined8 * FUN_1400c7140(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [24];
  
  puVar4 = (undefined8 *)FUN_14028af20(0x140);
  uVar10 = 0;
  *puVar4 = &PTR_FUN_1404871b8;
  *(undefined1 *)(puVar4 + 1) = 0;
  puVar4[2] = 0;
  puVar4[3] = 0;
  *(undefined4 *)(puVar4 + 4) = 0x1000000;
  *(undefined4 *)((longlong)puVar4 + 0x24) = 0x3f800000;
  *(undefined4 *)(puVar4 + 7) = 0;
  QueryPerformanceFrequency((LARGE_INTEGER *)(puVar4 + 6));
  QueryPerformanceCounter((LARGE_INTEGER *)(puVar4 + 5));
  *(undefined4 *)(puVar4 + 0xc) = 0;
  *(undefined4 *)(puVar4 + 0x12) = 0x10000;
  *(undefined2 *)((longlong)puVar4 + 0x94) = 0;
  *(undefined1 *)((longlong)puVar4 + 0x96) = 0;
  *(undefined2 *)(puVar4 + 0x19) = 0;
  puVar4[8] = 0;
  puVar4[9] = 0;
  puVar4[10] = param_2;
  puVar4[0xb] = 0;
  *(undefined1 *)((longlong)puVar4 + 100) = 0;
  puVar4[0xd] = 0;
  *(undefined4 *)(puVar4 + 0xe) = 0;
  *(undefined1 *)((longlong)puVar4 + 0x74) = 0;
  puVar4[0xf] = 0;
  puVar4[0x10] = 0;
  puVar4[0x11] = 0;
  puVar4[0x13] = 0;
  puVar4[0x14] = 0;
  puVar4[0x15] = 0;
  puVar4[0x16] = 0;
  puVar4[0x1a] = 0;
  puVar4[0x1e] = 0;
  puVar4[0x1f] = 0;
  puVar4[0x20] = 0;
  puVar4[0x21] = 0;
  puVar4[0x22] = 0;
  puVar4[0x23] = 0;
  puVar4[0x1c] = 0;
  puVar4[0x1d] = 0;
  *(undefined4 *)(puVar4 + 0x24) = 0xffffffff;
  *(undefined4 *)(puVar4 + 0x1b) = 2;
  *(undefined4 *)((longlong)puVar4 + 0x124) = 0;
  puVar4[0x25] = 0;
  puVar4[0x26] = 0;
  *(undefined1 *)(puVar4 + 0x27) = 0;
  puVar4[0x17] = 0;
  *(undefined4 *)(puVar4 + 0x18) = 0x3f800000;
  *(undefined4 *)((longlong)puVar4 + 0xc4) = 0x3f800000;
  puVar8 = *(undefined8 **)(param_2 + 0x1468);
  if (puVar8 != *(undefined8 **)(param_2 + 0x1470)) {
    *puVar8 = puVar4;
    *(longlong *)(param_2 + 0x1468) = *(longlong *)(param_2 + 0x1468) + 8;
    return puVar4;
  }
  uVar12 = (longlong)puVar8 - *(longlong *)(param_2 + 0x1460);
  lVar7 = (longlong)uVar12 >> 3;
  if (lVar7 == 0x1fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_140013050();
  }
  uVar5 = (longlong)*(undefined8 **)(param_2 + 0x1470) - *(longlong *)(param_2 + 0x1460) >> 3;
  if (0x1fffffffffffffff - (uVar5 >> 1) < uVar5) {
LAB_1400c7417:
                    /* WARNING: Subroutine does not return */
    FUN_140017370();
  }
  uVar1 = lVar7 + 1;
  uVar5 = (uVar5 >> 1) + uVar5;
  uVar11 = uVar1;
  if (uVar1 <= uVar5) {
    uVar11 = uVar5;
  }
  if (0x1fffffffffffffff < uVar11) goto LAB_1400c7417;
  uVar11 = uVar11 * 8;
  if (uVar11 == 0) {
LAB_1400c7347:
    uVar12 = uVar12 & 0xfffffffffffffff8;
    *(undefined8 **)(uVar12 + uVar10) = puVar4;
    puVar2 = *(undefined8 **)(param_2 + 0x1460);
    if (puVar8 == *(undefined8 **)(param_2 + 0x1468)) {
      lVar7 = (longlong)*(undefined8 **)(param_2 + 0x1468) - (longlong)puVar2;
      uVar12 = uVar10;
      puVar8 = puVar2;
    }
    else {
      FUN_1404210f0(uVar10,puVar2,(longlong)puVar8 - (longlong)puVar2);
      uVar12 = uVar12 + 8 + uVar10;
      lVar7 = *(longlong *)(param_2 + 0x1468) - (longlong)puVar8;
    }
    FUN_1404210f0(uVar12,puVar8,lVar7);
    lVar7 = *(longlong *)(param_2 + 0x1460);
    if (lVar7 == 0) goto LAB_1400c73e2;
    lVar6 = lVar7;
    puVar9 = auStack_58;
    if ((0xfff < (ulonglong)((*(longlong *)(param_2 + 0x1470) - lVar7 >> 3) * 8)) &&
       (lVar6 = *(longlong *)(lVar7 + -8), puVar9 = auStack_58, 0x1f < (lVar7 - lVar6) - 8U))
    goto LAB_1400c73d0;
  }
  else {
    if (uVar11 < 0x1000) {
      uVar10 = FUN_14028af20(uVar11);
      goto LAB_1400c7347;
    }
    if (uVar11 + 0x27 <= uVar11) goto LAB_1400c7417;
    lVar7 = FUN_14028af20();
    if (lVar7 != 0) {
      uVar10 = lVar7 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(uVar10 - 8) = lVar7;
      goto LAB_1400c7347;
    }
LAB_1400c73d0:
    lVar6 = 5;
    pcVar3 = (code *)swi(0x29);
    (*pcVar3)(5);
    puVar9 = auStack_50;
  }
  *(undefined8 *)(puVar9 + -8) = 0x1400c73e2;
  thunk_FUN_14028af80(lVar6);
LAB_1400c73e2:
  *(ulonglong *)(param_2 + 0x1460) = uVar10;
  *(ulonglong *)(param_2 + 0x1468) = uVar10 + uVar1 * 8;
  *(ulonglong *)(param_2 + 0x1470) = uVar11 + uVar10;
  return puVar4;
}

