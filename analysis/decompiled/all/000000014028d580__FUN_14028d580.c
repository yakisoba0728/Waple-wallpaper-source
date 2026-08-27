// Function: FUN_14028d580
// Addr: 14028d580
// Size: 575 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 *
FUN_14028d580(undefined1 (*param_1) [16],ulonglong param_2,undefined1 (*param_3) [16],
             ulonglong param_4)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  undefined1 (*pauVar4) [16];
  undefined1 *puVar5;
  undefined1 (*pauVar6) [16];
  uint uVar7;
  uint uVar8;
  bool bVar10;
  undefined1 uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  uint uVar17;
  undefined1 auVar16 [16];
  undefined1 auStack_98 [32];
  undefined1 local_78 [16];
  ulonglong local_68;
  ulonglong uVar9;
  
  local_68 = DAT_1404dc040 ^ (ulonglong)auStack_98;
  puVar5 = *param_1 + param_2;
  uVar8 = (uint)param_2 & 0xf;
  uVar9 = (ulonglong)uVar8;
  puVar1 = *param_1 + uVar9;
  uVar7 = (uint)param_4;
  if (param_4 < 0x11) {
    FUN_1404210f0(local_78,param_3,param_4);
    auVar15 = local_78;
    do {
      if (puVar5 == puVar1) {
        if (uVar9 != 0) {
          uVar11 = param_2 < 0x10;
          if ((bool)uVar11) {
            FUN_1404210f0(local_78,param_1,param_2);
          }
          else {
            local_78 = *param_1;
          }
          iVar3 = pcmpestri(auVar15,local_78,0x70,uVar7,uVar8);
          if ((bool)uVar11) {
            return (undefined1 *)(longlong)iVar3;
          }
        }
        goto LAB_14028d795;
      }
      pauVar6 = (undefined1 (*) [16])(puVar5 + -0x10);
      bVar10 = (undefined1 *)0xf < puVar5;
      puVar5 = puVar5 + -0x10;
      iVar3 = pcmpestri(local_78,*pauVar6,0x70,uVar7,0x10);
    } while (bVar10);
    puVar5 = puVar5 + ((longlong)iVar3 - (longlong)param_1);
  }
  else {
    uVar7 = uVar7 & 0xf;
    pauVar6 = (undefined1 (*) [16])(*param_3 + (param_4 & 0xfffffffffffffff0));
    FUN_1404210f0(local_78,pauVar6,uVar7);
    auVar15 = local_78;
    if (puVar5 != puVar1) {
      do {
        auVar14 = *(undefined1 (*) [16])(puVar5 + -0x10);
        puVar5 = puVar5 + -0x10;
        auVar12 = pcmpestrm(*param_3,auVar14,0x30,0x10,0x10);
        pauVar4 = param_3;
        while( true ) {
          uVar2 = auVar12._8_4_;
          uVar17 = auVar12._12_4_;
          if (pauVar4 == pauVar6) break;
          auVar13 = *pauVar4;
          pauVar4 = pauVar4 + 1;
          auVar13 = pcmpestrm(auVar13,auVar14,0x30,0x10,0x10);
          auVar16._0_4_ = auVar12._0_4_ & auVar13._0_4_;
          auVar16._4_4_ = auVar12._4_4_ & auVar13._4_4_;
          auVar16._8_4_ = uVar2 & auVar13._8_4_;
          auVar16._12_4_ = uVar17 & auVar13._12_4_;
          auVar12 = auVar16;
        }
        if ((param_4 & 0xf) != 0) {
          auVar14 = pcmpestrm(local_78,auVar14,0x30,uVar7,0x10);
          auVar12._0_4_ = auVar12._0_4_ & auVar14._0_4_;
          auVar12._4_4_ = 0;
          auVar12._8_4_ = uVar2 & auVar14._8_4_;
          auVar12._12_4_ = uVar17 & auVar14._12_4_;
        }
        uVar2 = auVar12._0_4_;
        if (uVar2 != 0) {
          iVar3 = 0x1f;
          if (uVar2 != 0) {
            for (; uVar2 >> iVar3 == 0; iVar3 = iVar3 + -1) {
            }
          }
          if (iVar3 != -1) {
            return puVar5 + ((longlong)iVar3 - (longlong)param_1);
          }
        }
      } while (puVar5 != puVar1);
    }
    if (uVar9 == 0) {
LAB_14028d795:
      puVar5 = (undefined1 *)0xffffffffffffffff;
    }
    else {
      if (param_2 < 0x10) {
        FUN_1404210f0(local_78,param_1,param_2);
      }
      else {
        local_78 = *param_1;
      }
      auVar14 = pcmpestrm(*param_3,local_78,0x30,0x10,uVar8);
      while( true ) {
        uVar2 = auVar14._8_4_;
        uVar17 = auVar14._12_4_;
        if (param_3 == pauVar6) break;
        auVar12 = *param_3;
        param_3 = param_3 + 1;
        auVar12 = pcmpestrm(auVar12,local_78,0x30,0x10,uVar8);
        auVar13._0_4_ = auVar14._0_4_ & auVar12._0_4_;
        auVar13._4_4_ = auVar14._4_4_ & auVar12._4_4_;
        auVar13._8_4_ = uVar2 & auVar12._8_4_;
        auVar13._12_4_ = uVar17 & auVar12._12_4_;
        auVar14 = auVar13;
      }
      if ((param_4 & 0xf) != 0) {
        auVar15 = pcmpestrm(auVar15,local_78,0x30,uVar7,uVar8);
        auVar14._0_4_ = auVar14._0_4_ & auVar15._0_4_;
        auVar14._4_4_ = 0;
        auVar14._8_4_ = uVar2 & auVar15._8_4_;
        auVar14._12_4_ = uVar17 & auVar15._12_4_;
      }
      uVar7 = auVar14._0_4_;
      iVar3 = -1;
      if ((uVar7 != 0) && (iVar3 = 0x1f, uVar7 != 0)) {
        for (; uVar7 >> iVar3 == 0; iVar3 = iVar3 + -1) {
        }
      }
      puVar5 = (undefined1 *)(longlong)iVar3;
    }
  }
  return puVar5;
}

