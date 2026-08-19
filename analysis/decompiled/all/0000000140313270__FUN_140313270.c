// Function: FUN_140313270
// Addr: 140313270
// Size: 45 bytes


/* WARNING: Type propagation algorithm not settling */

ulonglong FUN_140313270(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  short sVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint uVar11;
  int *piVar12;
  uint auStackX_18 [2];
  uint uStackX_20;
  uint uStack_b8;
  uint auStack_b4 [5];
  uint uStack_a0;
  undefined8 uStack_98;
  longlong lStack_90;
  uint local_88 [2];
  longlong lStack_80;
  int *piStack_68;
  undefined8 uStack_58;
  
  lVar9 = param_2[6];
  uStack_b8 = (**(code **)(param_1 + 0x2a0))(param_1,0x63767420,param_2,local_88);
  uVar10 = 0;
  if (uStack_b8 != 0) {
    *(undefined4 *)(param_1 + 0x3d0) = 0;
    *(undefined8 *)(param_1 + 0x3d8) = 0;
    return 0;
  }
  *(uint *)(param_1 + 0x3d0) = local_88[0] >> 1;
  uVar7 = FUN_1402f80c0(lVar9,4,0,local_88[0] >> 1,0,&uStack_b8);
  *(undefined8 *)(param_1 + 0x3d8) = uVar7;
  uVar8 = (ulonglong)uStack_b8;
  if ((uStack_b8 == 0) &&
     (uVar8 = FUN_1402f50b0(param_2,*(int *)(param_1 + 0x3d0) * 2), (int)uVar8 == 0)) {
    piVar12 = *(int **)(param_1 + 0x3d8);
    piVar1 = piVar12 + *(uint *)(param_1 + 0x3d0);
    uStack_b8 = 0;
    for (; piVar12 < piVar1; piVar12 = piVar12 + 1) {
      sVar3 = FUN_1402f5370(param_2);
      *piVar12 = (int)sVar3 << 6;
    }
    func_0x0001402f51d0(param_2);
    if (*(char *)(param_1 + 0x401) == '\0') {
      uVar8 = (ulonglong)uStack_b8;
    }
    else {
      piVar1 = *(int **)(param_1 + 0x408);
      auStack_b4[1] = 0;
      uVar8 = uVar10;
      if ((piVar1 != (int *)0x0) && (*(longlong *)(param_1 + 0x3d8) != 0)) {
        lStack_90 = param_2[6];
        piStack_68 = piVar1;
        auStackX_18[0] = (**(code **)(param_1 + 0x2a0))(param_1,0x63766172,param_2,auStack_b4);
        if ((auStackX_18[0] == 0) &&
           (auStackX_18[0] = FUN_1402f50b0(param_2,auStack_b4[0]), uVar8 = 0, auStackX_18[0] == 0))
        {
          lVar9 = param_2[7];
          lVar2 = *param_2;
          iVar6 = FUN_1402f52d0(param_2);
          if (iVar6 == 0x10000) {
            uVar4 = FUN_1402f5370(param_2);
            uVar5 = FUN_1402f5370(param_2);
            uStack_a0 = uVar4 & 0xfff;
            if ((uint)uVar5 + uStack_a0 * 4 <= auStack_b4[0]) {
              uStack_98 = 0;
              uStackX_20 = ((uint)uVar5 - (int)lVar2) + (int)lVar9;
              if ((short)uVar4 < 0) {
                uVar11 = (int)param_2[7] - (int)*param_2;
                if (uStackX_20 < (uint)((int)param_2[8] - (int)*param_2)) {
                  lVar9 = (ulonglong)uStackX_20 + *param_2;
                }
                else {
                  lVar9 = param_2[8];
                }
                param_2[7] = lVar9;
                lStack_80 = FUN_1403115b0(param_2,auStack_b4 + 1);
                uStackX_20 = (int)param_2[7] - (int)*param_2;
                if (uVar11 < (uint)((int)param_2[8] - (int)*param_2)) {
                  param_2[7] = (ulonglong)uVar11 + *param_2;
                }
                else {
                  param_2[7] = param_2[8];
                }
              }
              else {
                lStack_80 = 0;
              }
              lVar9 = lStack_90;
              uStack_58 = FUN_1402f80c0(lStack_90,4,0,*piVar1 * 3,0,auStackX_18);
              if (auStackX_18[0] == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_1402f8180(lVar9,4,0,*(undefined4 *)(param_1 + 0x3d0),0,auStackX_18);
              }
              if (lStack_80 != -1) {
                    /* WARNING: Subroutine does not return */
                FUN_1402f8060(lVar9,lStack_80);
              }
                    /* WARNING: Subroutine does not return */
              FUN_1402f8060(lVar9,uStack_98);
            }
            auStackX_18[0] = 8;
          }
          else {
            auStackX_18[0] = 0;
          }
          func_0x0001402f51d0(param_2);
          uVar8 = (ulonglong)auStackX_18[0];
        }
      }
    }
  }
  return uVar8;
}

