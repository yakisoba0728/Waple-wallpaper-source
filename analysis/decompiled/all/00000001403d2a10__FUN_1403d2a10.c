// Function: FUN_1403d2a10
// Addr: 1403d2a10
// Size: 568 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1403d2a10(longlong param_1,undefined4 *param_2,uint param_3,uint *param_4,uint param_5,
                  uint *param_6,uint param_7)

{
  uint uVar1;
  float fVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar7;
  float fVar8;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  ulonglong local_80;
  LPCRITICAL_SECTION local_78;
  undefined8 local_70;
  ulonglong local_60;
  
  local_60 = DAT_1404dc040 ^ (ulonglong)auStack_a8;
  FUN_14039db30();
  lpCriticalSection = (LPCRITICAL_SECTION)(param_2 + 2);
  local_78 = lpCriticalSection;
  EnterCriticalSection(lpCriticalSection);
  local_80 = *(ulonglong *)(param_2 + 0xc);
  local_88 = *param_2;
  if (*(char *)((longlong)param_2 + 6) == '\0') {
    fVar8 = (float)(int)((*(int *)(param_1 + 0x28) >> 0x1f & 0xfffffffeU) + 1);
  }
  else {
    FUN_1402f0710(local_80,&local_70,0);
    fVar8 = (float)local_70._4_4_ * (float)local_70._4_4_ +
            (float)(int)local_70 * (float)(int)local_70;
    if (fVar8 < 0.0) {
      fVar8 = (float)FUN_14041ad10();
    }
    else {
      fVar8 = SQRT(fVar8);
    }
    fVar8 = fVar8 * DAT_1404925f0 *
            (float)(int)((*(int *)(param_1 + 0x28) >> 0x1f & 0xfffffffeU) + 1);
  }
  uVar3 = local_80;
  fVar2 = DAT_140492934;
  uVar7 = 0;
  uVar4 = (ulonglong)param_7;
  if (param_3 != 0) {
    do {
      local_70 = uVar4;
      uVar1 = *param_4;
      local_80 = local_80 & 0xffffffff00000000;
      uVar5 = param_2[(ulonglong)(uVar1 & 0xff) + 0xf];
      if ((uVar5 == 0xffffffff) || (((uVar5 >> 0x10 ^ uVar1) & 0xffffff00) != 0)) {
        FUN_1402eff30(uVar3,uVar1,local_88,&local_80);
        iVar6 = -(int)local_80;
        if (-(int)local_80 < 0) {
          iVar6 = (int)local_80;
        }
        uVar5 = (int)((float)iVar6 * fVar8 + fVar2) >> 10;
        if (((uVar1 & 0xffff0000) == 0) && (uVar5 < 0x1000000)) {
          param_2[(ulonglong)(uVar1 & 0xff) + 0xf] = (uVar1 & 0xffffff00) << 0x10 | uVar5;
        }
      }
      else {
        uVar5 = uVar5 & 0xffffff;
      }
      uVar7 = uVar7 + 1;
      param_4 = (uint *)((longlong)param_4 + (ulonglong)param_5);
      *param_6 = uVar5;
      param_6 = (uint *)((longlong)param_6 + local_70);
      lpCriticalSection = local_78;
      uVar4 = local_70;
    } while (uVar7 < param_3);
  }
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  return;
}

