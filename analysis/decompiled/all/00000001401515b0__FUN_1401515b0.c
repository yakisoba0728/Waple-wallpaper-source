// Function: FUN_1401515b0
// Addr: 1401515b0
// Size: 2182 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1401515b0(longlong param_1,char *param_2,longlong param_3,char param_4)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  undefined8 *puVar8;
  size_t sVar9;
  undefined8 uVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  byte bVar17;
  undefined2 uVar18;
  undefined ***pppuVar14;
  longlong lVar15;
  undefined8 ****ppppuVar16;
  byte bVar19;
  char *pcVar20;
  ulonglong uVar21;
  uint *puVar22;
  undefined7 uVar23;
  byte bVar24;
  undefined8 *puVar25;
  ulonglong uVar26;
  byte *pbVar27;
  undefined1 local_f8;
  undefined **local_f0;
  uint local_e8;
  ulonglong local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined **local_c8;
  code *local_c0;
  ulonglong local_b8;
  undefined8 *puStack_b0;
  undefined8 local_a8;
  undefined ***local_90;
  undefined8 ***local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  ulonglong local_70;
  longlong local_68 [3];
  ulonglong local_50;
  char local_42;
  
  puVar8 = (undefined8 *)FUN_14028af20(0x318);
  lVar11 = *(longlong *)(param_1 + 0x80);
  puVar8[1] = 0;
  puVar8[3] = 0;
  puVar8[2] = lVar11 + 0x1c88;
  puVar8[4] = 0;
  puVar8[5] = 0;
  puVar8[6] = 0;
  puVar8[7] = 0;
  puVar8[8] = 0;
  *puVar8 = &PTR_FUN_14048b710;
  FUN_140153760(puVar8 + 9);
  puVar8[0x19] = lVar11;
  puVar8[0x1a] = 0;
  puVar8[0x1b] = 0;
  puVar8[0x1c] = 0;
  puVar8[0x1d] = 0;
  puVar8[0x1e] = 0;
  puVar8[0x1f] = 0;
  puVar8[0x20] = 0;
  puVar8[0x21] = 0;
  puVar8[0x22] = 0;
  puVar8[0x23] = 0;
  FUN_1404217a0(puVar8 + 0x24,0,0xc0);
  puVar8[0x3c] = 0;
  puVar13 = puVar8 + 0x40;
  puVar8[0x3d] = 0;
  *(undefined4 *)(puVar8 + 0x3e) = 0;
  *(undefined1 *)((longlong)puVar8 + 500) = 0;
  puVar8[0x3f] = 0;
  *puVar13 = 0;
  puVar8[0x41] = 0;
  puVar8[0x42] = 0;
  puVar8[0x43] = 0;
  sVar9 = strlen(param_2);
  FUN_140017480(puVar13,param_2,sVar9);
  if (param_3 == 0) {
    local_c0 = (code *)((ulonglong)local_c0 & 0xfffffffffffffe00);
    local_a8 = 0;
    local_b8 = 0;
    puStack_b0 = (undefined8 *)0x0;
    FUN_140085350(puVar8 + 0x44,&local_c8);
    pppuVar14 = &local_c8;
  }
  else {
    uVar10 = FUN_140085090(&local_f0,param_3);
    FUN_140085350(puVar8 + 0x44,uVar10);
    pppuVar14 = &local_f0;
  }
  FUN_140085440(pppuVar14);
  puVar8[0x4b] = 0;
  *(undefined1 *)(puVar8 + 0x4a) = 0;
  *(uint *)(puVar8 + 0x4a) = *(uint *)(puVar8 + 0x4a) & 0xfffffeff;
  puVar8[0x4c] = 0;
  puVar8[0x4d] = 0;
  *(undefined4 *)(puVar8 + 0x4e) = 0;
  puVar8[0x4f] = 0;
  puVar8[0x50] = 0;
  lVar11 = FUN_14028af20(0x20);
  *(longlong *)lVar11 = lVar11;
  *(longlong *)(lVar11 + 8) = lVar11;
  puVar8[0x4f] = lVar11;
  puVar8[0x51] = 0;
  puVar8[0x52] = 0;
  puVar8[0x53] = 0;
  puVar8[0x54] = 7;
  puVar8[0x55] = 8;
  *(undefined4 *)(puVar8 + 0x4e) = 0x3f800000;
  FUN_14004f190(puVar8 + 0x51,0x10,puVar8[0x4f]);
  *(undefined4 *)(puVar8 + 0x56) = 0;
  FUN_14015a690(puVar8 + 0x57);
  *(undefined4 *)(puVar8 + 0x5f) = 0;
  puVar8[0x60] = 0;
  puVar8[0x61] = 0;
  puVar8[0x62] = 0;
  if (param_4 != '\0') {
    *(uint *)(puVar8 + 0x3f) = *(uint *)(puVar8 + 0x3f) | 0x400;
  }
  FUN_1401a38f0(puVar8 + 1,0);
  iVar6 = *(int *)(puVar8 + 0x5f);
  if ((iVar6 != 0) && (puVar8[0x1a] != 0)) {
    FUN_14015f7b0(puVar8[0x1a],iVar6);
  }
  *(undefined4 *)(puVar8 + 0x5f) = 0;
  FUN_140157660(puVar8);
  puVar8[0x1a] = 0;
  puVar8[0x1b] = 0;
  puVar8[0x1c] = 0;
  puVar8[0x1d] = 0;
  puVar8[0x1e] = 0;
  puVar8[0x1f] = 0;
  puVar8[0x20] = 0;
  puVar8[0x21] = 0;
  puVar8[0x22] = 0;
  puVar8[0x23] = 0;
  puVar25 = (undefined8 *)puVar8[0x3d];
  if (puVar25 != (undefined8 *)0x0) {
    (**(code **)*puVar25)(puVar25,1);
  }
  puVar8[0x3d] = 0;
  puVar8[0x3c] = 0;
  puVar25 = puVar13;
  if (0xf < (ulonglong)puVar8[0x43]) {
    puVar25 = (undefined8 *)*puVar13;
  }
  FUN_1400d3f80(local_68,*(undefined8 *)(puVar8[0x19] + 0x1898),puVar25,1);
  local_e8 = (local_e8 >> 8 & 0xfffffe) << 8;
  uStack_80 = 0;
  local_88 = (undefined8 ****)0x0;
  local_d0 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_78 = 0;
  local_70 = 0xf;
  cVar2 = FUN_140017840(local_68,&local_f0,&local_88);
  if (cVar2 == '\0') {
    ppppuVar16 = &local_88;
    if (0xf < local_70) {
      ppppuVar16 = (undefined8 ****)local_88;
    }
    if (0xf < (ulonglong)puVar8[0x43]) {
      puVar13 = (undefined8 *)*puVar13;
    }
    FUN_140098760("Material %s error: %s\n",puVar13,ppppuVar16);
    local_c0 = (code *)((ulonglong)local_c0 & 0xfffffffffffffe00);
    local_a8 = 0;
    local_b8 = 0;
    puStack_b0 = (undefined8 *)0x0;
    FUN_140154480(puVar8,&local_c8);
    switch((ulonglong)local_c0 & 0xff) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 5:
      break;
    case 4:
      if (((uint)local_c0 >> 8 & 1) != 0) {
        thunk_FUN_1402d9040(local_c8);
      }
      break;
    case 6:
    case 7:
      if (local_c8 != (undefined **)0x0) {
        FUN_140088e40(local_c8);
        thunk_FUN_14028af80(local_c8,0x10);
      }
      break;
    default:
      FID_conflict__assert(L"false",L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x434);
    }
    uVar12 = local_b8;
    local_c8 = (undefined **)0x0;
    if (local_b8 != 0) {
      FUN_140017240(local_b8 + 0x40);
      FUN_140017240(uVar12 + 0x20);
      FUN_140017240(uVar12);
      thunk_FUN_14028af80(uVar12,0x60);
    }
  }
  else {
    uVar12 = FUN_140086de0(&local_f0,"passes","");
    if ((*(char *)(uVar12 + 8) == '\x06') && (iVar3 = FUN_1400863a0(uVar12), iVar3 != 0)) {
      uVar10 = FUN_140086540(uVar12,0);
      FUN_140085520(&local_f0,uVar10);
    }
    if (*(char *)(puVar8 + 0x45) == '\a') {
      uVar10 = FUN_140153200(&local_c8,&local_f0,puVar8 + 0x44);
      FUN_140085610(&local_f0,uVar10);
      FUN_140085440(&local_c8);
    }
    FUN_140154480(puVar8,&local_f0);
  }
  lVar11 = puVar8[0x3c];
  if (lVar11 == 0) {
    lVar11 = FUN_1401a5c40(puVar8[0x19] + 0x15a8,"error",0);
    puVar8[0x3c] = lVar11;
  }
  pbVar27 = (byte *)(lVar11 + 0x14);
  *(undefined4 *)((longlong)puVar8 + 0x1fc) = 0;
  bVar19 = *pbVar27;
  while (bVar19 != 0xff) {
    uVar4 = *pbVar27 & 0xf;
    lVar11 = puVar8[(ulonglong)uVar4 + 0x1a];
    if (lVar11 == 0) {
      lVar11 = puVar8[0x3c];
      if (lVar11 == 0) {
LAB_140151b6a:
        lVar11 = puVar8[0x19];
        pcVar20 = "error";
      }
      else {
        uVar12 = ((ulonglong)uVar4 ^ 0xcbf29ce484222325) * -0x600553f7a9ca436f &
                 *(ulonglong *)(lVar11 + 0x60);
        lVar15 = *(longlong *)(*(longlong *)(lVar11 + 0x48) + 8 + uVar12 * 0x10);
        if (lVar15 == *(longlong *)(lVar11 + 0x38)) {
LAB_140151b30:
          lVar15 = 0;
        }
        else {
          uVar7 = *(uint *)(lVar15 + 0x10);
          while (uVar4 != uVar7) {
            if (lVar15 == *(longlong *)(*(longlong *)(lVar11 + 0x48) + uVar12 * 0x10))
            goto LAB_140151b30;
            lVar15 = *(longlong *)(lVar15 + 8);
            uVar7 = *(uint *)(lVar15 + 0x10);
          }
        }
        if ((((lVar15 == 0) || (lVar15 == *(longlong *)(lVar11 + 0x38))) || (lVar15 == -0x18)) ||
           (*(longlong *)(lVar15 + 0x30) == 0)) goto LAB_140151b6a;
        pcVar20 = (char *)(lVar15 + 0x20);
        lVar11 = puVar8[0x19];
        if (0xf < *(ulonglong *)(lVar15 + 0x38)) {
          pcVar20 = *(char **)pcVar20;
        }
      }
      lVar11 = FUN_14014cf90(lVar11 + 0x1520,pcVar20,1);
      puVar8[(ulonglong)uVar4 + 0x1a] = lVar11;
    }
    param_2 = (char *)(lVar11 + 0x78);
    if (0xf < *(ulonglong *)(lVar11 + 0x90)) {
      param_2 = *(char **)param_2;
    }
    sVar9 = strlen(param_2);
    uVar21 = 0xcbf29ce484222325;
    uVar12 = 0;
    if (sVar9 != 0) {
      do {
        uVar26 = uVar12 + 1;
        uVar21 = (uVar21 ^ (byte)param_2[uVar12]) * 0x100000001b3;
        uVar12 = uVar26;
      } while (uVar26 < sVar9);
    }
    uVar26 = *(ulonglong *)(DAT_1404e7fa8 + 8 + (uVar21 & DAT_1404e7fc0) * 0x10);
    uVar12 = 0;
    if (uVar26 != DAT_1404e7f98) {
      uVar21 = *(ulonglong *)(DAT_1404e7fa8 + (uVar21 & DAT_1404e7fc0) * 0x10);
      cVar2 = FUN_14000d010(uVar26 + 0x10,param_2);
      while (uVar12 = uVar26, cVar2 == '\0') {
        if (uVar26 == uVar21) {
          uVar12 = 0;
          break;
        }
        uVar26 = *(ulonglong *)(uVar26 + 8);
        cVar2 = FUN_14000d010(uVar26 + 0x10,param_2);
      }
    }
    uVar21 = DAT_1404e7f98;
    if (uVar12 != 0) {
      uVar21 = uVar12;
    }
    if (uVar21 != DAT_1404e7f98) {
      *(uint *)((longlong)puVar8 + 0x1fc) =
           *(uint *)((longlong)puVar8 + 0x1fc) | *(uint *)(uVar21 + 0x30);
    }
    pbVar27 = pbVar27 + 1;
    bVar19 = *pbVar27;
  }
  uVar21 = (**(code **)(*(longlong *)puVar8[0x3c] + 0x20))();
  if ((uVar21 & 8) != 0) {
    *(uint *)((longlong)puVar8 + 0x1fc) = *(uint *)((longlong)puVar8 + 0x1fc) | 0x10;
  }
  if ((iVar6 != 0) && (puVar8[0x1a] != 0)) {
    local_c8 = &PTR_LAB_14048b6d0;
    local_c0 = FUN_140157780;
    local_b8 = CONCAT71(local_b8._1_7_,local_f8);
    local_90 = &local_c8;
    puStack_b0 = puVar8;
    uVar5 = FUN_14015f330(puVar8[0x1a],&local_c8);
    *(undefined4 *)(puVar8 + 0x5f) = uVar5;
  }
  if (0xf < local_70) {
    puVar22 = (uint *)(local_70 + 1);
    ppppuVar16 = (undefined8 ****)local_88;
    if ((uint *)0xfff < puVar22) {
      ppppuVar16 = (undefined8 ****)local_88[-1];
      if (0x1f < (ulonglong)((longlong)local_88 + (-8 - (longlong)ppppuVar16))) goto LAB_140151e23;
      puVar22 = (uint *)(local_70 + 0x28);
    }
    thunk_FUN_14028af80(ppppuVar16,puVar22);
  }
  local_78 = 0;
  local_70 = 0xf;
  local_88 = (undefined8 ***)((ulonglong)local_88 & 0xffffffffffffff00);
  if ((byte)local_e8 < 8) {
                    /* WARNING: Could not recover jumptable at 0x000140151d4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar13 = (undefined8 *)
              (*(code *)(IMAGE_DOS_HEADER_140000000.e_magic +
                        *(uint *)((ulonglong)(byte)local_e8 * 4 + 0x140151e4c)))
                        (IMAGE_DOS_HEADER_140000000.e_magic +
                         *(uint *)((ulonglong)(byte)local_e8 * 4 + 0x140151e4c));
    return puVar13;
  }
  FID_conflict__assert(L"false",L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x434);
  uVar12 = local_e0;
  local_f0 = (undefined **)0x0;
  if (local_e0 != 0) {
    FUN_140017240(local_e0 + 0x40);
    FUN_140017240(uVar12 + 0x20);
    FUN_140017240(uVar12);
    thunk_FUN_14028af80(uVar12,0x60);
  }
  if (0xf < local_50) {
    puVar22 = (uint *)(local_50 + 1);
    lVar11 = local_68[0];
    if ((uint *)0xfff < puVar22) {
      lVar11 = *(longlong *)(local_68[0] + -8);
      if (0x1f < (local_68[0] - lVar11) - 8U) {
LAB_140151e23:
        uVar18 = 0;
        pcVar1 = (code *)swi(0x29);
        iVar6 = (*pcVar1)();
        uVar4 = (uint)uVar12 - *puVar22;
        pbVar27 = (byte *)(ulonglong)uVar4;
        uVar7 = iVar6 + 0x151a2b00 + (uint)((uint)uVar12 < *puVar22);
        bVar19 = *pbVar27;
        bVar17 = (byte)((ushort)uVar18 >> 8);
        *pbVar27 = *pbVar27 + bVar17;
        uVar23 = (undefined7)((ulonglong)puVar22 >> 8);
        bVar19 = ((char)puVar22 - DAT_1552f493b) - CARRY1(bVar19,bVar17);
        bVar24 = (byte)uVar4;
        _DAT_1552f4943 =
             (_DAT_1552f4943 - (int)CONCAT71(uVar23,bVar19)) - (uint)CARRY1(bVar17,bVar24);
        bVar17 = (byte)((ulonglong)puVar22 >> 8);
        _DAT_1552f104b =
             (_DAT_1552f104b - (int)CONCAT71(uVar23,bVar19 + bVar17)) - (uint)CARRY1(bVar19,bVar17);
        pbVar27 = (byte *)(param_2 + -0x60ffeae3);
        bVar19 = *pbVar27;
        *pbVar27 = *pbVar27 + bVar24;
        uVar4 = uVar7 + 0xe260ffeb;
        pbVar27 = (byte *)((longlong)puVar8 + 0x1d);
        bVar17 = *pbVar27;
        *pbVar27 = *pbVar27 + (byte)uVar18;
        local_42 = local_42 +
                   (char)((uVar4 - CARRY1(bVar19,bVar24)) +
                          (uint)(uVar7 < 0x1d9f0015 || uVar4 < CARRY1(bVar19,bVar24)) + 0x2a3b3e00 +
                          (uint)CARRY1(bVar17,(byte)uVar18) >> 8);
        pcVar1 = (code *)swi(3);
        puVar13 = (undefined8 *)(*pcVar1)();
        return puVar13;
      }
      puVar22 = (uint *)(local_50 + 0x28);
    }
    thunk_FUN_14028af80(lVar11,puVar22);
  }
  return puVar8;
}

