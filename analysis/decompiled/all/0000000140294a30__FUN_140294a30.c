// Function: FUN_140294a30
// Addr: 140294a30
// Size: 664 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140294a30(undefined8 param_1,undefined4 param_2,byte *param_3,int param_4,byte *param_5,
                  int param_6,undefined4 param_7)

{
  ulonglong uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  size_t sVar5;
  byte *pbVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  int local_78;
  undefined4 local_74;
  undefined8 local_70;
  uint local_68;
  byte local_62 [18];
  ulonglong local_50;
  
  local_50 = DAT_1404dc110 ^ (ulonglong)&local_78;
  local_74 = param_2;
  local_70 = param_1;
  if (param_4 < 1) {
    if (param_4 < -1) goto LAB_140294d33;
  }
  else {
    sVar5 = __strncnt((char *)param_3,(longlong)param_4);
    param_4 = (int)sVar5;
  }
  if (param_6 < 1) {
    if (param_6 < -1) goto LAB_140294d33;
  }
  else {
    sVar5 = __strncnt((char *)param_5,(longlong)param_6);
    param_6 = (int)sVar5;
  }
  if ((param_4 == 0) || (param_6 == 0)) {
    if ((param_4 == param_6) ||
       (((1 < param_6 || (1 < param_4)) || (iVar3 = (*DAT_140426540)(param_7,&local_68), iVar3 == 0)
        ))) goto LAB_140294d33;
    if (0 < param_4) {
      if (1 < local_68) {
        pbVar6 = local_62;
        while (((local_62[0] != 0 && (pbVar6[1] != 0)) &&
               ((*param_3 < *pbVar6 || (pbVar6[1] < *param_3))))) {
          pbVar6 = pbVar6 + 2;
          local_62[0] = *pbVar6;
        }
      }
      goto LAB_140294d33;
    }
    if (0 < param_6) {
      if (1 < local_68) {
        pbVar6 = local_62;
        while (((local_62[0] != 0 && (pbVar6[1] != 0)) &&
               ((*param_5 < *pbVar6 || (pbVar6[1] < *param_5))))) {
          pbVar6 = pbVar6 + 2;
          local_62[0] = *pbVar6;
        }
      }
      goto LAB_140294d33;
    }
  }
  local_78 = (*DAT_140426748)(param_7,9,param_3,param_4,0,0);
  if (local_78 != 0) {
    uVar1 = (longlong)local_78 * 2 + 0x10;
    uVar9 = 0;
    if ((ulonglong)((longlong)local_78 * 2) < uVar1) {
      uVar9 = uVar1;
    }
    if (uVar9 != 0) {
      if (uVar9 < 0x401) {
        func_0x0001402ed390(0xffffffffffffff0);
        return;
      }
      puVar7 = (undefined4 *)thunk_FUN_1402da070(uVar9);
      if (puVar7 != (undefined4 *)0x0) {
        *puVar7 = 0xdddd;
        puVar7 = puVar7 + 4;
      }
      if (puVar7 != (undefined4 *)0x0) {
        iVar3 = (*DAT_140426748)(param_7,1,param_3,param_4,puVar7,local_78);
        if (iVar3 != 0) {
          iVar3 = (*DAT_140426748)(param_7,9,param_5,param_6,0,0);
          if (iVar3 != 0) {
            uVar1 = (longlong)iVar3 * 2 + 0x10;
            uVar9 = 0;
            if ((ulonglong)((longlong)iVar3 * 2) < uVar1) {
              uVar9 = uVar1;
            }
            if (uVar9 != 0) {
              if (uVar9 < 0x401) {
                func_0x0001402ed390();
                return;
              }
              puVar8 = (undefined4 *)thunk_FUN_1402da070(uVar9);
              if (puVar8 != (undefined4 *)0x0) {
                *puVar8 = 0xdddd;
                puVar8 = puVar8 + 4;
              }
              if (puVar8 != (undefined4 *)0x0) {
                piVar2 = puVar8 + -4;
                iVar4 = (*DAT_140426748)(param_7,1,param_5,param_6,puVar8,iVar3);
                if (iVar4 != 0) {
                  (*_UNK_140426548)(local_70,local_74,puVar7,local_78,puVar8,iVar3,0,0,0);
                  if (*piVar2 == 0xdddd) {
                    func_0x0001402bf8e0(piVar2);
                  }
                  if (puVar7[-4] == 0xdddd) {
                    func_0x0001402bf8e0(puVar7 + -4);
                  }
                  goto LAB_140294d33;
                }
                if (*piVar2 == 0xdddd) {
                  func_0x0001402bf8e0(piVar2);
                }
              }
            }
          }
        }
        if (puVar7[-4] == 0xdddd) {
          func_0x0001402bf8e0(puVar7 + -4);
          return;
        }
      }
    }
  }
LAB_140294d33:
  func_0x0001402ed2f0(local_50 ^ (ulonglong)&local_78);
  return;
}

