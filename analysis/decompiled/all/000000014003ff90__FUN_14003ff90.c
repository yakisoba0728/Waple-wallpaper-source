// Function: FUN_14003ff90
// Addr: 14003ff90
// Size: 475 bytes


undefined8 * FUN_14003ff90(undefined8 *param_1)

{
  code *pcVar1;
  longlong lVar2;
  ulonglong uVar3;
  short *psVar4;
  undefined8 *puVar5;
  longlong lVar6;
  short *psVar7;
  short *psVar8;
  ulonglong uVar9;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  puVar5 = param_1;
  if (7 < (ulonglong)param_1[3]) {
    puVar5 = (undefined8 *)*param_1;
  }
  lVar6 = param_1[2];
  psVar7 = (short *)(lVar6 * 2 + (longlong)puVar5);
  for (psVar4 = (short *)FUN_140015e90(puVar5); psVar4 != psVar7; psVar4 = psVar4 + 1) {
    if ((*psVar4 != 0x5c) && (psVar8 = psVar7, *psVar4 != 0x2f)) goto LAB_14003ffe0;
  }
  goto LAB_14004002f;
  while (psVar8 = psVar7, psVar4 != psVar7) {
LAB_14003ffe0:
    psVar7 = psVar8 + -1;
    if ((psVar8[-1] == 0x5c) || (psVar8[-1] == 0x2f)) goto joined_r0x000140040004;
  }
  goto LAB_14004002f;
  while (psVar8 = psVar7, psVar4 != psVar7) {
LAB_140040080:
    psVar7 = psVar8 + -1;
    if ((psVar8[-1] == 0x5c) || (psVar8[-1] == 0x2f)) goto joined_r0x0001400400a4;
  }
  goto LAB_1400400cf;
  while( true ) {
    psVar8 = psVar7 + -1;
    if ((psVar7[-1] != 0x5c) && (psVar7[-1] != 0x2f)) break;
joined_r0x0001400400a4:
    psVar7 = psVar8;
    if (psVar4 == psVar7) break;
  }
  goto LAB_1400400cf;
  while( true ) {
    psVar8 = psVar7 + -1;
    if ((psVar7[-1] != 0x5c) && (psVar7[-1] != 0x2f)) break;
joined_r0x000140040004:
    psVar7 = psVar8;
    if (psVar4 == psVar7) break;
  }
LAB_14004002f:
  if (1 < (ulonglong)((longlong)psVar7 - (longlong)puVar5)) {
    puVar5 = param_1;
    if (7 < (ulonglong)param_1[3]) {
      puVar5 = (undefined8 *)*param_1;
    }
    psVar7 = (short *)(lVar6 * 2 + (longlong)puVar5);
    for (psVar4 = (short *)FUN_140015e90(puVar5); psVar4 != psVar7; psVar4 = psVar4 + 1) {
      if ((*psVar4 != 0x5c) && (psVar8 = psVar7, *psVar4 != 0x2f)) goto LAB_140040080;
    }
LAB_1400400cf:
    local_38 = 0;
    uStack_30 = 0;
    local_48 = 0;
    uStack_40 = 0;
    FUN_140016170(&local_48,puVar5,(longlong)psVar7 - (longlong)puVar5 >> 1);
    local_28 = (undefined4)local_48;
    uStack_24 = local_48._4_4_;
    uStack_20 = (undefined4)uStack_40;
    uStack_1c = uStack_40._4_4_;
    local_18 = (undefined4)local_38;
    uStack_14 = local_38._4_4_;
    uStack_10 = (undefined4)uStack_30;
    uStack_c = uStack_30._4_4_;
    FUN_140016560(param_1,&local_28);
    uVar3 = CONCAT44(uStack_c,uStack_10);
    if (7 < uVar3) {
      lVar2 = CONCAT44(uStack_24,local_28);
      uVar9 = uVar3 * 2 + 2;
      lVar6 = lVar2;
      if (0xfff < uVar9) {
        lVar6 = *(longlong *)(lVar2 + -8);
        if (0x1f < (lVar2 - lVar6) - 8U) {
          pcVar1 = (code *)swi(0x29);
          (*pcVar1)(5);
          pcVar1 = (code *)swi(3);
          puVar5 = (undefined8 *)(*pcVar1)();
          return puVar5;
        }
        uVar9 = uVar3 * 2 + 0x29;
      }
      thunk_FUN_14028af80(lVar6,uVar9);
    }
  }
  return param_1;
}

