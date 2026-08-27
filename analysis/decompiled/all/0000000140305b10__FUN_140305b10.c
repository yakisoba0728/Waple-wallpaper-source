// Function: FUN_140305b10
// Addr: 140305b10
// Size: 1100 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_140305b10(undefined8 *param_1,undefined2 *param_2,longlong param_3,char param_4)

{
  byte bVar1;
  undefined *puVar2;
  bool bVar3;
  longlong lVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  uint uVar11;
  undefined8 uVar12;
  byte *pbVar13;
  int iVar14;
  undefined *puVar15;
  int *piVar16;
  undefined1 auStack_c8 [32];
  undefined *local_a8;
  undefined8 local_a0;
  ulonglong local_98;
  uint local_88;
  uint local_84;
  ulonglong local_80;
  undefined8 local_78;
  undefined2 *local_70;
  longlong local_68;
  undefined *local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_1404dc040 ^ (ulonglong)auStack_c8;
  uVar8 = 0;
  uVar12 = 0;
  local_50 = 0;
  local_48 = 0;
  if (((param_1 == (undefined8 *)0x0) || (param_2 == (undefined2 *)0x0)) || (param_3 == 0)) {
    return 6;
  }
  puVar15 = (undefined *)0x0;
  local_78 = 0;
  local_70 = param_2;
  local_68 = param_3;
  uVar7 = FUN_140416410(param_1[3]);
  local_a0 = 0;
  local_84 = 3;
  local_a8 = (undefined *)0x0;
  puVar2 = (&PTR_DAT_1404decd0)[*(int *)(param_2 + 8)];
  FUN_140417f00(*(undefined4 *)
                 ("mldAbarAnmrAtsvAumaBgneBdhuBmkaCsnaCiraCrehCtpoCtrpClryCaveDtrsDihtEroeG" +
                 (longlong)*(int *)(param_2 + 4) * 4),0,&local_84,&local_60);
  uVar10 = uVar8;
  if (local_84 != 0) {
    uVar10 = (ulonglong)local_60 & 0xffffffff;
  }
  iVar6 = (int)uVar10;
  uVar10 = uVar8;
  if (1 < local_84) {
    uVar10 = (ulonglong)local_60 >> 0x20;
  }
  iVar14 = (int)uVar10;
  local_50 = CONCAT44(iVar14,iVar6);
  uVar5 = 0;
  if (2 < local_84) {
    uVar5 = local_58;
  }
  local_48 = CONCAT44(local_48._4_4_,uVar5);
  if (param_4 == '\0') {
    if (iVar6 == 0x44464c54) goto LAB_140305ef0;
  }
  else if (iVar6 == 0) {
    local_50 = CONCAT44(iVar14,0x44464c54);
  }
  else if (iVar14 == 0) {
    local_50 = CONCAT44(0x44464c54,iVar6);
  }
  else if (iVar14 != 0x44464c54) {
    local_48 = CONCAT44(local_48._4_4_,0x44464c54);
  }
  uVar12 = FUN_140418e30();
  local_a8 = puVar2;
  local_a0 = uVar12;
  FUN_1404172a0(uVar7,0x47535542,&local_50,0);
  iVar6 = FUN_140418f30(uVar12);
  uVar8 = 0;
  if (iVar6 != 0) goto LAB_140305ef0;
  uVar8 = FUN_140418e30();
  local_88 = 0xffffffff;
  local_80 = uVar8;
  iVar6 = FUN_140418f50(uVar12,&local_88);
  while (iVar6 != 0) {
    local_a0 = 0;
    local_a8 = (undefined *)0x0;
    local_98 = uVar8;
    FUN_140417640(uVar7,0x47535542,local_88,0);
    iVar6 = FUN_140418f50(uVar12,&local_88);
  }
  uVar9 = FUN_140418e30();
  local_a8 = puVar2;
  local_a0 = uVar9;
  local_78 = uVar9;
  FUN_1404172a0(uVar7,0x47504f53,&local_50,0);
  puVar15 = (undefined *)FUN_140418e30();
  local_88 = 0xffffffff;
  local_60 = puVar15;
  iVar6 = FUN_140418f50(uVar9,&local_88);
  while (iVar6 != 0) {
    local_98 = 0;
    local_a0 = 0;
    local_a8 = puVar15;
    FUN_140417640(uVar7,0x47504f53,local_88,0);
    iVar6 = FUN_140418f50(uVar9,&local_88);
  }
  if (*(int *)(param_2 + 8) != 10) {
    piVar16 = (int *)(&DAT_140438050 + (longlong)*(int *)(param_2 + 6) * 8);
    iVar6 = *piVar16;
    if (iVar6 == 0x159b) goto LAB_140305ef0;
    bVar3 = false;
    do {
      pbVar13 = &DAT_140436aa0 + iVar6;
      bVar1 = *pbVar13;
      uVar8 = local_80;
      param_2 = local_70;
      puVar15 = local_60;
      while (local_80 = uVar8, local_70 = param_2, local_60 = puVar15, bVar1 != 0) {
        uVar11 = (uint)bVar1;
        pbVar13 = pbVar13 + 1;
        if (0x7f < bVar1) {
          uVar11 = (uint)bVar1;
          if (bVar1 < 0xe0) {
            iVar6 = 1;
            uVar11 = uVar11 & 0x1f;
          }
          else if (uVar11 < 0xf0) {
            iVar6 = 2;
            uVar11 = uVar11 & 0xf;
          }
          else {
            iVar6 = 3;
            uVar11 = uVar11 & 7;
          }
          do {
            bVar1 = *pbVar13;
            pbVar13 = pbVar13 + 1;
            uVar11 = (int)(char)bVar1 & 0x3fU | uVar11 << 6;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
        local_88 = 0xffffffff;
        iVar6 = FUN_140418f50(uVar12,&local_88);
        while (iVar6 != 0) {
          local_84 = FUN_1402f0060(*param_1,uVar11);
          local_a8 = (undefined *)CONCAT44(local_a8._4_4_,1);
          iVar6 = FUN_140417950(uVar7,local_88,&local_84,1);
          if (iVar6 != 0) {
            bVar3 = true;
            break;
          }
          iVar6 = FUN_140418f50(uVar12,&local_88);
        }
        uVar8 = local_80;
        param_2 = local_70;
        puVar15 = local_60;
        bVar1 = *pbVar13;
      }
      iVar6 = piVar16[2];
      piVar16 = piVar16 + 2;
    } while (iVar6 != 0x159b);
    if (!bVar3) goto LAB_140305ef0;
    if (*(int *)(param_2 + 8) != 10) {
      FUN_140418f70(uVar8,puVar15);
    }
  }
  local_88 = 0xffffffff;
  iVar6 = FUN_140418f50(uVar8,&local_88);
  lVar4 = local_68;
  puVar15 = local_60;
  while (local_60 = puVar15, iVar6 != 0) {
    if ((local_88 < *(uint *)(param_1 + 1)) &&
       (*(short *)(lVar4 + (ulonglong)local_88 * 2) == 0x1fff)) {
      *(undefined2 *)(lVar4 + (ulonglong)local_88 * 2) = *param_2;
    }
    iVar6 = FUN_140418f50(uVar8,&local_88);
    puVar15 = local_60;
  }
LAB_140305ef0:
  FUN_140418ec0(uVar12);
  FUN_140418ec0(uVar8);
  FUN_140418ec0(local_78);
  FUN_140418ec0(puVar15);
  return 0;
}

